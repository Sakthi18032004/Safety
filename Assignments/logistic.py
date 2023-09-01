import matplotlib.pyplot as plt

def logistics(a, x):
    y = a * x * (1 - x)
    return y

n_values = list(range(1, 101))

a = 3.2
x = 0.000005

temp = x

logis_values = list()

logis_values.append(x)

for num in range (1, 100):
    x = logistics(a, x)
    logis_values.append(x)

plt.plot(n_values, logis_values)
plt.xlabel('Number of Random Points (n)')
plt.ylabel('Population')
plt.title(f'Logistic equation simulation for a = {a} and x = {temp}')
plt.show()
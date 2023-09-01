import random
import matplotlib.pyplot as plt

def pi_estimate(n):
    inside_circle = 0
    for num in range(n):
        x = random.random()
        y = random.random()
        
        if (x - 0.5)**2 + (y - 0.5)**2 <= 0.25:
            inside_circle += 1
    
    estimated_probability = inside_circle / n
    
    estimated_pi = 4 * estimated_probability
    return estimated_pi

n_values = list(range(1, 100001))
pi_estimates = [pi_estimate(n) for n in n_values]

plt.plot(n_values, pi_estimates)
plt.axhline(y=3.141592653589793, color='r', linestyle='--', label='True Value of π')
plt.xlabel('Number of Random Points (n)')
plt.ylabel('Estimated Value of π')
plt.title('Estimating π Using Monte Carlo Simulation')
plt.xscale('log')
plt.show()

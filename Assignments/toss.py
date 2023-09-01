import random
import matplotlib.pyplot as plt

def simulate_coin_flip(prob_heads, num_tosses):
    num_heads = 0
    results = []

    for num in range(num_tosses):
        random_number = random.random()
        if random_number < prob_heads:
            num_heads += 1
        results.append(num_heads)

    return results

probability_heads = 0.3
num_tosses = list(range(1, 100001))

heads_counts = simulate_coin_flip(probability_heads, num_tosses[-1])

plt.plot(num_tosses, heads_counts)
plt.xlabel('Number of Tosses (n)')
plt.ylabel('Number of Heads')
plt.title('Number of Heads vs Number of Tosses')
plt.show()

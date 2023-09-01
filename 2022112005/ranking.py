import random
import networkx as nx
import matplotlib.pyplot as plt

G = nx.Graph()
G.add_edges_from([(1, 2), (1, 4), (2, 3), (2, 4), (3, 5), (4, 5)])

node_visits = {node: 0 for node in G.nodes()}

def simulate_random_walk(graph, steps, node_visits):
    current_node = random.choice(list(graph.nodes()))
    for num in range(steps):
        node_visits[current_node] += 1
        neighbors = list(graph.neighbors(current_node))
        if neighbors:
            current_node = random.choice(neighbors)

n = 1000
walk_length = 20

for num in range(n):
    simulate_random_walk(G, walk_length, node_visits)

ranked_nodes = sorted(node_visits.keys(), key=lambda node: node_visits[node], reverse=True)

print("Ranked Nodes (Websites) based on Visit Counts:")
for rank, node in enumerate(ranked_nodes, start=1):
    print(f"{rank}: Node {node}, Visits: {node_visits[node]}")

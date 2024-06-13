# Dijkstra's-algorithm

## What is a graph?
A graph, in short, is a set of objects (called "vertices" in the graph) and connections between them (called "edges" in the graph).

## What is Dijkstra's Algorithm?
Dijkstra's algorithm is used to calculate the shortest path from a given vertex to all other vertices of a graph with non-negative edge weights. A graph can be oriented or unoriented. The result of the algorithm's operation is a tree of shortest paths starting at the given vertex.
Dijkstra's algorithm is based on an idea called relaxation: at each moment of the algorithm's operation, information about the shortest path found so far is stored for each vertex; if the algorithm then finds a better path, this information is updated. Therefore, Dijkstra's algorithm and its analogues are widely used in practice, for example, in programs for GPS devices for the purpose of transport optimization.
Dijkstra's algorithm only works if the edge weights are non-negative. Other algorithms have been developed for graphs that have edges with negative weights.
Let the algorithm be applied to the graph G(V, E). The simplest implementation uses an adjacency matrix to represent the graph and a one-dimensional vector to store the d() values. The time and memory complexity is O(|V|^2).
If the graph is represented by neighbor lists and a priority queue is used to find each subsequent vertex, then with a suitable implementation the time complexity is O(E + |V|.log|V|) and the memory complexity is O(|E |+|V|).

## Implementation
The implementation of the algorithm is contained in a separate file (Dijkstra's Algorithm.cpp).

## Explanation
My code implements Dijkstra's algorithm for finding the shortest path from one source node to all other nodes in a graph with non-negative edge weights. The basic components and logic of the algorithm are correct and conform to the standard implementation of Dijkstra's algorithm. The output shows the shortest distance from the output node (0) to all other nodes in the graph. Dijkstra's algorithm ensures that these distances are minimal using the edges and weights given in the graph.
In the code file that I have already mentioned, I have put quite a number of comments for better clarity of the code.

## Problem-Solving
I chose this algorithm because it seemed to me quite applicable in practice already in our university course. There are many applications that find us a way from point A to point B, in an unknown place. I quite often use some of them, and I think they help not only me, but a large part of society in our daily life. I like its clarity and effectiveness in certain cases and how we can use it to solve complex problems in the real world.

##  Reflection
During the time I spent looking for in-depth information about my chosen algorithm, in addition to recalling its implementation, I learned about real-life problems that have been solved with graph.
Here are some previews that stuck in my mind more clearly:

- Google Maps, Apple Maps, and any other navigation system.
- Internet (traffic finds the shortest path from your computer to the server using Dijkstra's algorithm).
- Connections between people on Facebook.
- Optimization of delivery routes.
- Dijkstra's algorithm is used to move characters and NPCs (Non-Player Characters) in games, ensuring that they find the shortest paths to their goals.
- Used to generate realistic routes and movement in 3D environments.
- Schedule of buses, trains and flights.

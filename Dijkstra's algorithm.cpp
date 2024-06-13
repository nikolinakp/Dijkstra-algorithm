#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

const int N = 100001; // Maximum number of vertices
int dist[N]; // Array to store shortest distances
vector<pair<int, int>>adjacencyList[N]; // //Adjacency list 

// Function to find the shortest path from vertex v using Dijkstra's algorithm
void shortestPathDijkstra(int v)
{
    // Initialize all distances to infinity(INT_MAX)
    for (int i = 0; i < N; i++) dist[i] = INT_MAX;

    // Distance to the source vertex is 0
    dist[v] = 0;

    // Priority queue to store vertices that are being preprocessed
    priority_queue< pair<int, int>, vector <pair<int, int>>, greater<pair<int, int>> > pq;
    pq.push({ 0,v });

    while (!pq.empty())
    {
        // Extract the vertex with the minimum distance value
        int current = pq.top().second;
        int costToCurrent = pq.top().first;
        pq.pop();

        // Optional optimization: skip if current distance is greater than recorded distance
        //   if(costToCurrent > dist[current]) continue;

         // Traverse through all adjacent vertices of the current vertex
        for (pair<int, int> neighbour : adjacencyList[current])
        {

            int child = neighbour.first;
            int costToChildOfCurrent = neighbour.second;

            // If there is a shorter path to the adjacent vertex through the current vertex
            if (dist[child] > costToCurrent + costToChildOfCurrent)
            {
                // Update the distance
                dist[child] = costToCurrent + costToChildOfCurrent;
                // Push the adjacent vertex into the priority queue with updated distance
                pq.push({ costToChildOfCurrent + costToCurrent, child });
            }

        }
    }

}

int main()
{
    int numberOfEdges = 0, numberOfVertices = 0, costToChildOfCurrent = 0;
    int from = 0, to = 0;

    cin >> numberOfVertices >> numberOfEdges;

    // Read all edges and construct the adjacency list
    while (numberOfEdges)
    {
        cin >> from >> to >> costToChildOfCurrent;
        adjacencyList[from].push_back({ to, costToChildOfCurrent });
        adjacencyList[to].push_back({ from, costToChildOfCurrent });
        numberOfEdges--;
    }

    shortestPathDijkstra(0);

    // Print the shortest distances from vertex 0 to all other vertices
    for (int i = 0; i < numberOfVertices; i++)
    {
        cout << dist[i] << " ";
    }

    return 0;
}
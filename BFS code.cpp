#include <iostream>
#include <queue>

using namespace std;

const int MAX_NODES = 100;

// Adjacency matrix to represent the graph
bool graph[MAX_NODES][MAX_NODES];

// Number of nodes in the graph
int n;

// Array to keep track of visited nodes
bool visited[MAX_NODES];

// Function to perform breadth-first search
void BFS(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int current = q.front();
        cout << current << " ";
        q.pop();

        for (int i = 0; i < n; i++) {
            if (graph[current][i] && !visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main() {
    // Get the number of nodes in the graph
    cin >> n;

    // Input the adjacency matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }

    // Start the breadth-first search at node 0
    BFS(0);

    return 0;
}

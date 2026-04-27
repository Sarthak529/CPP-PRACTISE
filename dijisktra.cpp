// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int main() {
//     int n;  
//     cout << "Enter number of nodes: ";
//     cin >> n;

//     int m;
//     cout << "Enter number of edges: ";
//     cin >> m;

//     vector<vector<int>> graph(n, vector<int>(n, INT_MAX));

//     cout << "Enter edges in format: u v w\n";
//     cout << "(u = start node, v = end node, w = weight)\n";

//     for (int i = 0; i < m; i++) {
//         int u, v, w;
//         cin >> u >> v >> w;
//         graph[u][v] = w;
//         graph[v][u] = w;   
//     }

//     int src;
//     cout << "Enter source node: ";
//     cin >> src;

//     vector<int> dist(n, INT_MAX);
//     vector<bool> visited(n, false);

//     dist[src] = 0;

//     for (int count = 0; count < n - 1; count++) {
//         int u = -1;

//         int minDist = INT_MAX;
//         for (int i = 0; i < n; i++) {
//             if (!visited[i] && dist[i] < minDist) {
//                 minDist = dist[i];
//                 u = i;
//             }
//         }

//         visited[u] = true;

//         for (int v = 0; v < n; v++) {
//             if (graph[u][v] != INT_MAX && !visited[v]) {
//                 if (dist[u] + graph[u][v] < dist[v]) {
//                     dist[v] = dist[u] + graph[u][v];
//                 }
//             }
//         }
//     }
//     cout << "\nShortest distances from node " << src << ":\n";
//     for (int i = 0; i < n; i++) {
//         cout << "To node " << i << " = " << dist[i] << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
   
 int n = 5; 

    vector<vector<int>> graph(n, vector<int>(n, INT_MAX));

    graph[0][1] = 2;
    graph[0][2] = 4;
    graph[1][2] = 1;
    graph[1][3] = 7;
    graph[2][4] = 3;
    graph[3][4] = 1;

    graph[1][0] = 2;
    graph[2][0] = 4;
    graph[2][1] = 1;
    graph[3][1] = 7;
    graph[4][2] = 3;
    graph[4][3] = 1;

    int src = 0; 
  

    vector<int> dist(n, INT_MAX);
    vector<bool> visited(n, false);

    dist[src] = 0;

    for (int count = 0; count < n - 1; count++) {
        int u = -1;
        int minDist = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (!visited[i] && dist[i] < minDist) {
                minDist = dist[i];
                u = i;
            }
        }

        visited[u] = true;

        for (int v = 0; v < n; v++) {
            if (graph[u][v] != INT_MAX && !visited[v]) {
                if (dist[u] + graph[u][v] < dist[v]) {
                    dist[v] = dist[u] + graph[u][v];
                }
            }
        }
    }

    cout << "Shortest distances from node " << src << ":\n";
    for (int i = 0; i < n; i++) {
        cout << "To node " << i << " = " << dist[i] << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

// Graph class represents a directed graph 
// using adjacency list representation
class Graph {
  int V; // number of vertices
  vector<int>* adj; // adjacency list

public:
  Graph(int V) {
    this->V = V;
    adj = new vector<int>[V];
  }

  // function to add an edge to the graph
  void addEdge(int u, int v) {
    adj[u].push_back(v);
  }

  // function to print the adjacency list of the graph
  void printAdjList() {
    for (int i = 0; i < V; i++) {
      cout << i << ": ";
      for (int j : adj[i]) {
        cout << j << " ";
      }
      cout << endl;
    }
  }
};

int main() {
  Graph g(4); // create a graph with 4 vertices
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(2, 3);
  g.addEdge(3, 1);
  g.printAdjList();

  return 0;
}

    #include <stdio.h>

    #define MAX_VERTICES 10

    int adjMatrix[MAX_VERTICES][MAX_VERTICES];

    void addEdge(int u, int v) {
      adjMatrix[u][v] = 1;
      adjMatrix[v][u] = 1; // For undirected graph
    }

    int main() {
      int numVertices = 4;
      addEdge(0, 1);
      addEdge(0, 2);
      addEdge(1, 2);
      addEdge(2, 3);

      for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
          printf("%d ", adjMatrix[i][j]);
        }
        printf("\n");
      }

      return 0;
    }

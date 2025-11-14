#include <stdio.h>

int visitedB[10], nB, adjB[10][10];

void bfs(int start) {
    int queue[10], front = 0, rear = 0;
    printf("%d ", start);
    visitedB[start] = 1;
    queue[rear++] = start;

    while (front < rear) {
        int v = queue[front++];
        for (int i = 0; i < nB; i++) {
            if (adjB[v][i] == 1 && visitedB[i] == 0) {
                printf("%d ", i);
                visitedB[i] = 1;
                queue[rear++] = i;
            }
        }
    }
}

int main() {
    int i, j, start;

    printf("Enter number of vertices: ");
    scanf("%d", &nB);

    printf("Enter adjacency matrix of the graph:\n");
    for (i = 0; i < nB; i++) {
        for (j = 0; j < nB; j++) {
            scanf("%d", &adjB[i][j]);
        }
    }

    for (i = 0; i < nB; i++)
        visitedB[i] = 0;

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    printf("BFS Traversal: ");
    bfs(start);

    return 0;
}
#include <stdio.h>
#define MAX 5

int matrix[MAX][MAX]={0};

void insertedge(int u,int v) {
    matrix[u][v]=1;
    matrix[v][u]=1;
}

void display() {
    for(int i=0;i<MAX;i++) {
        for(int j=0;j<MAX;j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    insertedge(0,1);
    insertedge(3,4);
    insertedge(3,2);
    display();
    return 0;
}
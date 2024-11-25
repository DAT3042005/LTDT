#include <stdio.h>

#define MAX 100

int n; 
int graph[MAX][MAX];
int visited[MAX]; 


void DFS(int start) {
    int stack[MAX], top = -1;
    stack[++top] = start;

    while (top >= 0) {
        int vertex = stack[top--];
        if (visited[vertex] == 0) { 
            printf("%d ", vertex + 1); 
            visited[vertex] = 1;
        }
        
      
        for (int i = n - 1; i >= 0; i--) { 
            if (graph[vertex][i] == 1 && visited[i] == 0) {
                stack[++top] = i;
            }
        }
    }
}

int main() {
  
    FILE *file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1; 
    }

   
    fscanf(file, "%d", &n);

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(file, "%d", &graph[i][j]);
        }
    }

  
    int x;
    printf("Nhap dinh can duyet x = ");
    scanf("%d", &x);
    x--; 

  
    for (int i = 0; i < n; i++) {
        visited[i] = 0; 
    }

  
    printf("Ket qua duyet DFS(%d) la: ", x + 1);
    DFS(x); 
    printf("\n");

   
    fclose(file);

    return 0;
}


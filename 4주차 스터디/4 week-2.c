#include <stdio.h>

int main() {
    int n, m;
    scanf_s("%d %d", &n, &m);

    int grid[9][9] = { 0 };  

    for (int k = 1; k <= m; k++) {
        int r, c;
        scanf_s("%d %d", &r, &c);
        grid[r - 1][c - 1] = k;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}

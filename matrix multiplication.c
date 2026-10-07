#include <stdio.h>

int main() {
    int m, n, n2, p;
    int A[100][100], B[100][100], C[100][100];

    // Read dimensions of Matrix A
    scanf("%d %d", &m, &n);

    // Read Matrix A
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read dimensions of Matrix B
    scanf("%d %d", &n2, &p);

    // Check if multiplication is possible
    if (n != n2) {
        printf("Invalid input");
        return 0;
    }

    // Read Matrix B only if multiplication is possible
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;

            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

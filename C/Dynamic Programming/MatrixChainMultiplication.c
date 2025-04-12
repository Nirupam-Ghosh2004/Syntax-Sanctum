#include <stdio.h>
#include <limits.h>

// Function to perform matrix chain multiplication
int matrixChainOrder(int p[], int n) {
    int m[n][n]; // DP table to store minimum costs

    // cost is zero when multiplying one matrix
    for (int i = 1; i < n; i++)
        m[i][i] = 0;

    // l is the chain length
    for (int l = 2; l < n; l++) {
        for (int i = 1; i < n - l + 1; i++) {
            int j = i + l - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k < j; k++) {
                int cost = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (cost < m[i][j])
                    m[i][j] = cost;
            }
        }
    }

    return m[1][n - 1]; // minimum cost from A1 to An
}

int main() {
    // Dimensions array: A1(5x10), A2(10x20), A3(20x25)
    int arr[] = {5, 10, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minCost = matrixChainOrder(arr, n);
    printf("Minimum number of scalar multiplications: %d\n", minCost);

    return 0;
}

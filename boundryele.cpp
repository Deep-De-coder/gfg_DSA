#include <vector>

std::vector<int> boundaryTraversal(const std::vector<std::vector<int>>& matrix, int n, int m) {
    std::vector<int> result;
    if (n == 0 || m == 0) return result;  // If the matrix is empty, return an empty vector.

    // Traverse the top row
    for (int j = 0; j < m; j++) {
        result.push_back(matrix[0][j]);
    }

    // Traverse the right column, if more than one row
    if (n > 1) {
        for (int i = 1; i < n; i++) {
            result.push_back(matrix[i][m - 1]);
        }
    }

    // Traverse the bottom row, if more than one row and more than one column
    if (n > 1 && m > 1) {
        for (int j = m - 2; j >= 0; j--) {
            result.push_back(matrix[n - 1][j]);
        }
    }

    // Traverse the left column, if more than one row and more than one column, and more than two rows
    if (n > 2 && m > 1) {
        for (int i = n - 2; i > 0; i--) {
            result.push_back(matrix[i][0]);
        }
    }

    return result;
}



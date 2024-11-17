#include <vector>
#include <iostream>

std::vector<int> snakePattern(const std::vector<std::vector<int>>& matrix) {
    if (matrix.empty()) {
        return {};
    }

    int R = matrix.size();
    int C = matrix[0].size();
    std::vector<int> result;

    for (int i = 0; i < R; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < C; ++j) {
                result.push_back(matrix[i][j]);
            }
        } else {
            for (int j = C - 1; j >= 0; --j) {
                result.push_back(matrix[i][j]);
            }
        }
    }

    return result;
}

int main() {
    // Example usage:
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    std::vector<int> result = snakePattern(matrix);
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

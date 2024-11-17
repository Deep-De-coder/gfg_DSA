#include <vector>
#include <algorithm> 

void transpose(std::vector<std::vector<int>>& matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            std::swap(matrix[i][j], matrix[j][i]); 
        }
    }
}

#include <iostream>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {4, 4, 4, 4}
    };
    
    int n = 4;
    transpose(matrix, n);
    
    for (const auto& row : matrix) {
        for (int elem : row) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

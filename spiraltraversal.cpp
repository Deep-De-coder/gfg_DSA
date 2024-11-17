#include <vector>
#include <iostream>

std::vector<int> spirallyTraverse(std::vector<std::vector<int>> &mat) {
    std::vector<int> result;
    if (mat.empty()) return result;
    
    int top = 0, bottom = mat.size() - 1;
    int left = 0, right = mat[0].size() - 1;

    while (top <= bottom && left <= right) {
        // Traverse from left to right along the top row
        for (int i = left; i <= right; ++i) {
            result.push_back(mat[top][i]);
        }
        top++;

        // Traverse downwards along the right column
        for (int i = top; i <= bottom; ++i) {
            result.push_back(mat[i][right]);
        }
        right--;

        // Make sure we are now on a different row
        if (top <= bottom) {
            // Traverse from right to left along the bottom row
            for (int i = right; i >= left; --i) {
                result.push_back(mat[bottom][i]);
            }
            bottom--;
        }

        // Make sure we are now on a different column
        if (left <= right) {
            // Traverse upwards along the left column
            for (int i = bottom; i >= top; --i) {
                result.push_back(mat[i][left]);
            }
            left++;
        }
    }

    return result;
}

int main() {
    std::vector<std::vector<int>> mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    std::vector<int> result = spirallyTraverse(mat);
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}

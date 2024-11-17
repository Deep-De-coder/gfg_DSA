#include <iostream>
#include <vector>
#include <algorithm>

void rotateby90(std::vector<std::vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            std::swap(matrix[i][j], matrix[j][i]);
        }
    }
        
        for(int i=0;i<n;i++){
            
        int low=0;
        int high =n-1;
            while(low<high){
                std::swap(matrix[low][i], matrix[high][i]);
                low++;
                high --;
            }
        }
    }
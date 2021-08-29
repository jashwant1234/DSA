class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int x) {
        int i=0;
        int j=matrix[0].size()-1;
        while(i<=matrix.size()-1 && j>=0){
            if(matrix[i][j]==x)
                return true;
            else if(matrix[i][j]<x)
               i++; 
            else
                j--;
        }
        return false;
        
    }
};
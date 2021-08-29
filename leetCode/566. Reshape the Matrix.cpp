class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>arr(r,vector<int>(c));
        int L=0,M=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                cout<<L%r<<" "<<M%c<<endl;
                arr[L % r][M++ % c]=mat[i][j];
                if(M%c == 0){
                    // cout<<M<<c;
                    L++;}
            }
            
        }
        if(r*c == mat.size()*mat[0].size())
        return arr;
        
        return mat;
    }
};
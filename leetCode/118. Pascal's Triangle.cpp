class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>arr;
        
        for(int i=0;i<numRows;i++){
            vector<int>k;
            for(int j=0;j<=i;j++){
                if(j==0 || j==i)
                    k.push_back(1);
                else{
                    k.push_back(arr.at(i-1).at(j-1)+arr.at(i-1).at(j));
                }
            }
             arr.push_back(k);
        }
        return arr;
    }
};
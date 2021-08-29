class Solution {
public:
    bool valid(vector<vector<char>>& board,int i,int j){
        unordered_map<int,int>uumb;
        int l=i+3,m=j+3;
        for(;i<l;i++){
            for(;j<m;j++){
                 cout<<i<<" "<<j<<endl;
                if(board[i][j] != '.'){
                   uumb[board[i][j]]++;}
            }
            j=m-3;
        }
            for(auto k:uumb)
                if(k.second>1)
                    return false;
       
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        bool flag=true;
        for(int i=0;i<9;i++){
            unordered_map<int,int>uumr,uumc;
            for(int j=0;j<9;j++){
                
                if(board[i][j] != '.')
                    uumr[board[i][j]]++;
                
                if(board[j][i] != '.')
                    uumc[board[j][i]]++;
                
                if(i%3 == 0&&j%3 == 0)
                    flag = valid(board,i,j);
                
            if(!flag)
                return false;
            }
            for(auto k:uumr)
                if(k.second>1)
                    return false;
            
            for(auto k:uumc)
                if(k.second>1)
                    return false;
        }
        return true;
    }
};
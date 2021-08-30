class Solution {
public:
    bool canConstruct(string x, string y) {
         if(x.size()>y.size())
            return false;
        int n=x.length();
        unordered_map<char,int>uum;
        for(int i=0;i<y.length();i++){
            uum[y[i]]++;
        }
        for(int i=0;i<n;i++){
            if(uum.find(x[i])!=uum.end()){
                uum[x[i]]--;
                if(uum[x[i]]==0)
                    uum.erase(x[i]);
            }else{
                return false;
            }
        }
        return true;
    }
};
class Solution {
public:
    int firstUniqChar(string s) {
    unordered_map<char,int>uum;
        int res=0;
        for(int i=0;i<s.length();i++){
            uum[s[i]]++;
            while(uum[s[res]]!=1 && res<=i){
                res++;
            }
        }
        if(res == s.length())
            return -1;
        return res;
    }
};
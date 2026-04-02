class Solution {
public:
    int characterReplacement(string s, int k) {
         unordered_map<char,int> mp;
        int i=0; int max_f=0,res=0;
        for(int j=0;j<s.size();j++)
        {
            mp[s[j]]++;
            max_f=max(mp[s[j]],max_f);
            if((j-i+1 - max_f)>k)
            {
                mp[s[i]]--;
                i++;                
            }
            res=max(res,j-i+1);
        }
        return res;
    }
};

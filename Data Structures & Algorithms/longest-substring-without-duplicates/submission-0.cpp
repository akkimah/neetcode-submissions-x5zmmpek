class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int i=0, j=0;
        int n=s.size();
        int max_len=0;
        unordered_map<char,int> mp;
        while(i<n && j<n)
        {
             if(mp.find(s[j])==mp.end())
             {
                mp[s[j]]++;
                j++;
               
             }
             else
             {
                 max_len= max(max_len, j-i);
                // cout << "j " << j << "i " << i << endl;
                mp[s[i]]--;
                if(mp[s[i]]==0)
                {
                    mp.erase(s[i]);
                }

                i++;

             }
        }
        return max(max_len,j-i);
        
    }
};

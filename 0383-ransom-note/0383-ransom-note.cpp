class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.size();
        int m=magazine.size();
        
        map<char, int> mp;
        
        for(int i=0; i<n; i++)
        {
            mp[ransomNote[i]]++;
        }
        
        for(int i=0; i<m; i++)
        {
            mp[magazine[i]]--;
        }
        
        for(auto it: mp)
        {
            if(it.second>0)
                return false;
        }
        
        return true;
    }
};
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int>mp;
        unordered_map<char,int>mp2;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            mp2[t[i]]++;
        }
        for(auto x:mp){
            if(mp2[x.first]!=x.second){
                return false;
            }
        }
        return true;
        
    }
};

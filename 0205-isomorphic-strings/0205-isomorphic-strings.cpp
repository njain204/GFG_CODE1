class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>m1;
        set<char>s1;
        for(int i=0;i<s.size();i++){
            if(m1[s[i]]==NULL)
                m1[s[i]]=t[i];
        else if(m1[s[i]]!=t[i]){
            return false;
        }
           s1.insert(t[i]);
        }
         if(m1.size() != s1.size())
            return false;
        return true;
    }
};
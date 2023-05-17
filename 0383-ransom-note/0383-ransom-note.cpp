class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char,int>m1;
        for(int i=0;i<m.size();i++){
            m1[m[i]]++;
        }
        for(int i=0;i<r.size();i++){
            if(m1[r[i]]>0) m1[r[i]]--;
            else return false;
        }
        return true;
    }
};
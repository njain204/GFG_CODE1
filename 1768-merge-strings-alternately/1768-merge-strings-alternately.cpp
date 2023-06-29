class Solution {
public:
    string mergeAlternately(string word1, string word2) {
         string ans;
        int w1 = word1.size();
        int w2 = word2.size();
        int i=0 ,j=0;
        bool wrd1 = false; 
        while(i!= w1 and j!= w2){
            if(wrd1 == false ){
                ans.push_back(word1[i]);
                i++;
                wrd1=true;
                }
             else{
                ans.push_back(word2[j]);
                j++;
                wrd1=false;
             }
        }
        while(i!=w1){
            ans.push_back(word1[i]);
            i++;
        }
        while(j!=w2){
            ans.push_back(word2[j]);
            j++;
        }
        return ans;
    }
};
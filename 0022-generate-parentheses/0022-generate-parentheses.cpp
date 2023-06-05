class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string >ans;
        helper(ans,n,0,0,"");
        return ans;
    }
    void helper(vector<string>&ans,int n,int open,int close,string curr_str){
        if(curr_str.size()==n*2){
            ans.push_back(curr_str);
            return;
        }
        if(open<n)
            helper(ans,n,open+1,close,curr_str+"(");
        if(close<open)
            helper(ans,n,open,close+1,curr_str+")");
    }
    
};
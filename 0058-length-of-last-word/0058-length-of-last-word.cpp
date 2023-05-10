class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            st.push(s[i]);
        }
        int count=0;
        while(st.top()==' ')st.pop();
        while(!st.empty()&&st.top()!=' '){
            count++;
            st.pop();
        }
        return count;
    }
};
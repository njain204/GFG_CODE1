class Solution {
public:
    string predictPartyVictory(string senate) {
     int n=senate.size();
        queue<int>r;
        queue<int>q;
        for(int i=0;i<n;i++)
            (senate[i]=='R')?r.push(i):q.push(i);
        while(!q.empty()&&!r.empty()){
            int rid=r.front();
            int qid=q.front();
            r.pop();
            q.pop();
            (rid<qid)?r.push(rid+n):q.push(qid+n);
        }
        return  (q.size()>r.size())?"Dire":"Radiant";
    }
};
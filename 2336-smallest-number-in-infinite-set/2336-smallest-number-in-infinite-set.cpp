class SmallestInfiniteSet {
public:
    set<int>s;
    SmallestInfiniteSet() {
         for(int i=1;i<=1000;i++){
            s.insert(i);
    }}
    
    int popSmallest() {
        auto it = s.begin();
        int ans = *it;
        s.erase(s.begin());
        return ans;
    }
    
    void addBack(int num) {
        s.insert(num);
    }
};
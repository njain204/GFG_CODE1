class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int prev = arr[0],k = 1,c=0;
	    for(int i=1;i<arr.size();i++){
	        if(prev==arr[i]) c++;
	        else if(prev!=arr[i]) c = 0;
	        if(c<=1) arr[k++] = arr[i];
	        prev = arr[i];
	    }
	    return k;
    }
};
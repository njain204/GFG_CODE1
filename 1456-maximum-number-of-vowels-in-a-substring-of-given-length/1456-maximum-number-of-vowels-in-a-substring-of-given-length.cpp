class Solution {
public:
     bool isVowel( char c ){
        if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ) return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int maxi = 0;
        int tmp = 0;
        for( int i=0 ; i<k ; i++ ){
            if( isVowel(s[i])) tmp++;
        }
        maxi = max( maxi, tmp );
        for( int i=k ; i<s.size() ; i++ ){
            if( isVowel(s[i-k]) ) tmp -= 1;
            if( tmp < 0 ) tmp = 0;
            if( isVowel(s[i]) ) tmp += 1;
            maxi = max( maxi, tmp );
        }
        return maxi;
    }
};
class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size(), c=0;
        for(int i=0;i<n;i++){
            if(word[i]>=65 && word[i]<=90)
                c++;
        }
        if(c==n || ((word[0]>=65 && word[0]<=90) && c==1) || c==0) return true;
        return false;
        
    }
};

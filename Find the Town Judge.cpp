class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
  vector<int> arr(n+1,0);
        for(int i =0 ;i<trust.size();i++){
            arr[trust[i][0]]--; //if a given person trust someone then decrement the count of his index
            arr[trust[i][1]]++; //increment the count of the index whom he trusts
        }
        for(int i=1;i<arr.size();i++){
            if(arr[i]==n-1) return i;
        }
        return -1;
    }
};

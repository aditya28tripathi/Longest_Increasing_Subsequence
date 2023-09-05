class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       vector<int>ans;
       
       for(int i = 0; i<n;i++){
           int ind = lower_bound(ans.begin(),ans.end(),a[i])-ans.begin();
           
           if(ind == ans.size()){
               ans.push_back(a[i]);
           }
           
           else{
               ans[ind] = a[i];
           }
       }
       
       return ans.size();
    }
};

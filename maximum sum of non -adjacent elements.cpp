#include <bits/stdc++.h> 

int solveByRec(vector<int> &nums, int n){
    if(n<0) return 0;
    if(n==0) return nums[0];

    int incl=solveByRec(nums,n-2) +nums[n];
    int excl=solveByRec(nums,n-1) +0;
    return max(incl,excl);
}


int solveByMemo(vector<int> &nums, int n,vector<int>&dp){
    if(n<0) return 0;
    if(n==0) return nums[0];

    if(dp[n]!=-1) return dp[n];
    
   int incl = nums[n] + solveByMemo(nums, n - 2, dp);
    int excl = solveByMemo(nums, n - 1, dp);

    dp[n] = max(incl, excl);
    return dp[n];
}



int solveByTab(vector<int> &nums, int n){
    
    if (n == 0) return 0;
    if (n == 1) return nums[0];

    vector<int>dp(n,-1);
    dp[0]=nums[0];
    dp[1] = max(nums[0], nums[1]);

    for(int i=2;i<n;i++){
        int incl=dp[i-2]+nums[i];
        int excl=dp[i-1]+0;
        dp[i]=max(incl,excl);
    }

    return dp[n-1];
}




int solveBySpace(vector<int> &nums, int n){
    if(n<0) return 0;
    if(n==0) return nums[0];
    
    int prev1=0;
    int prev2=nums[0];

    for(int i=1;i<n;i++){
        int incl=prev1+nums[i];
        int excl=prev2+0;
        int curr=max(incl,excl);
        prev1=prev2;
        prev2=curr;
    }

    return prev2;

}



int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.

/*  solved by RECURSION only  */
    // int n=nums.size();
    // int ans= solveByRec(nums,n-1);   //right to left //pass last index
    // return ans;



/*  solved by RECURSION + MEMOIZATION  */
    // int n=nums.size();
    // vector<int>dp(n,-1);
    // int ans= solveByMemo(nums,n-1,dp);   //right to left //pass last index
    // return ans;



/*  solved by TABULATION METHOD  */
    // int n=nums.size();
    // int ans= solveByTab(nums,n);   //right to left //pass last index
    // return ans;



/*  solved by SPACE OPTIMISATION  */
     int n=nums.size();
    int ans= solveBySpace(nums,n);   //right to left //pass last index
    return ans;


}
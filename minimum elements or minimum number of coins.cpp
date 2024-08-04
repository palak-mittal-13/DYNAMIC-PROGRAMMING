// #include <bits/stdc++.h> 


// int solveByRec(vector<int> &num, int x){
//     if(x==0) return 0;
//     if(x<0)  return INT_MAX;
//     int mini=INT_MAX;

//     for(int i=0;i<num.size();i++){
//         int ans=solveByRec(num,x-num[i]);
//         if(ans!=INT_MAX){
//             mini=min(mini,1+ans);
//         }
//     }

//     return mini;
// }

// int solveByMem(vector<int> &num, int x, vector<int> &dp) {
//     if(x==0) return 0;
//     if(x<0)  return INT_MAX;
//     if(dp[x]!=-1) return dp[x];

//     int mini=INT_MAX;
//     for(int i=0;i<num.size();i++){
//         int ans=solveByMem(num,x-num[i],dp);
//         if(ans!=INT_MAX){
//             mini=min(mini,1+ans);
//         }
//     }
    
//     dp[x]=mini;
//     return mini;

// }


// int solveByTab(vector<int> &num, int x) {
//     vector<int>dp(x+1,INT_MAX);
//     dp[0]=0;

//     for (int i = 1; i <= x; i++) {
//         for (int j = 0; j < num.size(); j++) {
//       if(i-num[j] >=0  && dp[i-num[j]] !=INT_MAX)      
//         dp[i]=min(dp[i],1+dp[i-num[j]]);

//         }
//     }
//    return dp[x];

// }




// int minimumElements(vector<int> &num, int x)
// {

//   /*by recursion only  
//     // int ans=solveByRec(num,x);
//     // if(ans==INT_MAX) return -1;
//     // return ans;

// */


// /* by dp top down approach
//    vector<int>dp(x+1,-1);
//    int ans=solveByMem(num, x, dp);
//    if(ans==INT_MAX) return -1;
//    return ans;
// */

  
 
// /* by dp tabulation approach
//    int ans=solveByTab(num, x);
//    if(ans==INT_MAX) return -1;
//    return ans;
// */


// }



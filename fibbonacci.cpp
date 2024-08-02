
#include<iostream>
#include<vector>
using namespace std;

/* top down approach=recursion+memoization

int fibb(int n,vector<int>&dp){

if(n==1 ||n==0) return n;
if(dp[n]!=-1) return dp[n];
dp[n]=fibb(n-1,dp)+fibb(n-2,dp);
return dp[n];

}

T.C.=O(n)   S.C.=O(n)+O(n)

*/

/*
int main(){

int n;
cin>>n;
vector<int>dp(n+1,-1);
cout<<fibb(n,dp)<<endl;

return 0;
}
*/

/* bottom up approach=tabulation

int fibb(int n,vector<int>&dp){

dp[1]=1;
dp[0]=0;

for(int i=2;i<=n;i++){
dp[i]=dp[i-1]+dp[i-2];
}
return dp[n];

}

T.C.=O(n)   S.C.=O(n)

*/

/*   space optimisation approach

int fibb(int n){
int prev1=0;
int prev2=1;
int curr;
if(n==0||n==1) return n;
for(int i=2;i<=n;i++){
   curr=prev1+prev2;
   //shift
   prev1=prev2;
   prev2=curr;
}
return curr;

}

T.C.=O(n)   S.C.=O(1)

*/


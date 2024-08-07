/*


#include<limits.h>
#include<climits>
int solveRec(int n, int x, int y, int z){
	if(n==0) return 0;
	if(n<0)  return INT_MIN;
     
	int a=solveRec(n-x,x,y,z)+1; 
	int b=solveRec(n-y,x,y,z)+1; 
	int c=solveRec(n-z,x,y,z)+1; 

    return max(a,max(b,c));
}


int solveMem(int n, int x, int y, int z,vector<int>&dp){
	if(n==0) return 0;
	if(n<0)  return INT_MIN;

	if(dp[n]!=-1) return dp[n];

	int a=solveMem(n-x,x,y,z,dp)+1; 
	int b=solveMem(n-y,x,y,z,dp)+1; 
	int c=solveMem(n-z,x,y,z,dp)+1; 

    dp[n]= max(a,max(b,c));
	return dp[n];
}

//not possible to solve by space optimisation


int solveTab(int n, int x, int y, int z){
	if(n==0) return 0;
	if(n<0)  return INT_MIN;

	vector<int>dp(n+1,INT_MIN);

    dp[0]=0;
	
	for(int i=1;i<=n;i++){
       if(i-x>=0)
	   dp[i]=max(dp[i],dp[i-x]+1);

       if(i-y>=0)
       dp[i]=max(dp[i],dp[i-y]+1);

       if(i-z>=0)
       dp[i]=max(dp[i],dp[i-z]+1);
	}

    return dp[n];
}



int cutSegments(int n, int x, int y, int z) {
	// Write your code here.

// int ans= solveRec(n,x,y,z);
// if(ans<0) return 0;
// return ans;



// vector<int>dp(n+1,-1);
// int ans= solveMem(n,x,y,z,dp);
// if(ans<0) return 0;
// return ans;



int ans= solveTab(n,x,y,z);
if(ans<0) return 0;
return ans;



//not possible to solve by space optimisation

}



*/
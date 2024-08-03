/* by recursion only

class Solution {
public:

    int solve(vector<int>& cost,int n){
        if(n==0) return cost[0];
        if(n==1) return cost[1];
        int ans= cost[n]+ min(solve(cost,n-1),solve(cost,n-2));
        return ans;
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int ans=min(solve(cost,n-1),solve(cost,n-2));
        return ans;
    }
};

*/


/*  by DP APPROACH TOP DOWN

class Solution {
public:

    int solve(vector<int>& cost,int n,vector<int>& dp){
        if(n==0) return cost[0];
        if(n==1) return cost[1];
        if(dp[n]!=-1) return dp[n];
        dp[n]= cost[n]+ min(solve(cost,n-1,dp),solve(cost,n-2,dp));
        return dp[n];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        int ans=min(solve(cost,n-1,dp),solve(cost,n-2,dp));
        return ans;
    }
};

*/


/*  by DP : BOTTOM UP APPROACH 

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        if (n == 0) return 0;
        if (n == 1) return cost[0];

        // Create a dp array with the same size as cost
        vector<int> dp(n);

        // Base cases
        dp[0] = cost[0];
        dp[1] = cost[1];

        // Fill the dp array
        for (int i = 2; i < n; ++i) {
            dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
        }

        // The minimum cost to reach the top is the minimum of the last two steps
        return min(dp[n-1], dp[n-2]);
    }
};

*/


/* BY DP APPROACH: SPACE OPTIMISATION

    class Solution {
public:

int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        if (n == 0) return 0;
        if (n == 1) return cost[0];

        // Create a dp array with the same size as cost+1
        vector<int> dp(n+1);

        // Base cases
        int prev1 = cost[0];
        int prev2 = cost[1];

        for (int i = 2; i < n; i++) {
           int curr=cost[i]+min(prev1,prev2);
           prev1=prev2;
           prev2=curr;
        }

        return min(prev1,prev2);
    }

 };

*/
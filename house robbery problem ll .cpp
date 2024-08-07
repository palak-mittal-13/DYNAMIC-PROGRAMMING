/*

long long int solveByTab(vector<int> &nums) {
    int n = nums.size();
    if (n == 0) return 0;
    if (n == 1) return nums[0];
    if (n == 2) return max(nums[0], nums[1]);

    vector<long long> dp(n, 0);
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);

    for (int i = 2; i < n; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
    }

    return dp[n - 1];
}

long long int houseRobber(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    if (n == 1) return nums[0];

    // Exclude the first house and solve for the rest
    vector<int> first(nums.begin() + 1, nums.end());

    // Exclude the last house and solve for the rest
    vector<int> second(nums.begin(), nums.end() - 1);

    return max(solveByTab(first), solveByTab(second));
}


*/
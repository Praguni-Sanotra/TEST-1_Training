/*
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed,
the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it
will automatically contact the police if two adjacent houses were broken into on the same night.
Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob
tonight without alerting the police.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int rob(vector<int>& nums) {
    if (nums.empty()) return 0;
    if (nums.size() == 1) return nums[0];

    // Initialize the dp array
    vector<int> dp(nums.size(), 0);
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);

    // Fill the dp array using the recurrence relation
    for (int i = 2; i < nums.size(); ++i) {
        dp[i] = max(dp[i-1], dp[i-2] + nums[i]);
    }

    // The answer will be in the last element of the dp array
    return dp.back();
}

int main() {
    vector<int> nums = {1, 2, 3, 1};
    cout << "Maximum amount of money you can rob: " << rob(nums) << endl;
    return 0;
}

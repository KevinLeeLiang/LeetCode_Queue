//
// Created by garen_lee on 2025/6/21.
/**
  ******************************************************************************
  * @file           : L1425_constrainedSubsetSum.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/21
  ******************************************************************************
  */
//

#include "L1425_constrainedSubsetSum.h"

int L1425_constrainedSubsetSum::constrainedSubsetSum(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> dp(n);
    dp[0] = nums[0];
    deque<int> q;
    q.push_back(0);
    int ans = nums[0];
    for (int i = 1; i < n; i++) {
        while (!q.empty() && i - q.front() > k) {
            q.pop_front();
        }
        dp[i] = max(dp[q.front()], 0) + nums[i];
        ans = max(ans, dp[i]);
        while (!q.empty() && dp[i] >= dp[q.back()]) {
            q.pop_back();
        }
        q.push_back(i);
    }
    return ans;
}

void L1425_constrainedSubsetSum::test() {
    vector<int> nums = {10,2,-10,5,20};
    cout << constrainedSubsetSum(nums, 2) << endl;
    nums = {-1, -2, -3};
    cout << constrainedSubsetSum(nums, 1) << endl;
    nums = {10, -2, -10, -5, 20};
    cout << constrainedSubsetSum(nums, 2) << endl;
}
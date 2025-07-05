//
// Created by garen_lee on 2025/7/5.
/**
  ******************************************************************************
  * @file           : L1696_maxResult.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/5
  ******************************************************************************
  */
//

#include "L1696_maxResult.h"

int L1696_maxResult::maxResult(vector<int> &nums, int k) {
    int n = nums.size();
    vector<int> dp(n);
    dp[0] = nums[0];
    deque<int> queue;
    queue.push_back(0);
    for (int i = 1; i < n; i++) {
        while (!queue.empty() && queue.front() < i - k) {
            queue.pop_front();
        }
        dp[i] = dp[queue.front()] + nums[i];
        while (!queue.empty() && dp[queue.back()] <= dp[i]) {
            queue.pop_back();
        }
        queue.push_back(i);
    }
    return dp[n - 1];
}

void L1696_maxResult::test() {
    vector<int> nums = {1, -1, -2, 4, -7, 3};
    int k = 2;
    cout << maxResult(nums, k) << endl;
    nums = {10, -5, -2, 4, 0, 3};
    k = 3;
    cout << maxResult(nums, k) << endl;
    nums = {1, -5, -20, 4, -1, 3, -6, -3};
    k = 2;
    cout << maxResult(nums, k) << endl;
}
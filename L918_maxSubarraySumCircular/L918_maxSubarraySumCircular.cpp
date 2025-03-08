//
// Created by garen_lee on 2025/3/8.
/**
  ******************************************************************************
  * @file           : L918_maxSubarraySumCircular.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/8
  ******************************************************************************
  */
//

#include "L918_maxSubarraySumCircular.h"

int L918_maxSubarraySumCircular::maxSubarraySumCircular(vector<int> &nums) {
    int n = nums.size();
    if (n == 1) {
        return nums[0];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    int maxSum = nums[0], minSum = nums[0];
    int curMax = nums[0], curMin = nums[0];
    for (int i = 1; i < n; i++) {
        curMax = max(curMax + nums[i], nums[i]);
        maxSum = max(maxSum, curMax);
        curMin = min(curMin + nums[i], nums[i]);
        minSum = min(minSum, curMin);
    }
    if (minSum == sum) {
        return maxSum;
    } else {
        return max(maxSum, sum - minSum);
    }
}

void L918_maxSubarraySumCircular::test() {
    vector<int> nums = {1,-2,3,-2};
    int res = maxSubarraySumCircular(nums);
    cout << res << endl;
    nums = {5,-3,5};
    res = maxSubarraySumCircular(nums);
    cout << res << endl;
    nums = {3,-2,2,-3};
    res = maxSubarraySumCircular(nums);
    cout << res << endl;
}
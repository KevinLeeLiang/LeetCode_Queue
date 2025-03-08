//
// Created by garen_lee on 2025/3/8.
/**
  ******************************************************************************
  * @file           : L862_shortestSubarray.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/8
  ******************************************************************************
  */
//

#include "L862_shortestSubarray.h"

int L862_shortestSubarray::shortestSubarray(vector<int> &nums, int k) {
    int n = nums.size();
    vector<long> preSumArr(n + 1);
    for (int i = 0; i < n; i++) {
        preSumArr[i + 1] = preSumArr[i] + nums[i];
    }
    int res = n + 1;
    deque<int> qu;
    for (int i = 0; i <= n; ++i) {
        long curSum = preSumArr[i];
        while (!qu.empty() && curSum - preSumArr[qu.front()] >= k) {
            res = min(res, i - qu.front());
            qu.pop_front();
        }
        while (!qu.empty() && preSumArr[qu.back()] >= curSum) {
            qu.pop_back();
        }
        qu.push_back(i);
    }
    return res < n + 1 ? res : -1;
}

void L862_shortestSubarray::test() {
    vector<int>nums = {1};
    int k = 1;
    cout << shortestSubarray(nums, k) << endl;
    nums = {1, 2};
    k = 4;
    cout << shortestSubarray(nums, k) << endl;
    nums = {2, -1, 2};
    k = 3;
    cout << shortestSubarray(nums, k) << endl;
    nums = {17,85,93,-45,-21};
    k = 150;
    cout << shortestSubarray(nums, k) << endl;
}
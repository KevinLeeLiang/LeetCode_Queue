//
// Created by garen_lee on 2025/6/21.
/**
  ******************************************************************************
  * @file           : L1438_longestSubarray.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/21
  ******************************************************************************
  */
//

#include "L1438_longestSubarray.h"

int L1438_longestSubarray::longestSubarray(vector<int> &nums, int limit) {
    multiset<int> s;
    int n = nums.size();
    int left = 0, right = 0;
    int ans = 0;
    while (right < n) {
        s.insert(nums[right]);
        while (*s.rbegin() - *s.begin() > limit) {
            s.erase(s.find(nums[left]));
            left++;
        }
        ans = max(ans, right - left + 1);
        right++;
    }
    return ans;
}

void L1438_longestSubarray::test() {
    vector<int> nums = {8,2,4,7};
    int limit = 4;
    cout << longestSubarray(nums, limit) << endl;
    nums = {10,1,2,4,7,2};
    limit = 5;
    cout << longestSubarray(nums, limit) << endl;
    nums = {4,2,2,2,4,4,2,2};
    limit = 0;
    cout << longestSubarray(nums, limit) << endl;
}
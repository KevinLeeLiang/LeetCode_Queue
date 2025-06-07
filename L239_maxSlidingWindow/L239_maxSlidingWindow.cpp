//
// Created by garen_lee on 2025/2/14.
/**
  ******************************************************************************
  * @file           : L239_maxSlidingWindow.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/14
  ******************************************************************************
  */
//

#include "L239_maxSlidingWindow.h"
vector<int> L239_maxSlidingWindow::maxSlidingWindow(vector<int>& nums, int k) {
    vector<int>ans;
    deque<int> dp;
    for(int i = 0; i < nums.size(); i++){
        while (!dp.empty() && dp.front() < i - k + 1) {
            dp.pop_front();
        }
        while (!dp.empty() && nums[dp.back()] < nums[i]) {
            dp.pop_back();
        }
        dp.push_back(i);
        if (i >= k - 1) {
            ans.push_back(nums[dp.front()]);
        }
    }
    return ans;
}
void L239_maxSlidingWindow::test(){
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    vector<int> res = maxSlidingWindow(nums, k);
    print_vector(res);
    nums = {1};
    k = 1;
    res = maxSlidingWindow(nums, k);
    print_vector(res);
}
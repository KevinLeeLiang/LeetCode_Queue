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
    if(nums.size() == 0) return {};
    vector<int> res;
    deque<int> dq;
    for(int i = 0; i < nums.size(); i++){
        while (!dq.empty() && dq.front() < i - k + 1) {
            dq.pop_front();
        }
        while (!dq.empty() && nums[dq.back()] < nums[i]) {
            dq.pop_back();
        }
        dq.push_back(i);
        if (i >= k - 1) {
            res.push_back(nums[dq.front()]);
        }
    }
    return res;
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
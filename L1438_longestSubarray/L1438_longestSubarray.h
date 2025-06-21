//
// Created by garen_lee on 2025/6/21.
/**
  ******************************************************************************
  * @file           : L1438_longestSubarray.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/21
  ******************************************************************************
  */
//

#ifndef QUEUE_L1438_LONGESTSUBARRAY_H
#define QUEUE_L1438_LONGESTSUBARRAY_H

#include "util.h"
class L1438_longestSubarray : public LeetcodeQueue {
private:
    int longestSubarray(vector<int>& nums, int limit);
public:
    L1438_longestSubarray() {}
    void test();
};


#endif //QUEUE_L1438_LONGESTSUBARRAY_H

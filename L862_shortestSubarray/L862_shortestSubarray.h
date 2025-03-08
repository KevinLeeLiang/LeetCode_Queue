//
// Created by garen_lee on 2025/3/8.
/**
  ******************************************************************************
  * @file           : L862_shortestSubarray.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/8
  ******************************************************************************
  */
//

#ifndef QUEUE_L862_SHORTESTSUBARRAY_H
#define QUEUE_L862_SHORTESTSUBARRAY_H

#include "util.h"
class L862_shortestSubarray : public LeetcodeQueue {
private:
    int shortestSubarray(vector<int>& nums, int k);
public:
    L862_shortestSubarray() {}
    void test();
};


#endif //QUEUE_L862_SHORTESTSUBARRAY_H

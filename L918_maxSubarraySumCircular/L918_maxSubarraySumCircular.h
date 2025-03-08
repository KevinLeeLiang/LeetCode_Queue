//
// Created by garen_lee on 2025/3/8.
/**
  ******************************************************************************
  * @file           : L918_maxSubarraySumCircular.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/8
  ******************************************************************************
  */
//

#ifndef QUEUE_L918_MAXSUBARRAYSUMCIRCULAR_H
#define QUEUE_L918_MAXSUBARRAYSUMCIRCULAR_H

#include "util.h"
class L918_maxSubarraySumCircular : public LeetcodeQueue {
private:
    int maxSubarraySumCircular(vector<int>& nums);
public:
    L918_maxSubarraySumCircular() {}
    void test();
};


#endif //QUEUE_L918_MAXSUBARRAYSUMCIRCULAR_H

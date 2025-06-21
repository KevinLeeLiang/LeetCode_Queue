//
// Created by garen_lee on 2025/6/21.
/**
  ******************************************************************************
  * @file           : L1425_constrainedSubsetSum.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/21
  ******************************************************************************
  */
//

#ifndef QUEUE_L1425_CONSTRAINEDSUBSETSUM_H
#define QUEUE_L1425_CONSTRAINEDSUBSETSUM_H

#include "util.h"
class L1425_constrainedSubsetSum : public LeetcodeQueue {
private:
    int constrainedSubsetSum(vector<int> &nums, int k);
public:
    L1425_constrainedSubsetSum() {}
    void test();
};


#endif //QUEUE_L1425_CONSTRAINEDSUBSETSUM_H

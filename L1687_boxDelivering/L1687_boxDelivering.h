//
// Created by garen_lee on 2025/7/5.
/**
  ******************************************************************************
  * @file           : L1687_boxDelivering.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/5
  ******************************************************************************
  */
//

#ifndef QUEUE_L1687_BOXDELIVERING_H
#define QUEUE_L1687_BOXDELIVERING_H

#include "util.h"
class L1687_boxDelivering : public LeetcodeQueue {
    int boxDelivering(vector<vector<int>> &boxes, int portsCount, int maxBoxes, int maxWeight);
public:
    L1687_boxDelivering() {};
    void test();
};


#endif //QUEUE_L1687_BOXDELIVERING_H

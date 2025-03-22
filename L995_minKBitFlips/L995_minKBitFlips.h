//
// Created by garen_lee on 2025/3/22.
/**
  ******************************************************************************
  * @file           : L995_minKBitFlips.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/22
  ******************************************************************************
  */
//

#ifndef QUEUE_L995_MINKBITFLIPS_H
#define QUEUE_L995_MINKBITFLIPS_H

#include "util.h"
class L995_minKBitFlips : public LeetcodeQueue {
private:
    int minKBitFlips(vector<int>& nums, int k);
public:
    L995_minKBitFlips() {}
    void test();
};


#endif //QUEUE_L995_MINKBITFLIPS_H

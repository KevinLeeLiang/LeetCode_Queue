//
// Created by garen_lee on 2025/7/5.
/**
  ******************************************************************************
  * @file           : L1696_maxResult.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/5
  ******************************************************************************
  */
//

#ifndef QUEUE_L1696_MAXRESULT_H
#define QUEUE_L1696_MAXRESULT_H

#include "util.h"
class L1696_maxResult : public LeetcodeQueue {
private:
    int maxResult(vector<int> &nums, int k);
public:
    L1696_maxResult(){};
    void test();
};


#endif //QUEUE_L1696_MAXRESULT_H

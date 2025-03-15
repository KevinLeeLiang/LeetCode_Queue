//
// Created by garen-lee on 2025/3/15.
/**
  ******************************************************************************
  * @file           : L936_movesToStamp.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/15
  ******************************************************************************
  */
//

#ifndef QUEUE_L936_MOVESTOSTAMP_H
#define QUEUE_L936_MOVESTOSTAMP_H

#include "util.h"
class L936_movesToStamp : public LeetcodeQueue {
private:
    vector<int> movesToStamp(string stamp, string target);
public:
    L936_movesToStamp() {};
    void test();
};


#endif //QUEUE_L936_MOVESTOSTAMP_H

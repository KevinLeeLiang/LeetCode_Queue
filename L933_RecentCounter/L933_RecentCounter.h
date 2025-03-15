//
// Created by garen-lee on 2025/3/15.
/**
  ******************************************************************************
  * @file           : L933_RecentCounter.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/15
  ******************************************************************************
  */
//

#ifndef QUEUE_L933_RECENTCOUNTER_H
#define QUEUE_L933_RECENTCOUNTER_H

#include "util.h"

namespace L933 {
    class RecentCounter {
    public:
        RecentCounter();

        int ping(int t);

    private:
        queue<int>q_;
    };
};

class L933_RecentCounter : public LeetcodeQueue {
public:
    L933_RecentCounter() {}

    void test();
};


#endif //QUEUE_L933_RECENTCOUNTER_H

//
// Created by garen_lee on 2025/3/22.
/**
  ******************************************************************************
  * @file           : L950_deckRevealedIncreasing.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/22
  ******************************************************************************
  */
//

#ifndef QUEUE_L950_DECKREVEALEDINCREASING_H
#define QUEUE_L950_DECKREVEALEDINCREASING_H

#include "util.h"
class L950_deckRevealedIncreasing : public LeetcodeQueue {
private:
    vector<int> deckRevealedIncreasing(vector<int>& deck);
public:
    L950_deckRevealedIncreasing() {}
    void test();
};


#endif //QUEUE_L950_DECKREVEALEDINCREASING_H

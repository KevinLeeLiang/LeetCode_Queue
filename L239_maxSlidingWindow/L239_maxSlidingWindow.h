//
// Created by garen_lee on 2025/2/14.
/**
  ******************************************************************************
  * @file           : L239_maxSlidingWindow.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/14
  ******************************************************************************
  */
//

#ifndef QUEUE_L239_MAXSLIDINGWINDOW_H
#define QUEUE_L239_MAXSLIDINGWINDOW_H

#include "util.h"

class L239_maxSlidingWindow : public LeetcodeQueue{
private:
    vector<int> maxSlidingWindow(vector<int>& nums, int k);
public:
    L239_maxSlidingWindow(){}
    void test();
};


#endif //QUEUE_L239_MAXSLIDINGWINDOW_H

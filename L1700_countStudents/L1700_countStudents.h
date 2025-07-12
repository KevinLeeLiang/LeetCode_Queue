//
// Created by garen_lee on 2025/7/12.
/**
  ******************************************************************************
  * @file           : L1700_countStudents.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/12
  ******************************************************************************
  */
//

#ifndef QUEUE_L1700_COUNTSTUDENTS_H
#define QUEUE_L1700_COUNTSTUDENTS_H

#include "util.h"
class L1700_countStudents : public LeetcodeQueue {
private:
    int countStudents(vector<int> &students, vector<int> &sandwiches);
public:
    L1700_countStudents() {}
    void test();
};


#endif //QUEUE_L1700_COUNTSTUDENTS_H

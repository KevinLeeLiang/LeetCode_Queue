//
// Created by garen_lee on 2025/7/12.
/**
  ******************************************************************************
  * @file           : L1700_countStudents.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/12
  ******************************************************************************
  */
//

#include "L1700_countStudents.h"

int L1700_countStudents::countStudents(vector<int>& students, vector<int>& sandwiches) {
    int s1 = accumulate(students.begin(), students.end(), 0);
    int s0 = students.size() - s1;
    for (int i = 0; i < sandwiches.size(); i++) {
        if (sandwiches[i] == 0 && s0 > 0) {
            s0--;
        } else if (sandwiches[i] == 1 && s1 > 0) {
            s1--;
        } else {
            break;
        }
    }
    return s1 + s0;
}

void L1700_countStudents::test() {
    vector<int> students = {1,1,0,0};
    vector<int> sandwiches = {0,1,0,1};
    cout << countStudents(students, sandwiches) << endl;
    students = {1,1,1,0,0,1};
    sandwiches = {1,0,0,0,1,1};
    cout << countStudents(students, sandwiches) << endl;
}
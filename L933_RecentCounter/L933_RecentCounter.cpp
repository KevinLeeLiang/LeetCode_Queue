//
// Created by garen-lee on 2025/3/15.
/**
  ******************************************************************************
  * @file           : L933_RecentCounter.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/15
  ******************************************************************************
  */
//

#include "L933_RecentCounter.h"
using namespace L933;
RecentCounter::RecentCounter() {
    while (!q_.empty()) {
        q_.pop();
    }
}
int RecentCounter::ping(int t) {
    this->q_.push(t);
    while (!q_.empty() && q_.front() < t - 3000) {
        q_.pop();
    }
    return q_.size();
}
void L933_RecentCounter::test() {
    RecentCounter obj;
    cout << obj.ping(1) << endl;
    cout << obj.ping(100) << endl;
    cout << obj.ping(3001) << endl;
    cout << obj.ping(3002) << endl;
}
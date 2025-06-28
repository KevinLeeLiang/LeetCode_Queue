//
// Created by garen-lee on 2025/6/28.
/**
  ******************************************************************************
  * @file           : L1670_FrontMiddleBackQueue.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/28
  ******************************************************************************
  */
//

#include "L1670_FrontMiddleBackQueue.h"

class FrontMiddleBackQueue {
public:
    FrontMiddleBackQueue() {

    }

    void pushFront(int val) {
        left.push_front(val);
        if (left.size() == right.size() + 2) {
            right.push_front(left.back());
            left.pop_back();
        }
    }

    void pushMiddle(int val) {
        if (left.size() == right.size() + 1) {
            right.push_front(left.back());
            left.pop_back();
        }
        left.push_back(val);
    }

    void pushBack(int val) {
        right.push_back(val);
        if (right.size() == left.size() + 2) {
            left.push_back(right.front());
            right.pop_front();
        }
    }

    int popFront() {
        if (left.empty()) {
            return -1;
        }
        int val = left.front();
        left.pop_front();
        if (left.size() + 1 == right.size()) {
            left.push_back(right.front());
            right.pop_front();
        }
        return val;
    }

    int popMiddle() {
        if (left.empty()) {
            return -1;
        }
        int val = left.back();
        left.pop_back();
        if (left.size() + 1 == right.size()) {
            left.push_back(right.front());
            right.pop_front();
        }
        return val;
    }

    int popBack() {
        if (left.empty()) {
            return -1;
        }
        int val = 0;
        if (right.empty()) {
            val = left.back();
            left.pop_back();
        } else {
            val = right.back();
            right.pop_back();
            if (left.size() + 1 == right.size()) {
                left.push_back(right.front());
                right.pop_front();
            }
        }
        return val;
    }

private:
    deque<int> left;
    deque<int> right;
};

void L1670_FrontMiddleBackQueue::test() {
    FrontMiddleBackQueue obj;
    obj.pushFront(1);
    obj.pushBack(2);
    obj.pushMiddle(3);
    obj.pushMiddle(4);
    cout << obj.popFront() << endl;
    cout << obj.popMiddle() << endl;
    cout << obj.popMiddle() << endl;
    cout << obj.popBack() << endl;
    cout << obj.popFront() << endl;
}
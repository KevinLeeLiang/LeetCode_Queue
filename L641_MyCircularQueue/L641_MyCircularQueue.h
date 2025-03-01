//
// Created by garen-lee on 2025/3/1.
/**
  ******************************************************************************
  * @file           : L641_MyCircularQueue.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/1
  ******************************************************************************
  */
//

#ifndef QUEUE_L641_MYCIRCULARQUEUE_H
#define QUEUE_L641_MYCIRCULARQUEUE_H

#include "util.h"

namespace L641 {
    class MyCircularQueue {
    public:
        MyCircularQueue(int k);
        bool insertFront(int value);
        bool insertLast(int value);
        bool deleteFront();
        bool deleteLast();
        int getFront();
        int getRear();
        bool isEmpty();
        bool isFull();
    private:
        vector<int>elements;
        int rear, front;
        int capacity;
    };
};

class L641_MyCircularQueue : public LeetcodeQueue{

public:
    L641_MyCircularQueue() {}
    void test();

};


#endif //QUEUE_L641_MYCIRCULARQUEUE_H

//
// Created by garen-lee on 2025/2/9.
/**
  ******************************************************************************
  * @file           : L225_MyStack.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/9
  ******************************************************************************
  */
//

#ifndef QUEUE_L225_MYSTACK_H
#define QUEUE_L225_MYSTACK_H
#include"util.h"

class MyStack {
public:
    MyStack() {
        queue1 = queue<int>();
        queue2 = queue<int>();
    }

    void push(int x) {
        queue2.push(x);
        while (!queue1.empty()) {
            queue2.push(queue1.front());
            queue1.pop();
        }
        swap(queue1, queue2);
    }

    int pop() {
        int r = queue1.front();
        queue1.pop();
        return r;
    }

    int top() {
        int r = queue1.front();
        return r;
    }

    bool empty() {
        return queue1.empty();
    }

private:
    queue<int>queue1;
    queue<int>queue2;
};

class L225_MyStack : public LeetcodeQueue {
public:
    L225_MyStack(){}
    void test();

private:
    MyStack myStack_;
};


#endif //QUEUE_L225_MYSTACK_H

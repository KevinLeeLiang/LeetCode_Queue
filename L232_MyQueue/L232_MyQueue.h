//
// Created by garen-lee on 2025/2/9.
/**
  ******************************************************************************
  * @file           : L232_MyQueue.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/9
  ******************************************************************************
  */
//

#ifndef QUEUE_L232_MYQUEUE_H
#define QUEUE_L232_MYQUEUE_H

#include "util.h"
class MyQueue{
public:
    MyQueue() {
        inStack = stack<int>();
        outStack = stack<int>();
    }

    void push(int x) {
        inStack.push(x);
    }

    int pop() {
        if (outStack.empty()) {
            in2out();
        }
        int val = outStack.top();
        outStack.pop();
        return val;
    }

    int peek() {
        if (outStack.empty()) {
            in2out();
        }
        return outStack.top();
    }

    bool empty() {
        return inStack.empty() && outStack.empty();
    }

private:
    stack<int> inStack, outStack;

    void in2out() {
        while (!inStack.empty()) {
            outStack.push(inStack.top());
            inStack.pop();
        }
    }

};
class L232_MyQueue : public LeetcodeQueue{
public:
    L232_MyQueue(){}
    void test();

private:
    MyQueue my_queue_;
};


#endif //QUEUE_L232_MYQUEUE_H

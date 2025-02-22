//
// Created by garen_lee on 2025/2/22.
/**
  ******************************************************************************
  * @file           : L622_MyCircularQueue.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/22
  ******************************************************************************
  */
//

#ifndef QUEUE_L622_MYCIRCULARQUEUE_H
#define QUEUE_L622_MYCIRCULARQUEUE_H

#include "util.h"

namespace L622{
    class MyCircularQueue {
    public:
    private:
        int front;
        int rear;
        int capacity;
        vector<int> elements;

    public:
        MyCircularQueue(int k) {
            this->capacity = k + 1;
            this->elements = vector<int>(capacity);
            rear = front = 0;
        }

        bool enQueue(int value) {
            if (isFull()) {
                return false;
            }
            elements[rear] = value;
            rear = (rear + 1) % capacity;
            return true;
        }

        bool deQueue() {
            if (isEmpty()) {
                return false;
            }
            front = (front + 1) % capacity;
            return true;
        }

        int Front() {
            if (isEmpty()) {
                return -1;
            }
            return elements[front];
        }

        int Rear() {
            if (isEmpty()) {
                return -1;
            }
            return elements[(rear - 1 + capacity) % capacity];
        }

        bool isEmpty() {
            return rear == front;
        }

        bool isFull() {
            return ((rear + 1) % capacity) == front;
        }
    };
}

class L622_MyCircularQueue : public LeetcodeQueue{
private:
    L622::MyCircularQueue myCircularQueue_ = L622::MyCircularQueue(0);
public:
    L622_MyCircularQueue() {}
    void test();
};


#endif //QUEUE_L622_MYCIRCULARQUEUE_H

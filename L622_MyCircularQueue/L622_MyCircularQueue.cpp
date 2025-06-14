//
// Created by garen_lee on 2025/2/22.
/**
  ******************************************************************************
  * @file           : L622_MyCircularQueue.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/22
  ******************************************************************************
  */
//

#include "L622_MyCircularQueue.h"
class MyCircularQueue {
private:
    int capacity;
    int front;
    int rear;
    vector<int>element;
public:
    MyCircularQueue(int k) {
        this->capacity = k + 1;
        front = rear = 1;
        element = vector<int>(capacity);
    }

    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }
        rear = (rear + 1) % capacity;
        return true;
    }

    bool deQueue() {
        if (isFull()) {
            return false;
        }
        front = (front + 1) % capacity;
        return true;
    }

    int Front() {
        if (isEmpty()) {
            return -1;
        }
        return element[front];
    }

    int Rear() {
        if (isEmpty())
            return -1;
        return element[(rear - 1 + capacity) % capacity];
    }

    bool isEmpty() {
        return front == rear;
    }

    bool isFull() {
        return (rear + 1) % capacity == front;
    }
};
void L622_MyCircularQueue::test() {
    MyCircularQueue obj = MyCircularQueue(3);
    cout << obj.enQueue(1) << endl;
    cout << obj.enQueue(2) << endl;
    cout << obj.enQueue(3) << endl;
    cout << obj.enQueue(4) << endl;
    cout << obj.Rear() << endl;
    cout << obj.isFull() << endl;
    cout << obj.deQueue() << endl;
    cout << obj.enQueue(4) << endl;
    cout << obj.Rear() << endl;
}
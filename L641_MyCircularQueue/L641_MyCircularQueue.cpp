//
// Created by garen-lee on 2025/3/1.
/**
  ******************************************************************************
  * @file           : L641_MyCircularQueue.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/1
  ******************************************************************************
  */
//

#include "L641_MyCircularQueue.h"

using namespace L641;

MyCircularQueue::MyCircularQueue(int k) {
    capacity = k + 1;
    front = rear = 0;
    elements = vector<int>(capacity);
}

bool MyCircularQueue::insertFront(int value) {
    if (isFull()){
        return false;
    } else {
        front = (front - 1 + capacity) % capacity;
        elements[front] = value;
        return true;
    }
}

bool MyCircularQueue::insertLast(int value) {
    if (isFull())
        return false;
    else {
        elements[rear] = value;
        rear = (rear + 1) % capacity;
        return true;
    }
}

bool MyCircularQueue::deleteFront() {
    if (isEmpty()) {
        return false;
    }
    front = (front + 1) % capacity;
    return true;
}

bool MyCircularQueue::deleteLast() {
    if (isEmpty())
        return false;
    rear = (rear - 1 + capacity) % capacity;
    return true;
}

int MyCircularQueue::getFront() {
    if (isEmpty())
        return -1;
    return elements[front];
}

int MyCircularQueue::getRear() {
    if (isEmpty())
        return -1;
    return elements[rear - 1 + capacity % capacity];
}

bool MyCircularQueue::isEmpty() {
    return rear == front;
}

bool MyCircularQueue::isFull() {
    return (rear + 1) % capacity == front;
}

void L641_MyCircularQueue::test() {
    MyCircularQueue mycircular_queue(3);
    cout << mycircular_queue.insertLast(1) << endl;
    cout << mycircular_queue.insertLast(2) << endl;
    cout << mycircular_queue.insertFront(3) << endl;
    cout << mycircular_queue.insertFront(4) << endl;
    cout << mycircular_queue.getRear() << endl;
    cout << mycircular_queue.isFull() << endl;
    cout << mycircular_queue.deleteLast() << endl;
    cout << mycircular_queue.insertFront(4)  << endl;
    cout << mycircular_queue.getFront() << endl;
}

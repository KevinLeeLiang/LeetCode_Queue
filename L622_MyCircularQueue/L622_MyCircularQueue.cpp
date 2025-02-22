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

void L622_MyCircularQueue::test() {
    this->myCircularQueue_ = L622::MyCircularQueue(3);
    cout << this->myCircularQueue_.enQueue(1) << endl;
    cout << this->myCircularQueue_.enQueue(2) << endl;
    cout << this->myCircularQueue_.enQueue(3) << endl;
    cout << this->myCircularQueue_.enQueue(4) << endl;
    cout << this->myCircularQueue_.Rear() << endl;
    cout << this->myCircularQueue_.isFull() << endl;
    cout << this->myCircularQueue_.deQueue() << endl;
    cout << this->myCircularQueue_.enQueue(4) << endl;
    cout << this->myCircularQueue_.Rear() << endl;
}
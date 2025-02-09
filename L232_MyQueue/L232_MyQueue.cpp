//
// Created by garen-lee on 2025/2/9.
/**
  ******************************************************************************
  * @file           : L232_MyQueue.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/9
  ******************************************************************************
  */
//

#include "L232_MyQueue.h"
void L232_MyQueue::test(){
    my_queue_.push(1);
    my_queue_.push(2);
    cout << my_queue_.peek() << endl;
    cout << my_queue_.pop() << endl;
    cout << my_queue_.empty() << endl;
}
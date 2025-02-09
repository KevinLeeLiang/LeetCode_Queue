//
// Created by garen-lee on 2025/2/9.
/**
  ******************************************************************************
  * @file           : L225_MyStack.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/9
  ******************************************************************************
  */
//

#include "L225_MyStack.h"
void L225_MyStack::test(){
    this->myStack_.push(1);
    this->myStack_.push(2);
    cout << this->myStack_.top() << endl;
    cout << this->myStack_.pop() << endl;
    cout << this->myStack_.empty() << endl;

    this->myStack_ = MyStack();
    this->myStack_.push(1);
    cout << this->myStack_.pop() << endl;
    cout << this->myStack_.empty() << endl;
}

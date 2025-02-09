//
// Created by garen-lee on 2025/2/9.
/**
  ******************************************************************************
  * @file           : test_factory.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/9
  ******************************************************************************
  */
//

#ifndef QUEUE_TEST_FACTORY_H
#define QUEUE_TEST_FACTORY_H
#include <memory>
#include "L225_MyStack/L225_MyStack.h"
#include "L232_MyQueue/L232_MyQueue.h"
class test_factory {
private:
    void buildSolution(string title) {
        if (title == "L225") {
            std::shared_ptr<L225_MyStack> tmp= std::make_shared<L225_MyStack>();
            solution_ = std::dynamic_pointer_cast<LeetcodeQueue>(tmp);
        } else if (title == "L232") {
            std::shared_ptr<L232_MyQueue> tmp= std::make_shared<L232_MyQueue>();
            solution_ = std::dynamic_pointer_cast<LeetcodeQueue>(tmp);
        }
    }
public:
    test_factory(string title) {
        cout << "test " << title << endl;
        buildSolution(title);
    }
    void test() {
        solution_->test();
    }
    ~test_factory() {}

private:
    std::shared_ptr<LeetcodeQueue> solution_;
};
#endif //QUEUE_TEST_FACTORY_H

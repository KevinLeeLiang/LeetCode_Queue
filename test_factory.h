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
#include "L239_maxSlidingWindow/L239_maxSlidingWindow.h"
//#include "L341_NestedIterator/L341_NestedIterator.h"
#include "L387_firstUniqChar/L387_firstUniqChar.h"
#include "L622_MyCircularQueue/L622_MyCircularQueue.h"
#include "L641_MyCircularQueue/L641_MyCircularQueue.h"
#include "L649_predictPartyVictory/L649_predictPartyVictory.h"
#include "L862_shortestSubarray/L862_shortestSubarray.h"
#include "L918_maxSubarraySumCircular/L918_maxSubarraySumCircular.h"
#include "L933_RecentCounter/L933_RecentCounter.h"
#include "L936_movesToStamp/L936_movesToStamp.h"
#include "L950_deckRevealedIncreasing/L950_deckRevealedIncreasing.h"
#include "L995_minKBitFlips/L995_minKBitFlips.h"
#include "L1425_constrainedSubsetSum/L1425_constrainedSubsetSum.h"
#include "L1438_longestSubarray/L1438_longestSubarray.h"
#include "L1499_findMaxValueOfEquation/L1499_findMaxValueOfEquation.h"
#include "L1670_FrontMiddleBackQueue/L1670_FrontMiddleBackQueue.h"
#include "L1687_boxDelivering/L1687_boxDelivering.h"
#include "L1696_maxResult/L1696_maxResult.h"
#include "L1700_countStudents/L1700_countStudents.h"
#include "L1823_findTheWinner/L1823_findTheWinner.h"

class test_factory {
private:
    void buildSolution(string title) {
        if (title == "L225") {
            std::shared_ptr<L225_MyStack> tmp= std::make_shared<L225_MyStack>();
            solution_ = std::dynamic_pointer_cast<LeetcodeQueue>(tmp);
        } else if (title == "L232") {
            std::shared_ptr<L232_MyQueue> tmp= std::make_shared<L232_MyQueue>();
            solution_ = std::dynamic_pointer_cast<LeetcodeQueue>(tmp);
        } else if (title == "L239") {
            std::shared_ptr<L239_maxSlidingWindow> tmp= std::make_shared<L239_maxSlidingWindow>();
            solution_ = std::dynamic_pointer_cast<LeetcodeQueue>(tmp);
//        } else if (title == "L341") {
//            std::shared_ptr<L341_NestedIterator> tmp= std::make_shared<L341_NestedIterator>();
//            solution_ = std::dynamic_pointer_cast<LeetcodeQueue>(tmp);
        } else if (title == "L387") {
            std::shared_ptr<L387_firstUniqChar> tmp= std::make_shared<L387_firstUniqChar>();
            solution_ = std::dynamic_pointer_cast<LeetcodeQueue>(tmp);
        } else if (title == "L622") {
            std::shared_ptr<L622_MyCircularQueue> tmp= std::make_shared<L622_MyCircularQueue>();
            solution_ = std::dynamic_pointer_cast<LeetcodeQueue>(tmp);
        } else if (title == "L641") {
            std::shared_ptr<L641_MyCircularQueue> tmp= std::make_shared<L641_MyCircularQueue>();
            solution_ = std::dynamic_pointer_cast<LeetcodeQueue>(tmp);
        } else if (title == "L649") {
            std::shared_ptr<L649_predictPartyVictory> tmp= std::make_shared<L649_predictPartyVictory>();
            solution_ = std::dynamic_pointer_cast<LeetcodeQueue>(tmp);
        } else if (title == "L862") {
            std::shared_ptr<L862_shortestSubarray> tmp= std::make_shared<L862_shortestSubarray>();
            solution_ = std::dynamic_pointer_cast<LeetcodeQueue>(tmp);
        } else if (title == "L918") {
            std::shared_ptr<L918_maxSubarraySumCircular> tmp= std::make_shared<L918_maxSubarraySumCircular>();
            solution_ = std::dynamic_pointer_cast<LeetcodeQueue>(tmp);
        } else if (title == "L933") {
            std::shared_ptr<L933_RecentCounter> tmp= std::make_shared<L933_RecentCounter>();
            solution_ = std::dynamic_pointer_cast<LeetcodeQueue>(tmp);
        } else if (title == "L936") {
            std::shared_ptr<L936_movesToStamp> tmp= std::make_shared<L936_movesToStamp>();
            solution_ = std::dynamic_pointer_cast<LeetcodeQueue>(tmp);
        } else if (title == "L950") {
            std::shared_ptr<L950_deckRevealedIncreasing> tmp= std::make_shared<L950_deckRevealedIncreasing>();
            solution_ = std::dynamic_pointer_cast<LeetcodeQueue>(tmp);
        } else if (title == "L995") {
            std::shared_ptr<L995_minKBitFlips> tmp= std::make_shared<L995_minKBitFlips>();
            solution_ = std::dynamic_pointer_cast<LeetcodeQueue>(tmp);
        } else if (title == "L1425") {
            std::shared_ptr<L1425_constrainedSubsetSum> tmp= std::make_shared<L1425_constrainedSubsetSum>();
            solution_ = std::dynamic_pointer_cast<LeetcodeQueue>(tmp);
        } else if (title == "L1438") {
            std::shared_ptr<L1438_longestSubarray> tmp= std::make_shared<L1438_longestSubarray>();
            solution_ = std::dynamic_pointer_cast<LeetcodeQueue>(tmp);
        } else if (title == "L1499") {
            std::shared_ptr<L1499_findMaxValueOfEquation> tmp= std::make_shared<L1499_findMaxValueOfEquation>();
            solution_ = std::dynamic_pointer_cast<LeetcodeQueue>(tmp);
        } else if (title == "L1670") {
            std::shared_ptr<L1670_FrontMiddleBackQueue> tmp= std::make_shared<L1670_FrontMiddleBackQueue>();
            solution_ = std::dynamic_pointer_cast<LeetcodeQueue>(tmp);
        } else if (title == "L1687") {
            std::shared_ptr<L1687_boxDelivering> tmp= std::make_shared<L1687_boxDelivering>();
            solution_ = std::dynamic_pointer_cast<LeetcodeQueue>(tmp);
        } else if (title == "L1696") {
            std::shared_ptr<L1696_maxResult> tmp= std::make_shared<L1696_maxResult>();
            solution_ = std::dynamic_pointer_cast<LeetcodeQueue>(tmp);
        } else if (title == "L1700") {
            std::shared_ptr<L1700_countStudents> tmp= std::make_shared<L1700_countStudents>();
            solution_ = std::dynamic_pointer_cast<LeetcodeQueue>(tmp);
        } else if (title == "L1823") {
            std::shared_ptr<L1823_findTheWinner> tmp= std::make_shared<L1823_findTheWinner>();
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

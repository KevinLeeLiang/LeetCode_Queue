//
// Created by garen_lee on 2025/2/14.
/**
  ******************************************************************************
  * @file           : L341_NestedIterator.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/14
  ******************************************************************************
  */
//

#ifndef QUEUE_L341_NESTEDITERATOR_H
#define QUEUE_L341_NESTEDITERATOR_H

#include "util.h"
namespace L341 {
    class NestedInteger {
    public:
        // Return true if this NestedInteger holds a single integer, rather than a nested list.
        bool isInteger() const;

        // Return the single integer that this NestedInteger holds, if it holds a single integer
        // The result is undefined if this NestedInteger holds a nested list
        int getInteger() const;

        // Return the nested list that this NestedInteger holds, if it holds a nested list
        // The result is undefined if this NestedInteger holds a single integer
        vector<NestedInteger> &getList() const;
    };

    class NestedIterator {
    private:
        stack<NestedInteger> st;
    public:
        NestedIterator(vector<NestedInteger> &nestedList) {
            // 将列表中的元素逆序压入栈中
            for (int i = nestedList.size() - 1; i >= 0; --i) {
                st.push(nestedList[i]);
            }
        }

        int next() {
            // 调用 next() 之前需要先调用 hasNext() 确保有下一个元素
            int val = st.top().getInteger();
            st.pop();
            return val;
        }

        bool hasNext() {
            // 循环直到栈顶元素是整数
            while (!st.empty()) {
                NestedInteger ni = st.top();
                if (ni.isInteger()) {
                    return true;
                }
                st.pop();
                vector<NestedInteger> &list = ni.getList();
                // 将列表中的元素逆序压入栈中
                for (int i = list.size() - 1; i >= 0; --i) {
                    st.push(list[i]);
                }
            }
            return false;
        }
    };
}

class L341_NestedIterator : public LeetcodeQueue{
private:

public:
    L341_NestedIterator() {}
    void test();
};


#endif //QUEUE_L341_NESTEDITERATOR_H

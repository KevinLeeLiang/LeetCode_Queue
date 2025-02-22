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
        // 默认构造函数，表示一个空的嵌套结构
        NestedInteger() : is_int(false) {}

        // 存储单个整数的构造函数
        NestedInteger(int value) : is_int(true), integer(value) {}

        // 存储嵌套列表的构造函数
        NestedInteger(std::vector<NestedInteger> list) : is_int(false), nestedList(list) {}

        // 判断当前 NestedInteger 是否是一个整数
        bool isInteger() const {
            return is_int;
        }

        // 如果是整数，返回该整数值
        int getInteger() const {
            if (is_int) {
                return integer;
            }
            throw std::runtime_error("This NestedInteger does not hold an integer");
        }

        // 如果是嵌套列表，返回该列表
        const std::vector<NestedInteger>& getList() const {
            if (!is_int) {
                return nestedList;
            }
            throw std::runtime_error("This NestedInteger does not hold a list");
        }

    private:
        bool is_int;  // 标记当前对象是否存储一个整数
        int integer;  // 存储整数的值
        std::vector<NestedInteger> nestedList;  // 存储嵌套列表
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

//
// Created by garen_lee on 2025/3/22.
/**
  ******************************************************************************
  * @file           : L950_deckRevealedIncreasing.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/22
  ******************************************************************************
  */
//

#include "L950_deckRevealedIncreasing.h"

vector<int> L950_deckRevealedIncreasing::deckRevealedIncreasing(vector<int> &deck) {
    sort(deck.begin(), deck.end());
    // 如何从有序数组得到原先的数组。
    // n-1逆序添加，每次添加需保证当前牌处在当前牌顶。
    // 添加前将牌底元素添加到牌顶。
    int n = deck.size();
    deque<int> dq;
    for (int i = n - 1; i >= 0; --i) {
        if (!dq.empty()) {
            dq.push_front(dq.back());
            dq.pop_back();
        }
        dq.push_front(deck[i]);
    }
    vector<int> result = vector<int>(dq.begin(), dq.end());
    return result;
}

void L950_deckRevealedIncreasing::test() {
    vector<int> deck = {17,13,11,2,3,5,7};
    vector<int> result = deckRevealedIncreasing(deck);
    print_vector(result);
}
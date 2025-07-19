//
// Created by garen_lee on 2025/7/19.
/**
  ******************************************************************************
  * @file           : L1823_findTheWinner.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/19
  ******************************************************************************
  */
//

#include "L1823_findTheWinner.h"

int L1823_findTheWinner::findTheWinner(int n, int k) {
    int winner = 1;
    for (int i = 2; i <= n; i++) {
        winner = (k + winner - 1) % i + 1;
    }
    return winner;
}

void L1823_findTheWinner::test() {
    cout << findTheWinner(5, 2) << endl;
    cout << findTheWinner(6, 5) << endl;
}
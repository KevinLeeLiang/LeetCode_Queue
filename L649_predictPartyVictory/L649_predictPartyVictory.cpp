//
// Created by garen-lee on 2025/3/1.
/**
  ******************************************************************************
  * @file           : L649_predictPartyVictory.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/1
  ******************************************************************************
  */
//

#include "L649_predictPartyVictory.h"

string L649_predictPartyVictory::predictPartyVictory(string senate) {
    int n = senate.size();
    queue<int> radiant, dire;
    for (int i = 0; i < n; ++i) {
        if (senate[i] == 'R') radiant.push(i);
        else dire.push(i);
    }
    while (!radiant.empty() && !dire.empty()) {
        if (radiant.front() < dire.front()) {
            radiant.push(radiant.front() + n);
        } else {
            dire.push(dire.front() + n);
        }
        radiant.pop();
        dire.pop();
    }
    return radiant.empty() ? "Dire" : "Radiant";
}

void L649_predictPartyVictory::test() {
    string senate = "RD";
    cout << predictPartyVictory(senate) << endl;
    senate = "RDD";
    cout << predictPartyVictory(senate) << endl;
}
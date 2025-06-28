//
// Created by garen-lee on 2025/6/28.
/**
  ******************************************************************************
  * @file           : L1499_findMaxValueOfEquation.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/28
  ******************************************************************************
  */
//

#include "L1499_findMaxValueOfEquation.h"
using pii = pair<int, int>;
int L1499_findMaxValueOfEquation::findMaxValueOfEquation(vector<vector<int>>& points, int k) {
    int res = INT_MIN;
    deque<pii>qu;
    for (auto &point : points) {
        int x = point[0], y = point[1];
        while (!qu.empty() && x - qu.front().second > k) {
            qu.pop_front();
        }
        if (!qu.empty()) {
            res = max(res, x + y + qu.front().first);
        }
        while (!qu.empty() && y - x >= qu.back().first) {
            qu.pop_back();
        }
        qu.emplace_back(y - x, x);
    }
    return res;
}

void L1499_findMaxValueOfEquation::test() {
    vector<vector<int>> points = {{1,3},{2,0},{5,10},{6,-10}};
    int k = 1;
    cout << findMaxValueOfEquation(points, k) << endl;
    points = {{0,0},{3,0},{9,2}};
    k = 3;
    cout << findMaxValueOfEquation(points, k) << endl;
}
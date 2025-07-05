//
// Created by garen_lee on 2025/7/5.
/**
  ******************************************************************************
  * @file           : L1687_boxDelivering.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/5
  ******************************************************************************
  */
//

#include "L1687_boxDelivering.h"

int L1687_boxDelivering::boxDelivering(vector<vector<int>> &boxes, int portsCount, int maxBoxes, int maxWeight) {
    int n = boxes.size();
    vector<int> p(n + 1), w(n + 1), neg(n + 1);
    vector<long long> W(n + 1);
    for (int i = 1; i <= n; ++i) {
        p[i] = boxes[i - 1][0];
        w[i] = boxes[i - 1][1];
        if (i > 1) {
            neg[i] = neg[i - 1] + (p[i - 1] != p[i]);
        }
        W[i] = W[i - 1] + w[i];
    }

    deque<int> opt = {0};
    vector<int> f(n + 1), g(n + 1);

    for (int i = 1; i <= n; ++i) {
        while (i - opt.front() > maxBoxes || W[i] - W[opt.front()] > maxWeight) {
            opt.pop_front();
        }

        f[i] = g[opt.front()] + neg[i] + 2;

        if (i != n) {
            g[i] = f[i] - neg[i + 1];
            while (!opt.empty() && g[i] <= g[opt.back()]) {
                opt.pop_back();
            }
            opt.push_back(i);
        }
    }

    return f[n];
}

void L1687_boxDelivering::test() {
    vector<vector<int>> boxes = {{1, 1}, {2, 1}, {1, 1}};
    int portsCount = 2, maxBoxes = 3, maxWeight = 3;
    cout << boxDelivering(boxes, portsCount, maxBoxes, maxWeight) << endl;
    boxes = {{1, 2}, {3, 3}, {3, 1}, {3, 1}, {2, 4}};
    portsCount = 3, maxBoxes = 3, maxWeight = 6;
    cout << boxDelivering(boxes, portsCount, maxBoxes, maxWeight) << endl;
    boxes = {{1, 4}, {1, 2}, {2, 1}, {2, 1}, {3, 2}, {3, 4}};
    portsCount = 3, maxBoxes = 6, maxWeight = 7;
    cout << boxDelivering(boxes, portsCount, maxBoxes, maxWeight) << endl;
    boxes = {{2, 4}, {2, 5}, {3, 1}, {3, 2}, {3, 7}, {3, 1}, {4, 4}, {1, 3}, {5, 2}};
    portsCount = 5, maxBoxes = 5, maxWeight = 7;
    cout << boxDelivering(boxes, portsCount, maxBoxes, maxWeight) << endl;
}
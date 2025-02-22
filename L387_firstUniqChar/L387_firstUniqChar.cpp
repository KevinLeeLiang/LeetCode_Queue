//
// Created by garen_lee on 2025/2/22.
/**
  ******************************************************************************
  * @file           : L387_firstUniqChar.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/22
  ******************************************************************************
  */
//

#include "L387_firstUniqChar.h"

int L387_firstUniqChar::firstUniqChar(string s) {
    unordered_map<char, int> map;
    queue<int> q;
    for (int i = 0; i < s.size(); i++) {
        if (map.find(s[i]) == map.end()) {
            map[s[i]] = i;
            q.push(i);
        } else {
            map[s[i]] = -1;
            while (!q.empty() && map[s[q.front()]] == -1) {
                q.pop();
            }
        }
    }
    return q.empty() ? -1 : q.front();
}

void L387_firstUniqChar::test() {
    string s;
    s = "leetcode";
    cout << firstUniqChar(s) << endl;
    s = "loveleetcode";
    cout << firstUniqChar(s) << endl;
    s = "aabb";
    cout << firstUniqChar(s) << endl;
}
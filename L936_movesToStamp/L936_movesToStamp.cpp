//
// Created by garen-lee on 2025/3/15.
/**
  ******************************************************************************
  * @file           : L936_movesToStamp.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/15
  ******************************************************************************
  */
//

#include "L936_movesToStamp.h"

vector<int> L936_movesToStamp::movesToStamp(string stamp, string target) {
    int qm_num = 0; // 记录问号的数量
    int stamp_size = stamp.size();
    int n = target.size();
    queue<int> stamp_indexes;
    vector<bool> flag(n,false);
    vector<int> ans;

    for(int index = 0;index < n - stamp_size + 1;index++){ // 这一遍把原始就满足印章的索引找出入队
        int i = 0;
        for(;i < stamp_size;i++){
            if(stamp[i] != target[index + i]){
                break;
            }
        }

        if(i == stamp_size){
            stamp_indexes.push(index);
            flag[index] = true;
        }
    }


    while(!stamp_indexes.empty()){
        int stamp_index = stamp_indexes.front();stamp_indexes.pop();
        ans.push_back(stamp_index);

        for(int i = 0;i < stamp_size;i++){ // 都印成'?'
            if(target[stamp_index + i] != '?'){
                qm_num++;
                target[stamp_index + i] = '?';
            }
        }

        for(int index = stamp_index - stamp_size + 1;index < stamp_index + stamp_size;index++){ // 对于新可能匹配的字符序列进行检查，合格的入队
            if(index < 0 || index >= n - stamp_size + 1 || flag[index])continue;
            int i = 0;
            for(;i < stamp_size;i++){
                if(target[index + i] != '?' && stamp[i] != target[index + i]){
                    break;
                }
            }

            if(i == stamp_size){
                stamp_indexes.push(index);
                flag[index] = true;
            }
        }

    }

    reverse(ans.begin(),ans.end()); // 步骤取反
    return qm_num == n ? ans : vector<int>(0); // 如果全变为'?'说明成功
}

void L936_movesToStamp::test(){
    string stamp = "abc";
    string target = "ababc";
    vector<int> result = movesToStamp(stamp, target);
    print_vector(result);
    stamp = "abca";
    target = "aabcaca";
    result = movesToStamp(stamp, target);
    print_vector(result);
}
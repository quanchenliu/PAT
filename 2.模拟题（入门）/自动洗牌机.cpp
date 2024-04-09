// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/9
// @Function	: 自动洗牌机
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int repeat_times, time;
    int order[54] = {0};
    char *cards[54] = { "S1", "S2", "S3", "S4", "S5", "S6", "S7", "S8", "S9", "S10", "S11", "S12", "S13",
                        "H1", "H2", "H3", "H4", "H5", "H6", "H7", "H8", "H9", "H10", "H11", "H12", "H13",
                        "C1", "C2", "C3", "C4", "C5", "C6", "C7", "C8", "C9", "C10", "C11", "C12", "C13",
                        "D1", "D2", "D3", "D4", "D5", "D6", "D7", "D8", "D9", "D10", "D11", "D12", "D13",
                        "J1", "J2"};

    char *shuffling_order[54];
    scanf("%d", &repeat_times);
    for(int i=0;i<54;i++){
        scanf("%d", &order[i]);
    }
    for(int i=0;i<repeat_times;i++){
        if(i%2 ==0){
            for(int j=0;j<54;j++){
                shuffling_order[order[j]] = cards[j];       // 第1、3、5...次
            }
        }
        else{
            for(int j=0;j<54;j++){
                cards[order[j]] = shuffling_order[j];       // 第2、4、6...次
            }
        }
    }
    if(repeat_times%2 ==0){     // 共进行偶数次，最后结果存储于cards
        for(int i=0;i<54;i++){
            if(i != 53) cout<<cards[i]<<' ';
            else cout<<cards[i]<<endl;
        }
    }
    else{                       // 共进行奇数次，最后结果存储于shuffling_order
        for(int i=0;i<54;i++){
           if(i != 53) cout<<shuffling_order[i]<<' ';
            else cout<<shuffling_order[i]<<endl;
        }
    }
    return 0;
}


// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/7
// @Function	: 挖掘技术哪家强

#include <iostream>
using namespace std;


int main(){
    int n, schid, score;
    scanf("%d", &n);

    int sum_score[n] = {0};
    for(int i=0;i<n;i++){
        scanf("%d%d", &schid, &score);
        sum_score[schid] += score;
    }

    int max = -1, id = 1;
    for(int i=1;i<=n;i++){
        if(max < sum_score[i]){
            max = sum_score[i];
            id = i;
        } 
    }
    printf("%d %d\n", id, max);
    return 0;
}
// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/15
// @Function	: 霍格沃茨的加法
#include <iostream>
using namespace std;
int main(){
    int P[3], A[3], sum[3] = {0};
    scanf("%d.%d.%d %d.%d.%d", &P[0], &P[1], &P[2], &A[0], &A[1], &A[2]);
    int sum_K = (P[0]+A[0])*493 +(P[1]+A[1])*29 + P[2] + A[2];
    sum[0] = sum_K / 493;
    sum[1] = (sum_K - sum[0]*493) / 29;
    sum[2] = sum_K % 29;
    printf("%d.%d.%d", sum[0], sum[1], sum[2]);
    return 0;
}
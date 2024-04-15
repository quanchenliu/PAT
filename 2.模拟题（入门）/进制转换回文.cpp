// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/15
// @Function	: 进制转换回文
#include <iostream>
using namespace std;
int ExchangeToB(int N, int b, int z[]){
    int num=0;
    do{
        z[num++] = N % b;
        N = N / b;
    }while(N != 0);
    return num;
}

bool Judge(int z[], int num){
    if(num == 1) return true;           //任何单个数字都是回文数

    for(int i=0;i != num-1-i;i++){
        if(z[i] != z[num-1-i]) return false;
    }
    return true;
}
int main(){
    int N, b, z[7] = {0};
    scanf("%d%d", &N, &b);
    if(N == 0){
        printf("YES\n0");               // 0 一定是回文数
        return 0;
    }
    int num = ExchangeToB(N, b, z);
    bool flag = Judge(z, num);

    if(flag) printf("YES\n");
    else printf("NO\n");

    for(int i=num-1;i>=0;i--){
        if(i != 0) printf("%d ", z[i]);
        else printf("%d", z[i]);
    }
    return 0;
}
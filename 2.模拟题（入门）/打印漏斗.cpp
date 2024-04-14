// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/14
// @Function	: 打印漏斗
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, n_bottom;
    char c;
    scanf("%d %c", &n, &c);
    n_bottom = (int)sqrt(2.0 * (1+n)) - 1;
    if(n_bottom % 2 == 0) n_bottom--;
    //printf("%d %d\n", n,n_bottom);

    for(int i=n_bottom;i>=1;i-=2){
        for(int j=0;j<(n_bottom-i)/2;j++) printf(" ");
        for(int j=0;j<i;j++) printf("%c", c);
        printf("\n");
    }
    for(int i=3;i<=n_bottom;i+=2){
        for(int j=0;j<(n_bottom-i)/2;j++) printf(" ");
        for(int j=0;j<i;j++) printf("%c", c);
        printf("\n");
    }
    int sum = (n_bottom+1)*(n_bottom+1) / 2 - 1;
    printf("%d", n-sum);
    return 0;
}
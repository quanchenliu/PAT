// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/7
// @Function	: 一元多项式求导
#include <iostream>
using namespace std;
int main(){
    int a[1010] = {0};
    int xishu, zhishu, count=0;    //count记录不为0导数项的个数
    while(scanf("%d %d", &xishu, &zhishu) != EOF){
        a[zhishu] = xishu;
    }
    a[0] = 0;                     //零次项求导后为0
    for(int i=1;i<=1000;i++){
        a[i-1] = a[i] * i;        //求导公式
        a[i] = 0;                 //此句不可省略
        if(a[i-1] != 0) count++;
    }
    if(count == 0) printf("0 0"); //特判
    else{
        for(int i=1000;i>=0;i--){
            if(a[i] != 0){
                printf("%d %d", a[i], i);
                count--;
                if(count != 0) printf(" ");
            }
        }
    }
    return 0;
}
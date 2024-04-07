// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/7
// @Function	: 程序运行时间
#include <iostream>
#include <cmath>
#define CLK_TCK 100
using namespace std;

int main(){
    int time, h, m,s;
    double c1, c2, seconds;
    scanf("%lf%lf", &c1, &c2);
    seconds = round( (c2 - c1)/CLK_TCK );
    time = (int) seconds;
    h = time/3600;                       	// 计算经过了多少个小时
    m = (time - 3600*h)/60;
    s = time - 3600*h - 60*m;
    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}
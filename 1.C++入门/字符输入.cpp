// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/6
// @Function	: 使用 getchar 进行字符输入
#include<iostream>
using namespace std;

int main(){
    int n;
    char a;
    scanf("%d", &n);
    getchar();          // 用于接收换行符
    a = getchar();
    printf("%d\n%c", n+1, a);
    return 0;
}


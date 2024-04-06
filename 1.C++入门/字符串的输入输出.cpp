// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/6
// @Function	: 整行字符串的输入输出

#include<iostream>
#include<string>
using namespace std;
int main(){
    char a[51];
    string b;
    cin.getline(a, 51);
    printf("%s", a);
    // getline(cin, b);
    // cout<<b<<endl;
    // printf("%s", b.c_str());
    return 0;
}
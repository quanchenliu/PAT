// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/6
// @Function	: string容器求字符串长度

#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string a;
    getline(cin, a);
    //cout<<a.length()<<endl;
    cout<<a.size()<<endl;
    return 0;
}
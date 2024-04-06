// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/6
// @Function	: 用指针完成交换

#include <iostream>
using namespace std;
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a, b;
    int *p1, *p2;
    cin>>a>>b;
    p1 = &a;
    p2 = &b;
    swap(p1, p2);
    cout<<a<<' '<<b<<endl;
    return 0;
}
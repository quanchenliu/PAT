// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/6
// @Function	: sscanf示例

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    char str[100];
    cin.getline(str, 100);
    
    if (sscanf(str, "%d is greater than %d", &a, &b) == 2) {
        cout << (a > b ? "Yes" : "No")<<endl;
    } else if (sscanf(str, "%d is equal to %d plus %d", &a, &b, &c) == 3) {
        cout << (a == b + c ? "Yes" : "No")<<endl;
    } else {
        cout << "???"<<endl;
    }
    return 0;
}
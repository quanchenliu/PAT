// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/6
// @Function	: 字符串拼接
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str1[51], str2[51];
    cin.getline(str1, 51);
    cin.getline(str2, 51);
    // scanf("%s%s", s1, s2);
    strcat(str1, str2);
    printf("%s", str1);
    return 0;
}
// int main() {
//     string s1, s2;
//     cin >> s1;
//     cin >> s2;
//     cout << s1 + s2;
// }
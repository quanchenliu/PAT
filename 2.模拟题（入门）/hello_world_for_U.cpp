// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/14
// @Function	: hello_world_for_U
#include <iostream>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    int len = str.size();
    
    int n1, n2, n3;
    n1 = n3 = (len + 2) / 3;
    n2 = len +2 -n1 - n3;

    char ans[40][40];
    for(int i=0;i<40;i++){
        for(int j=0;j<40;j++){
            ans[i][j] = ' ';    // 初始化，全部赋空格值
        }
    }

    int pos = 0;                // 用于标记在 str 中的位置；
    for(int i=0;i<n1;i++){
        ans[i][0] = str[pos++];
    }
    for(int i=1;i<n2;i++){
        ans[n1-1][i] = str[pos++];
    }
    for(int i=n1-2;i>=0;i--){
        ans[i][n2-1] = str[pos++];
    }
    
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            printf("%c", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
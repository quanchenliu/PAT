// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/10
// @Function	: 
#include <iostream>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    int len = str.size();
    printf("%s", str);
    int n1=0, n2=len, n3=0;
    while(n2 > 3){
        int k = len+2-n2;
        if(k%2 == 0) n1 = n3 = k/2;
        if(n2 < n1) break;
        //printf("%d %d %d %d %d\n", n1, n2, n3, n1+n2+n3, k);
        n2--;
    }
    n2 = len+2 -n1-n3;
    char a[n1][n2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(j == 0) a[i][j] = str[i];
            else if(j == n2-1) a[i][j] = str[len-1-i];
            else if(i == n1-1) a[i][j] = str[i+j];
            else a[i][j] = ' ';
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
    //printf("%d %d %d\n", n1, n2, n3);
    
    return 0;
}
// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/15
// @Function	: 火星RGB
#include <iostream>
using namespace std;

int Exchange(int X, int x[]){
    int num=0;
    do{
        x[num++] = X % 13;
       X = X / 13;
    }while(X != 0);
    return num;
}
int main(){
    int R, G, B;
    int rgb[3][3], num[3];
    scanf("%d %d %d", &R, &G, &B);
    num[0] = Exchange(R, rgb[0]);
    num[1] = Exchange(G, rgb[1]);
    num[2] = Exchange(B, rgb[2]);
    printf("#");
    for(int i=0;i<3;i++){
        if(num[i] == 1){
            if(rgb[i][0] == 10){
                printf("0A");
            }
            else if(rgb[i][0] == 11){
                printf("0B");
            }
            else if(rgb[i][0] == 12){
                printf("0C");
            }
            else{
                printf("0%d", rgb[i][0]);
            }
            continue;
        }
        for(int j=num[i]-1;j>=0;j--){
            if(rgb[i][j] == 10){
                printf("A");
            }
            else if(rgb[i][j] == 11){
                printf("B");
            }
            else if(rgb[i][j] == 12){
                printf("C");
            }
            else{
                printf("%d", rgb[i][j]);
            }
        }
    }
    return 0;
}
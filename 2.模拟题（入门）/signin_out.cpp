// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/10
// @Function	: Sign in and sign out
#include <iostream>
using namespace std;
int main(){
    double max[3] = {0}, odds[3] = {0}, profits = 1;
    int max_idx[3];
    char g_result[3] = {'W', 'T', 'L'};

    for(int i=0;i<3;i++){
        scanf("%lf%lf%lf", &odds[0], &odds[1], &odds[2]);

        if(odds[0]-odds[1] > 1e-15) max_idx[i] = 0;
        else max_idx[i] = 1;
        if(odds[max_idx[i]]-odds[2] < 1e-15) max_idx[i] = 2;
        max[i] = odds[max_idx[i]];
        profits = profits * max[i];
    }
    profits = (profits*0.65 - 1)*2;
    printf("%c %c %c %.2f", g_result[max_idx[0]], g_result[max_idx[1]], g_result[max_idx[2]], profits);
    return 0;
}
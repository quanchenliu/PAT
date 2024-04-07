// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/7
// @Function	: 石头剪刀布
#include <iostream>
using namespace std;
int main(){
    int n, jid=0, yid=0;
    int jia_sheng=0, jia_ping=0, jia_fu=0;       // 记录甲胜、平、负的次数
    int yi_sheng=0, yi_ping=0, yi_fu=0;          // 记录乙胜、平、负的次数
    int jia[3]={0}, yi[3]={0};                   // 按照BCJ的顺序记录甲乙所用手势的次数
    char fiture[2], konge;
    
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        getchar();
        scanf("%c %c", &fiture[0], &fiture[1]);
        // printf("%c %c\n", fiture[0], fiture[1]);
        // 甲赢
        if((fiture[0] == 'C' && fiture[1] == 'J') || (fiture[0] == 'J' && fiture[1] == 'B') || (fiture[0] == 'B' && fiture[1] == 'C')){
            jia_sheng++;yi_fu++;
            if(fiture[0] == 'B') jia[0]++;
            else if(fiture[0] == 'C') jia[1]++;
            else if(fiture[0] == 'J') jia[2]++;
        }
        // 乙赢
        else if((fiture[0] == 'J' && fiture[1] == 'C') || (fiture[0] == 'B' && fiture[1] == 'J') || (fiture[0] == 'C' && fiture[1] == 'B')){
            jia_fu++;yi_sheng++;
            if(fiture[1] == 'B') yi[0]++;
            else if(fiture[1] == 'C') yi[1]++;
            else if(fiture[1] == 'J') yi[2]++;
        }
        // 平局
        else{
            jia_ping++;yi_ping++;
        }
    }
    printf("%d %d %d\n", jia_sheng, jia_ping, jia_fu);
    printf("%d %d %d\n", yi_sheng, yi_ping, yi_fu);
    
    for(int i=1;i<3;i++){
        if(jia[jid] < jia[i]) jid = i;
        if(yi[yid] < yi[i]) yid = i;
    }
    if(jid == 0) printf("B ");
    else if(jid == 1) printf("C ");
    else if(jid == 2) printf("J ");

    if(yid == 0) printf("B");
    else if(yid == 1) printf("C");
    else if(yid == 2) printf("J");
    
    return 0;
}
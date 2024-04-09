// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/9
// @Function	: 求最短距离
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, m, inexit, outexit, sum=0;
    scanf("%d", &n);
    int a[n+1]={0}, dist[n+1]={0};    //distance[i],表示从出口i,到出口i+1的距离
    for(int i=1;i<=n;i++){
        scanf("%d", &a[i]);
        sum += a[i];       //累计总距离
        dist[i] = sum;     //dist[i]记录从 0 号结点到 (i+1)%n 号结点的距离   
    }

    scanf("%d", &m);
    for(int i=0;i<m;i++){
        scanf("%d%d", &inexit, &outexit);
        if(inexit > outexit) swap(inexit, outexit);
        int temp = dist[outexit-1] - dist[inexit-1];    //与distance中的下标对齐
        printf("%d\n", min(temp, sum-temp));
    }
    return 0;
}
// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/6
// @Function	: 简单交换排序
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    
    for(int i=0;i<n;i++){
        int max = 0;
        for(int j=0;j<n-i;j++){
            if(array[j] > array[max]){
                max = j;
            }
        }
        int temp = array[max];
        array[max] = array[n-1-i];
        array[n-1-i] = temp;
    }

    for(int i=0;i<n;i++){
        if(i < n-1) cout<<array[i]<<' ';
        else cout<<array[i]<<endl;
    }
    return 0;
}
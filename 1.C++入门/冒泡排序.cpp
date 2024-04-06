// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/6
// @Function	: 冒泡排序
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
        int k = 0;
        for(int j=0;j<n-1;j++, k++){
            if(array[k] > array[k+1]){
                int temp = array[k];
                array[k] = array[k+1];
                array[k+1] = temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        if(i < n-1) cout<<array[i]<<' ';
        else cout<<array[i]<<endl;
    }
    return 0;
}
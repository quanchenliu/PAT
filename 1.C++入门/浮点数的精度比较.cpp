// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/6
// @Function	: 浮点数的精度比较

#include<iostream>
#include<cmath>
using namespace std;
const double eps = 1e-8;

bool Greater(double a, double b){
    return a -b > eps;
}

bool Less(double a, double b){
    return a - b < -eps;
}

int main(){
    double a, b, c, d;
    double re1, re2;
    
    cin>>a>>b>>c>>d;
    re1 = a*asin(sqrt(b)/2);
    re2 = c*asin(sqrt(d)/2);

    if(Greater(re1, re2)) cout<<"1"<<endl;
    else if(Less(re1, re2)) cout<<"2"<<endl;
    else cout<<"0"<<endl;
    return 0;
}
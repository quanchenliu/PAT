// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/6
// @Function	: 日期格式分割（不使用读入字符串，然后分割字串的方式）

#include <iostream>
using namespace std;

int main(){
    char date[20];
    char year[5], month[3], day[3], hour[3], minute[3], second[3];
    int y, m, d, h, mi, s;
    for(int i = 0;i<20;i++){
        scanf("%c", &date[i]);
    }
    for(int i=0;i<20;i++){
        if(i < 4){
            year[i] = date[i];
        }
        else if(i >= 5 && i < 7){
            month[i -5] = date[i];
        }
        else if(i >=8 && i < 10){
            day[i -8] = date[i];
        }
        else if(i >= 11 && i < 13){
            hour[i - 11] = date[i];
        }
        else if(i >= 14 && i < 16){
            minute[i - 14] = date[i];
        }
        else if(i >= 17 && i <= 18){
            second[i - 17] = date[i];
        }
    }
    sscanf(year, "%d", &y);
    sscanf(month, "%d", &m);
    sscanf(day, "%d", &d);
    sscanf(hour, "%d", &h);
    sscanf(minute, "%d", &mi);
    sscanf(second, "%d", &s);
    cout<<y<<endl;
    cout<<m<<endl;
    cout<<d<<endl;
    cout<<h<<endl;
    cout<<mi<<endl;
    cout<<s<<endl;;
    return 0;
}

// 考虑更简单的方法：
// int main(){
//     int y, m, d, h, mi, s;
//     scanf("%d-%d-%d %d:%d:%d", &y, &m, &d, &h, &mi, &s);
//     printf("%d\n%d\n%d\n%d\n%d\n%d\n", y, m, d, h, mi, s);
//     return 0;
// }
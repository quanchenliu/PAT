// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/14
// @Function	: 日期加法
#include <iostream>
using namespace std;
void DayAdd(int year, int month, int day, int n){
    int sum = 0, sum_days=0;
    int month_days[13]={0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};      //365天
    int sum_day[13]={0,31,59,90,120,151,181,212,243,273,304,334, 365};          //非闰年
    bool flag = false;
    sum_days = sum_day[12];

    if(year%400==0 || (year%4==0 && year%100!=0)){                              //闰年修改2月天数
        flag = true;
    }
    for(int i=0;i<month;i++){
        if(flag) sum = sum_day[i]++;
        else sum = sum_day[i];
    }
    sum = sum + day + n;

    if(flag){
        sum_days++;
        while(sum > sum_days){
            sum = sum - sum_days;
            if(flag){
                sum_days--;                                     // 恢复成正常年份的总天数
                flag = false;
            }
            year++;
            if(year%400==0 || (year%4==0 && year%100!=0)){      // 闰年
                sum_days++;
                flag = true;
            }
        }
    }
    else{
        while(sum > sum_days){
            sum = sum - sum_days;
            if(flag){
                sum_days--;                                     // 恢复成正常年份的总天数
                flag = false;
            }
            year++;
            if(year%400==0 || (year%4==0 && year%100!=0)){      // 闰年
                sum_days++;
                flag = true;
            }
        }
    }
    for(int i=1;i<13;i++){
        if(year%400==0 || (year%4==0 && year%100!=0)){      // 闰年
           if(i>=2) sum_day[i]++;
        }
        if(sum <= sum_day[i]){
            month = i;
            day = sum - sum_day[i-1];
            break;
        }
    }
    printf("%04d-%02d-%02d", year, month, day);
}
int main(){
    int year, month, day, n;
    scanf("%d-%d-%d", &year, &month, &day);
    scanf("%d", &n);
    DayAdd(year, month, day, n);
    return 0;
}
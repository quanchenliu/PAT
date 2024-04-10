// -*- coding: utf-8 -*-
// @Author  	: quanchenliu
// @Time	   	: 2024/4/10
// @Function	: 人口普查
#include <iostream>
#include <string.h>
using namespace std;

struct Document{
    char name[6];
    int yy, mm, dd;
};

bool LessDate(Document a, Document b){  //a 的日期小于 b，返回ture
    if(a.yy != b.yy) return a.yy <= b.yy;
    if(a.mm != b.mm) return a.mm <= b.mm;
    else return a.dd <= b.dd;
}

bool MoreDate(Document a, Document b){  //a 的日期大于 b，返回ture
    if(a.yy != b.yy) return a.yy >= b.yy;
    if(a.mm != b.mm) return a.mm >= b.mm;
    else return a.dd >= b.dd;
}

int main(){
    Document oldest, youngest;      //最年长、最年轻
    Document left, right, person;   //年龄的左右边界
    oldest.yy = right.yy = 2014;    //初始化
    youngest.yy = left.yy = 1814;
    oldest.mm = right.mm = youngest.mm = left.mm = 9;
    oldest.dd = right.dd = youngest.dd = left.dd = 6;
    int n,count=0;                  //count记录合法日期人数
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%s %d/%d/%d", &person.name, &person.yy, &person.mm, &person.dd);
        if(LessDate(person, right) && MoreDate(person, left)){
            count++;
            if(LessDate(person, oldest)) oldest = person;       //无需按元素分开赋值
            if(MoreDate(person, youngest)) youngest = person;
        }
    }
    if(count == 0) printf("0");       //存在所有人的日期都不合法的极端情况
    else printf("%d %s %s\n", count, oldest.name, youngest.name);
    return 0;
}
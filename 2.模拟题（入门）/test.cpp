#include <cstdio>
// 每个月的天数
int dayOfMonth[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};
// 是否是闰年
bool isLeapYear(int year) {
    return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}
// 
void SumDay(int &year, int &month, int &day) {
    int run = isLeapYear(year), sum=0;             // 判断是否是闰年
    for(int i=1;i<month;i++){
        sum += dayOfMonth[run][i];
    }
    sum += day;
    printf("%d", sum);
}

int main() {
    int year, month, day, n;
    scanf("%d-%d-%d", &year, &month, &day);       // 按格式输入年月日
    scanf("%d", &n);                              // 输入需要增加的天数
    SumDay(year, month, day);
    return 0;
}
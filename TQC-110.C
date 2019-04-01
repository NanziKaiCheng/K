#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int a,c;
     float b; //題目變數b會是小數所以用float
     printf("請輸入變數a的值: ");
     scanf("%d", &a);
     printf("請輸入變數b的值: ");
     scanf("%f", &b); //float用f
     printf("請輸入變數c的值: ");
     scanf("%d", &c);
     printf("%d\n", 60<=a && a<100); //原題目printf("%d\n", 60<=a || a<100);||是"或"&&是"且"、"和"
     printf("%f\n", (b+1)/10);
     printf("%d\n", a>c?a:c); //判斷式?是:否。判斷式如果成立，則顯示"是"，否則顯示"否"
     return 0;
}

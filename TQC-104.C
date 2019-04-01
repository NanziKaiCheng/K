#include <stdio.h>
#include <stdlib.h>

int main() 
{
     int unit; //宣告一個變數
     double price=23.34; //宣告price=23.34
     double total; //宣告total是雙精度符標點
     printf("請問您要買幾瓶蘋果汁? ");
     scanf("%d", &unit); //輸入一個數存入unit
     total = unit*price;
     printf("我買了%d瓶100%的蘋果汁\n", unit);
     printf("花了%lf元", total); //因為是用double所以要用lf ;float是用f
     return 0;
}

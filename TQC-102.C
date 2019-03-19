#include <stdio.h>  
#include <stdlib.h>

int main() //主要程式
{ 
     double a, b, total; // 宣告三個雙精度浮標點
     printf("請輸入兩個浮點數:"); //輸出(請輸入兩個浮點數)
     scanf("%lf %lf", &a, &b); // 輸入兩個變數 (代表a,b)
     total = a+b; //變數total等於變數a+b
     printf("total=%lf", total); //輸出變數total之值
     return 0; 
}

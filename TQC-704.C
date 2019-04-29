#define TRIPLE(x) x*x*x;//定義一個方程式，結尾要有分號
#include <stdio.h>
#include <stdlib.h>
int main ()
{
 int num, triple_num;
 printf("請輸入一個整數: ");
 scanf("%d", &num);
 triple_num = TRIPLE(num);
 printf("%d的三次方為%d\n", num,triple_num);//參數少了"num"
 triple_num = TRIPLE((4+1));//要把它括號起來，讓4+1先處理
 printf("5的三次方為%d\n", triple_num);
 return 0;
}

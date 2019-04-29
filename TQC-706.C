#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
 int x, y;
 double result;
 printf("請輸入x, y的值: ");
 scanf("%d %d", &x, &y);
 result=(exp(5)*sqrt(pow(x, y)+log(100))/pow(x, 2))*pow(y, 3);//注意括號的優先順序要正確 原result=exp(5)*sqrt((pow(x, y)+log(100))/pow(x, 2)*pow(y, 3));
 printf("result=%f\n", result);
 system("PAUSE");
 return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main ()
{
 char string[20];
 int output;//轉成整數設為int  原本是double
 printf("請輸入一數字的字串: ");
 scanf("%s", string);
 output=atoi(string);
 printf("%s轉換後的整數為%d\n", string, output);//輸出整數為"%d"  原本是f
 return 0;
}

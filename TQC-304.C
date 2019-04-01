#include <stdio.h>
#include <stdlib.h>

void callFun();
int main()
{
     int i;
     for (i=1; i<=5; i++) {
          callFun();
     }
     return 0;
}

void callFun()
{
     auto ai=100; static int si=100; //auto變數值不會改變 而static變數則會儲存經過程式執行過後的變數
     ai++;
     si++;
     printf("ai=%d, si=%d\n", ai, si);
}

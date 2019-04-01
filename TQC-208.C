#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int i, total=0; //設total=0
     for (i=1; i<=100; i++) //原題目 for (i=1; i<100; i++); 把;拿掉
     if(i%2==0)  //題目要求偶數相加 所以當i是偶數時在加 
          total += i; 
     printf("1到100的偶數和: %d\n", total);
     return 0;
}

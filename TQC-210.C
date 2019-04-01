#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int i=0, total=0; //原 int i=1, total; 預設都是0
     do { //做下面的程式
          i+=2; //每次i+2
          total += i; //每次total+i
     } while (i<100);//當條件達成
     printf("1到100的偶數和: %d\n", total);
     return 0;
}

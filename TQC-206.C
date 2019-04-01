#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int i=0, total=0; //原題目 int i=1, total=0; 如果i=1則答案會少1
     while (i < 100)  //原題目 while (i <= 100) 如果<= 則答案會多100
     {
          i++;
          total +=i; // +=等於total=total+i
     } 
     printf("1加到100的總和:%d\n", total);
     return 0;
}

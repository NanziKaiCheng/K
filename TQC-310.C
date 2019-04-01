#include <stdio.h>
#include <stdlib.h>
int main () 
{
     int arr[5]={100, 200, 300, 400, 500};
     int i;
     printf("\n表達陣列元素的值方式一:\n");
     for (i=0; i<5; i++) //原i=1
     {
        printf("arr[%d]=%d\n", i, arr[i]);
     }
     printf("\n表達陣列元素的值方式二:\n");
     for (i=0; i<5; i++) //原i=1
     {
        printf("arr[%d]=%d\n", i, *(arr+i)); //原 printf("arr[%d]=%d\n", i, *arr+i);
     }
     printf("\n表達陣列元素的值方式三:\n");
     int *p=arr;
     for (i=0; i<5; i++,p++)
     {
        printf("arr[%d]=%d\n", i,*p);
     }
     printf("\n陣列元素的位址比較:\n");
      for (i=0; i<5; i++) //原i=1
      {
           printf("&arr[%d]==arr+%d is %s\n", i, i,&arr[i]==arr+i?"yes":"no"); //原 i, i,(arr[i]==arr+i?"yes":"no"));
      }
     return 0;
}

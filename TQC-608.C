#include <stdio.h>
#include <stdlib.h>
int main () 
{
     char str[]="Apple iPhone 4"; //原本char str[12]
     char sttr[]={'i', 'P', 'a', 'd'};
     char *pstr="Apple iPod";
     printf("str字串如下: %s\n", str);
     printf("sttr字串如下: %s\n", sttr);
     printf("pstr字串如下: %s\n", pstr);
     return 0;
}

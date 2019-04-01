#include <stdio.h>
#include <stdlib.h>
int adjust(int); //宣告函式
int main () 
{
     int score, final;
     printf("請輸入您的分數: ");
     scanf("%d", &score);

     final= adjust(score); //final=算完之後的分數

     printf("調整後的分數: %d", final);
     
     return 0;
}

int adjust(int score) //把輸入得數帶來這裡
{
	int temp;
     if (score >= 60) 
          temp = score + 5;
     else 
          temp = score + 10;

     return temp; //回傳
}

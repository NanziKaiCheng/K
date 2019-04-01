#include <stdio.h>
#include <stdlib.h>

int main () 

{
     char ch; //宣告字元
     printf("請問您的身份:以字母表示分別如下：\nU:表示大學生，M:表示研究生，P:表示博士生 ");
     scanf("%c", &ch); //輸入字元存入ch
     switch (ch) {   //條件判斷ch 如果服合'U'就輸出("您是大學生\n") 以此類推 
          case 'U':
               printf("您是大學生\n");  //原題目沒有break 如果沒有break就會達成字元"U"則會顯示 您是大學生 您是研究生 您是博士生 您輸入身份不正確
               break;
          case 'M':
               printf("您是研究生\n"); //所以達成條件執行完程式後要跳出 否則會一直做下去
               break;
          case 'P':
               printf("您是博士生\n");
               break;
          default //否則
               :printf("您輸入身份不正確\n");
               break;
     }
return 0;
}

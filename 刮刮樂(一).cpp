#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c;	//宣告 三個整數變數
	cin>>a;		//把輸入的數值存進a裡  
	b=a/10;		//把a/10所得到的數值存進b裡，b 是十位數 
	c=a%10;		//把a%10所得到的數值存進c裡，c 是個位數 
	if(c==2||c==5||c==8) cout<<"200";	//如果c的數值等於2或5或8 輸出"200" 
	else if(b%2==1) cout<<"100";		//否則如果 b是奇數 就輸出"100" 
	else if(b==c) cout<<"50";			//否則如果b=c 就輸出"50" 
	else cout<<"0";						//否則輸出"0" 
}

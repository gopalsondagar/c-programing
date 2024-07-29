#include<stdio.h>
int main(){
	int a=25;
	int b=30;
	int c=a-b;
	if(c>=b)
	{
		printf("true");		
	}
	else if(b>=a)
	{
		printf("not");
	}
	else
	{
		printf("false");
	}
	return 0;
}

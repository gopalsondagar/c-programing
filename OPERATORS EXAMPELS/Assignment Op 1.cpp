#include<stdio.h>

int main(){
    int a = 7;
    int b = 5;
    int c = 1;
    if(c+=b)
    {
    	printf("true");
	}
	else if(c-=a)
	{
		printf("not");
	}
	else
	{
		printf("false");
	}
    return 0;
}

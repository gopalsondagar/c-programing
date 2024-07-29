# include <stdio.h>
int main(){
	double a,b,product;
	printf("Enter Two Numbers:");
	scanf("%Lf%Lf",&a,&b);
	product=a*b;
	printf("product=%.2Lf",product);
	return 0;
}

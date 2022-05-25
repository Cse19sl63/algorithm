/*program to find value of f(n) in fibonochic series*/
#include<stdio.h>
int main()
{
	int n=7;
	int f=1;
	f=fib(n);
	printf("%d",f);
	
}
int fib(int n)
{
	if(n==1)
	return 0;
	else if(n==2)
	return 1;
	else 
	return fib(n-1)+(n-2);
}

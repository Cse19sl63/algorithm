  #include<stdio.h>
int main()
{            int step=2;
	int n;
	step=step++;
	int fact=1;
	step=step++;
	int i;
	step=step++;
	printf("enter the positive interger");
	step=step++;
	scanf("%d",&n);
	step=step++;
	for(i=1;i<=n;i++)
	
	{
		fact=fact*i;
		

             }
             step=step+i+n+1+i++;
             step=step+n;
	printf(" The factorial of entered number is %d",fact);
	step=++step;
	printf("\nThe no of program steps = %d",step);
	return 0;
}

#include<stdio.h>
int main()
{
	float num1,num2;
	float sum,diff,prod,qout;
	printf("enter first number:");
	scanf("%f",&num1);


	printf("enter second number:");
	scanf("%f",&num2);
    
	
	sum=num+num2;
	printf("/nresult:\n");
	printf("addition:%2f/n",sum);
        
        diff=num1-num2;
	printf("subtraction:%.2f\n",diff);

        quot=num1/num2;
	
	if(num2!=0)
	{
		quot=num1/num2;
	}
	else
	{
		printf("division by zero is not allowed");
		return 1;
	}

	printf("division:%.2f\n",quot);



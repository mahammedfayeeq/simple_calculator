#include<stdio.h>
using namespace.std

int main()
{
	int num1,num2;
	int sum,diff,prod,qout;
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

        prod=-num1*num2;

	printf("multiplication:%.2f\n",prod);
	 
         
	return 0;
        
}

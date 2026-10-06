#include<stdio.h>
int main()
{
	int a,b,choice,res;
	printf("=====BRANCHING STATEMENTS=====\n");
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("\n-----MENU-----\n");
	printf("1.Check Positive, Negative or zero\n");
	printf("2.check Even or Odd\n");
	printf("3.Find the largest of two numbers\n");
	printf("4.check Divisibility ny 5\n");
	printf("5.Modulus\n");
	printf("\n Enter your choice:");
	scanf("%d",&choice);
	printf("\n-----Result-----\n");
	switch(choice)
	{
		case 1:
			if(a>0)
		    	printf("%d is positive",a);
			else if(a<0)
			    printf("%d is neagative",a);
			else
		       	printf("%d is zero",a);
		    break;
		case 2:
			if(a%2==0)
		    	printf("%d is even ",a);
			else
			    printf("%d is odd",a);
		    break;
		case 3:
		    if(a>b)
		    {
			  res=a;
			printf("%d is the Largest number",res);
			}
			if(b>a)
		    {
			  res=b;
				printf("%d is the Largest number",res);
			}
			else
		    {
			   printf("%d is the Largest number",res);
			} 
			break;
		case 4:
			if(a%5==0)
			   printf("%d is divsible by 5",a);
			else
			   printf("%d is Not divisible by 5",a);
			break;
		default:
			printf("Invalid choice.");
    }
    return 0;
}
			
			   
			
		    
		    
		
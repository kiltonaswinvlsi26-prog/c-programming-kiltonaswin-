#include<stdio.h>
int main()
{
	int a,b,res,choice;
	printf("=====BITWISE OPERATIONS=====\n:");
	printf("Enter the first number:");
	scanf("%d",&a);
    printf("Enter the second number:"); 
	scanf("%d",&b);
	printf("Enter the first  number:");
	printf("\n-----MENU-----\n:");
	printf("1.BITWISE AND(&)\n");
	printf("2.BITWISE OR(|)\n");
	printf("3.BITWISE XOR(^)\n");
	printf("4.BITWISE NOT(~)\n");
	printf("5.left shift(<<)\n");
	printf("6.right shift(>>)\n");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			res=a&b;
			printf("Bitwise AND Result=%d",res);
			break;
		case 2:
			res=a|b;
			printf("Bitwise OR Result=%d",res);
			break;
		case 3:
			res=a^b;
			printf("Bitwise XOR Result=%d",res);
			break;
		case 4:
			res=~a;
			printf("Bitwise NOT Result=%d",res);
			break;
		case 5:
			res=a<<b;
			printf("Left Shift Result=%d",res);
			break;
		case 6:
			res=a&b;
			printf("Right Shift Result=%d",res);
			break;
		default:
		printf("Invalid choice");
    }
	return 0;
}
	

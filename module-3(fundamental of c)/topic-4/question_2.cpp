//WAP TO PERFORM CALCULATOR//

#include<stdio.h>
int add()
{
	int a,b,result;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	
	// addition//
	result=a+b;
    return result;
}

int sub()
{
	int a,b,result;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	
	// subtraction//
	result=a-b;
	return result;
}

int mul()
{
	int a,b,result;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	
	//multiplication//
	result=a*b;
	return result;
}

int div()
{
	int a,b,result;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	
	// divison//
	result=a/b;
	return result;
}

int modulo()
{
	int a,b,result;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	
	// modulo//
	result=a % b;
	return result;
}

int main()
{
	int choice;
	char repeat;
	
	// user choice board for selection///
	
	printf("===========choice board==============\n");
	
	printf("1:Addition\n");
	printf("2:Subtraction\n");
	printf("3:Multiplication\n");
	printf("4:Division\n");
	printf("5:Modulo\n");
	printf("6:Exit\n");
	
	// after entering the choice operation will be performed //
	printf("enter your choice:");
	scanf("%d",&choice);
	
	// switch case to establish performance//
	switch(choice)
	{
		case 1:                
			
				printf("%d",add());
				break;
			
		case 2:               
			
				printf("%d",sub());
				break;
			
		case 3:              
			
				printf("%d",mul());
				break;
			
		case 4:
			
				printf("%d",div());
				break;
			
		case 5:
			
				printf("%d",modulo());
				break;
			
		case 6:
			
				printf("exit");
				break;
		
		default:
			
				printf("invalid input");
				break;
			
	}
	// if u repeat than entire operation will perform again//
       printf("\nDo you want to continue?:");
       scanf(" %c",&repeat);
       
       if(repeat=='y')
       {
       	printf("\n");
       	main();
	   }
	   /// if no than "thank you will be printed//
	   else 
	   {
	   	printf("thank you\n");
	   }
	      
	return 0;   
} 

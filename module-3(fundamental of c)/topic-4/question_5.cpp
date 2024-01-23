////WAP to take two Array input from user and sort them in ascending or
//descending order as per user’s choice
#include<stdio.h>
int sort(int choice)
{
	int i,j;
	int arr[5],temp;
	
	//condition//
	if(choice ==1)
	{
		// input array//
		for(i=0;i<5;i++)
		{
			printf("Enter array Elements:",i);
			scanf("%d",&arr[i]);
		}
		//loop for row 
		for(i=0;i<5;i++)
		{
			
			for(j=i+1;j<5;j++)
			{
				if(arr[i] > arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		
		// shorted array//		
		for(i=0;i<5;i++)
		{
			printf("%d:",arr[i]);
		}
	}
	
	else if(choice ==2)
	{
		for(i=0;i<5;i++)
		{
			printf("Enter array Elements:",i);
			scanf("%d",&arr[i]);
		}
		for(i=0;i<5;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(arr[i] < arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
			
		// sorted array//		
		for(i=0;i<5;i++)
		{
			printf("%d:",arr[i]);
		}
	}

	else
	{
		printf("Invalid!!! choice");
	}
	
}

int main()
{
	int choice;
	
	//choice board//
	printf("=========Choice board=======\n");
	printf("1.Ascending\n");
	printf("2.Descending\n");
	

	printf("Enter your choice from Choice board:\n");
	scanf("%d",&choice);
	
	//functin call//
	sort(choice);

	return 0;
}


//WAP to accept 5 employees name and salary and count average and total salary//

#include<stdio.h>
int main()
{
	char p1[10],p2[10],p3[10],p4[10],p5[10];
	int s1,s2,s3,s4,s5;
	float totalsalary=0,average=0;
	
	//input of employee name and salary//
	printf("enter the p1:");
	scanf("%s",&p1);
	printf("enter the s1:");
	scanf("%d",&s1);
	
	printf("enter the p2:");
	scanf("%s",&p2);
	printf("enter the s2:");
	scanf("%d",&s2);
	
	printf("enter the p3:");
	scanf("%s",&p3);
	printf("enter the s3:");
	scanf("%d",&s3);
	
	printf("enter the p4:");
	scanf("%s",&p4);
	printf("enter the s4:");
	scanf("%d",&s4);
	
	printf("enter the p5:");
	scanf("%s",&p5);
	printf("enter the s5:");
	scanf("%d",&s5);
	
	//output of total salary//
	totalsalary=s1+s2+s3+s4+s5;
	
	//output of average salary//
	average=totalsalary/5;
	
	//output of employee details//
	
    printf("\n employee details:\n");
    printf("p1:%s,s1:%d\n",p1,s1);
    printf("p1:%s,s1:%d\n",p2,s2);
    printf("p1:%s,s1:%d\n",p3,s3);
    printf("p1:%s,s1:%d\n",p4,s4);
    printf("p1:%s,s1:%d\n",p5,s5);


	printf("total:%f",totalsalary);
	
	printf("average salary:%f",average);
	
	
}

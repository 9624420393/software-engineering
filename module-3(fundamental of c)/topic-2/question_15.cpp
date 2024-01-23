//Write a C program to determine eligibility for admission to a professional course based on the following criteria
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
//Physics >=140 --------------------------------------Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks
//obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible//

#include<stdio.h>
int main()
{
	int maths,physics,chemistry,total1=0,total2=0;
	
	//inputs of all subjects//
	
	printf("enter the marks of maths:");
	scanf("%d",&maths);
	printf("enter the marks of physics:");
	scanf("%d",&physics);
	printf("enter the marks of chemistry:");
	scanf("%d",&chemistry);
	
	//equation for total of three subjects//
	
	total1=maths+physics+chemistry;
	printf("total of all three subjects:%d\n",total1);
	
	//total of two subjects//
	
	total2=maths+physics;
	printf("total of two subjects:%d\n",total2);
	
	//condition to check eligibility//
	
	if(maths>=65 && physics>=55 && chemistry>=50 && total1>=190|| total2>=140)
	{
		printf("candidate is eligible");
	}
	else
	{
		printf("candidate is not eligible");
	}
	
	
	
	return 0;
}


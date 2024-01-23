//Write a program of structure employee that provides the following//
//a. information -print and display empno, empname, address and age//

#include <stdio.h>
// structure created//
struct employee
{
    int empno;
    char name[10];
    int age, salary;
    
} e[10];

int main(void)
{ 
    struct employee emp[10];
    int i;
            // loop to get information about employees//
            for (i=0;i<1;i++)
                {
                    printf("\n Enter employee number : ");
                    scanf("%d",&e[i].empno);
                    printf("\n Enter name of employee : ");
                    scanf("%s",&e[i].name);
                    printf("\n Enter age of employee : ");
                    scanf("%d",&e[i].age);
                    printf("\n Enter salary of employee : ");
                    scanf("%d",&e[i].salary);
                }  
			/// display the output//// 
        printf("\n Emp. No. Name    Age     Salary \n\n");
            for (i=0;i<1;i++)
            {
			    printf("%d   %s    %d    \%d \n",e[i].empno,e[i].name,e[i].age,e[i].salary);
			}
return 0;
}

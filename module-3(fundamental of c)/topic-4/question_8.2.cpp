//Write a program of structure for five employee that provides the following information -print and display empno, empname, address andage
//Write a program of structure employee that provides the following//
//a. information -print and display empno, empname, address and age//

#include <stdio.h>
// created structure//
struct employee
{
    int empno;
    char name[10];
    int age, salary;
    
} e[10];

int main(void)
{ 
    struct employee emp[10];
    int i, n;
    
    // enter the employee details using for loop ///
    printf("Enter the number of employees\n");
    scanf("%d",&n);
            for (i=0;i<5;i++)
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
            // output displayed//
        printf("\n Emp. No. Name  Age Salary \n");
            for (i=0;i<n;i++)
            {
			    printf("%d  %s  %d \%d \n",e[i].empno,e[i].name,e[i].age,e[i].salary);
			}
return 0;
}


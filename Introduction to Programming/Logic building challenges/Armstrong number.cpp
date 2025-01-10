//Write a C program that checks whether a given number is an Armstrong number or not (e.g., 153 = 1^3 + 5^3 + 3^3).
//Challenge: Write a program to find all Armstrong numbers between 1 and 1000.


#include <math.h>
#include <stdio.h>

int main()
{
	int i, sum, num, count = 0;
	printf(	"Armstrong number between 1 and 1000 are:\n");

	for (i = 1; i <= 1000; i++) {
		num = i;
		while (num != 0) {
			num /= 10;
			count++;
		}
		num = i;
		sum = pow(num % 10, count)
			+ pow((num % 100 - num % 10) / 10, count)
			+ pow((num % 1000 - num % 100) / 100, count);
		
		if (sum == i) {
			printf("%d ", i);
		}
		count = 0;
	}
}


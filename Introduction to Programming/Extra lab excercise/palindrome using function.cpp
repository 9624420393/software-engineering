//Write a C program that takes a number as input and checks whether it is a palindrome using a function.
//Challenge: Modify the program to check if a given string is a palindrome.
#include <stdio.h>

int reverseNumber(int num) {
    int reversedNumber = 0;
    while(num != 0) {
        reversedNumber = reversedNumber*10+(num % 10);
        num /= 10;
    }
    return reversedNumber;
}

int isPalindrome(int num) {
    int reversedNumber = reverseNumber(num);
    
    if(num == reversedNumber) {
        return 1; 
    }
    else {
        return 0; 
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if(isPalindrome(number)) {
        printf("%d is a palindrome number.", number);
    }
    else {
        printf("%d is not a palindrome number.", number);
    }
    
    return 0;
}

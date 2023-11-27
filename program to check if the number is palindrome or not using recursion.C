
#include <stdio.h>
int countDigits(int num) {
    if (num == 0)
        return 0;
    else
        return 1 + countDigits(num / 10);
}
int isPalindrome(int num, int digits) {
    if (digits <= 1)
        return 1; 
    int firstDigit = num / (int)pow(10, digits - 1);
    int lastDigit = num % 10;
       if (firstDigit != lastDigit)
        return 0;
      return isPalindrome((num % (int)pow(10, digits - 1)) / 10, digits - 2);
}
int main() {
    int num;

       printf("Enter a number: ");
    scanf("%d", &num);
      int digits = countDigits(num);
        if (isPalindrome(num, digits))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
    return 0;
}


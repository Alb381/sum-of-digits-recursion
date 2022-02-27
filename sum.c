#include <stdio.h> 
 
int sumDig(int); 
 
int main() 
{ 
    int num; 
    printf("Enter a number: "); 
    scanf("%d", &num); 
     
    int sum = sumDig(num); 
    printf("Sum of digits of %d is %d", num, sum); 
    return 0; 
} 
 
int sumDig(int n) { 
    if (n == 0) return 0; 
    int dig = n % 10; 
    return dig + sumDig(n / 10); 
} 

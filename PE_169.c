// PE #169: Exploring the number of different ways a number can be expressed as a sum of powers of 2
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int Series(int n);

int Series(int n){
    if(n == 0) return 1;
    else if(n%2 == 0) return (Series(n/2) + Series((n/2)-1));
         else return (Series(n/2));
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    // In this problem STERN's diatomic series is used with only the difference of index by one.
    int n;
    scanf("%d", &n);
    printf("%d", Series(n));
    return 0;
}

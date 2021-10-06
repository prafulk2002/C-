#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a,i;
    char* arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d", &a);
    
        if(a > 9) 
        {
            printf("Greater than 9");
        }
        else 
        {
            printf("%s\n", arr[a]);
        }
    
    return 0;
}

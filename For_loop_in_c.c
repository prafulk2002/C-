#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    char* arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d\n%d", &a, &b);
    for(int i = a; i <= b; i++)
        printf("%s\n", arr[i]);
    for(int i = a; i <= b; i++) 
    
        if(i < 9) 
        {
            if(i % 2 == 0)
                printf("even\n");
            else printf("odd\n");
        }
        
    
    return 0;
}
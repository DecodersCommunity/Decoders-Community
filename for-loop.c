#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    int i;
    char numbers[12][100] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    for(i=a;i<=b;i++){
        if(i>9){
            if(i%2 == 0)
                printf("%s\n", numbers[9]);
            else
                printf("%s\n", numbers[10]);
        }
        else
            printf("%s\n", numbers[i-1]);
    }
    return 0;
}

#include <stdio.h>

int main()
{

    int i, input, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &input);

    for (i = 1; i <= input; i++)
    {
        int result=input*i;
        // printf("%d\n",result);
        sum = sum + result;
        
    }
    printf("sum of the number occuring in table of %d is : %d",input,sum);

    return 0;
}
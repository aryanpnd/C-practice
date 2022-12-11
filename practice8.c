#include <stdio.h>

int main()
{

    int i;
    int input;
    printf("Enter the amount of numbers you want to print : ");
    scanf("%d", &input);

    for (i = 0; i <= input; i++)
    {
        printf("%d\n",i);
    };
    

    return 0;
}
#include <stdio.h>

int main()
{

    int i;
    int input;
    printf("Enter the number : ");
    scanf("%d", &input);

    for (i = 1; i <= input; i++)
    {
        printf("%d x %d = %d\n",input,i,input*i);
        if (i>9)
        {
            break;
        }
        
    }

    return 0;
}
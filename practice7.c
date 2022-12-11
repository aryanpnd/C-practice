#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int a = 0;
    int input;
    printf("Enter the amount of numbers you want to print : ");
    scanf("%d", &input);

    do
    {
        printf("%d\n", a);
        a++;
    } while (a <= input);

    printf("The console has printed %d natural numbers\n", input);

    system("pause");
    return 0;
}
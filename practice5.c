#include <stdio.h>

int main(){

    int rating;
    printf("Enter rating (between 1-5)");
    scanf("%d",&rating);

    switch (rating)         
    {
    case 1:
        printf("You have chosen 1");
        break;
    case 2:
        printf("You have chosen 2");
        break;
    case 3:
        printf("You have chosen 3");
        break;
    case 4:
        printf("You have chosen 4");
        break;
    case 5:
        printf("You have chosen 5");
        break;
    
    default:
        printf("You have chosen invalid rating");
        break;
    }

    return 0 ;
}
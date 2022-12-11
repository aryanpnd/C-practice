#include <stdio.h>

int main(){

    int firstNum, secondNum, thirdNum, fourthNum;

    printf("Enter Your first number : ");
    scanf("%d",&firstNum);

    printf("Enter Your second number : ");
    scanf("%d",&secondNum);

    printf("Enter Your third number : ");
    scanf("%d",&thirdNum);

    printf("Enter Your fourth number : ");
    scanf("%d",&fourthNum);

    if (firstNum > secondNum && firstNum > thirdNum && firstNum > fourthNum ) printf("%d is greater in other input numbers",firstNum);
    else if (secondNum > firstNum && secondNum > thirdNum && secondNum > fourthNum ) printf("%d is greater in other input numbers",secondNum);
    else if (thirdNum > secondNum && thirdNum > firstNum && thirdNum > fourthNum ) printf("%d is greater in other input numbers",thirdNum);
    else if (fourthNum > secondNum && fourthNum > thirdNum && fourthNum > firstNum ) printf("%d is greater in other input numbers",fourthNum);
    else printf("All input numbers are same");

    return 0;
}
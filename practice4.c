#include <stdio.h>

float main(){

    float physics, chemistry , maths ;

    printf("\nEnter you Physics Marks (0-80): ");
    scanf("%f",&physics);

    printf("\nEnter you Chemistry Marks (0-80): ");
    scanf("%f",&chemistry);

    printf("\nEnter you Maths Marks (0-80): ");
    scanf("%f",&maths);

    float total_marks=80;
    float total_marks_came = physics+chemistry+maths;
    float result = total_marks_came/240*100;

    if (result>30 && result<80) printf("Congrats You have been Passed");
    else if (result<30 && result>0) printf("You FAILED!!");
    else printf("Sorry Wrong inputs");

     return 0 ;
}
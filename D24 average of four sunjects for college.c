
#include <stdio.h>

int main() {
    float CS, math, phy, EE;
    float average;
    printf("Enter the marks of CS: ");
    scanf("%f",&CS);
     printf("Enter the marks of maths: ");
    scanf("%f",&math);
     printf("Enter the marks of physics: ");
    scanf("%f",&phy);
     printf("Enter the marks of EE: ");
    scanf("%f",&EE);

    average =(CS + math + phy + EE) / 4;

    printf("The average marks of all subjects is: %f", average);

    return 0;
}

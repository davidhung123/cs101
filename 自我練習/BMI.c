#include <stdio.h>

int main()
{
    float h, w, bmi;
    scanf("%f", &h);
    scanf("%f", &w);
    bmi = w/(h * h);
    
    printf("BMI = %.4f\n", bmi);

    return 0;
}

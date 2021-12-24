#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    float a, b, area;
    printf("Enter Equal Two sides length and Other Arm length : ");
    scanf("%f%f", &a,&b);
    area = b*sqrt(pow(a,2)-pow(b,2))/4;
    printf("Area = %.2f", area);
    getch();
    return 0;
}

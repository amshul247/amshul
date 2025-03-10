#include <stdio.h>
#define PI 3.14

int main() {
    double r, h, volume;
    printf("Enter the radius of the base (r): ");
    scanf("%lf", &r);
    printf("Enter the height of the cone (h): ");
    scanf("%lf", &h);
    volume = (0.33333333333) * PI * r * r * h;
    printf("The volume of the cone is: %.2f\n", volume);

    return 0;
}



#include <stdio.h>
int main()
{
float mass,velocity,kinetic_energy;
printf("enter the value of mass:");
scanf("%f",&mass);
printf("enter the value of velocity:");
scanf("%f",&velocity);
kinetic_energy = 0.5 * mass * velocity * velocity;
printf("the kinetic energy of an object is:%f", kinetic_energy);
return 0;
}




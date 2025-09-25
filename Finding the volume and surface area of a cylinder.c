/*
Name :Alvin kibirio Mwangi 
Admission:CT100/G/29153/25
DESCRIPTION:C program to find the surface area and volume of a cylinder
*/
#include<stdio.h>
#define PI 3.142

int main() {
float radius,height,volume,surfaceArea;

printf("Enter the radius of the cylinder:");
scanf("%f",&radius);

printf("Enter the height of the cylinder:");
scanf("%f",&height);

volume=PI*radius*radius*height;
surfaceArea =2*PI*radius*radius+2*PI*radius*height;

printf("Volume of the cylinder=%.2f%",volume);
printf("surfaceArea of the cylinder=.2%f,",surfaceArea);

return 0;
}
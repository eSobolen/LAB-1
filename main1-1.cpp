#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <locale.h> 
int main() {
setlocale(LC_ALL,"Russian");	
float x,z;
printf("Enter x:  ");
scanf("%f",&x);
z=32*x*x*x*x*x*x;
printf("%.1f",z);
 return 0;
}

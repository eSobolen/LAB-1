#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <locale.h> 

int main() {
	setlocale(LC_ALL,"Russian");
	float x,y,z,s;
	
	printf("Enter x : ");
	scanf("%f",&x);
	printf("Enter y: ");
	scanf("%f",&y);
	printf("Enter z: ");
	scanf("%f",&z);
	s=(2.0*cos(x-(2.0/3.0)))/(1.0/2.0+sin(y)*sin(y))*(1.0+(z*z)/(3.0-((z*z)/5.0)));
	


	printf("x = %f\n  ,y = %f\n  ,z =%f\n ,s =  %f\n ",x,y,z,s);
  	return 0;
}


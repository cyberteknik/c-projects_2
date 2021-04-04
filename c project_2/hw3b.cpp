#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a,b,c,x1,x2,real,imaginary,discriminant;
	printf("enter a,b and c:");
	scanf("%f %f %f",&a, &b, &c);
	
	discriminant = (b*b)-(4*a*c);
	if(discriminant > 0)
	{
	x1 = (-b + sqrt(discriminant))/ 2*a;
	x2 = (-b - sqrt(discriminant))/2*a;
	printf("x1:%f",x1);
	printf("x2:%f",x2);
	}
	else if(discriminant==0)
	{
		x1 = x2 = (-b) / 2*a;
		printf("x1 = x2 = %2.f",x1);
	}
	else
	{
		real = -b/(2.0*a);
        imaginary = sqrt(-discriminant)/(2.0*a);
        printf("x1 = %.2f+%.2fi and x2 = %.2f-%.2fi", real, imaginary, real, imaginary);
    }
		return 0;
	}
	

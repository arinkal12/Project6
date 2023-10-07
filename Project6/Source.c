#include <stdio.h>
#include <math.h>
int main() {
	float x1, x2, x3, y1, y2, y3;
	float a,b,c,p,P,s;
	printf("enter the coordinates of a ");
	scanf_s("%f %f", &x1, &y1);
	printf("\nenter the coordinates of b");
	scanf_s("%f %f", &x2, &y2);
	printf("\n enter the coordinates of c ");
	scanf_s("%f %f", &x3, &y3);
	a = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2)); 
	b = sqrt(pow(x3 - x2,2) + pow(y3 - y2,2));
	c = sqrt(pow(x3 - x1,2) + pow(y3 - y1,2));
	P = a + b + c;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("\nperimeter = %f",P);
	printf("\n area = %f",s);

	return 0;
}





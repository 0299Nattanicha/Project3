#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float f, C;
	scanf("%f", &f);
	printf("Temp : %.2f Fahrenheit\n", f);
	if (f >= 32)
	{
		C = (5 * (f - 32)) / 9;
		printf("%.2f Fahrenheit = %.2f Celsius", f, C);
	}
	else
	{
		C = (5 * (f - 32)) / 9;
		printf("%.2f Fahrenheit = %.2f Celsius\n", f, C);
		printf("It's too cold to live");
	}
	return 0;
}
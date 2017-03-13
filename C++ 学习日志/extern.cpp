#include <stdio.h>
#include <conio.h>
int main(void)
{
	int year, leap;
	scanf_s("%d", &year);
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				leap = 1;
			else
				leap = 0;

		}
		else
			leap = 1;
	}
	else
		leap = 0;
	if (leap)
		printf("%d是闰年 ", year);
	else
		printf("%d 不是闰年", year);
	getch();
	return(0);


}

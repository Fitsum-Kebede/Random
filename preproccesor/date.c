#include <stdio.h>

int main()
{
	printf("Date is: %s\n", __DATE__);
	printf("Time, file, line, ANSI: %s, %s, %d, %d\n", __TIME__, __FILE__, __LINE__, __STDC__ );
}

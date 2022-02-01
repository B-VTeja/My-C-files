#include<stdio.h>

int main()
{
	int x, y;
	int res;
	scanf("%d%d", &x, &y);
	res = (((((x+y)*y)/x)+(((x+y)*x)/y))/(x*y));


	printf("%d\n", res);
	res = ((x+y)/(x*y));

	printf("%d\n", res);
	res = (((x+y)*(x-y))/x*y);

	printf("%d\n", res);
	res = (x-(x/y)*y);

	printf("%d\n", res);
	
	printf("x%y = %d\n", x %y);
	return 0;


}

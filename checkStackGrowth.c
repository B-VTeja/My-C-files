#include<stdio.h>

int main()
{
	int i = 2;
	int j = 3;

	if (&i > &j) {
		printf("Stack grow downwards\n");
		printf("i:%p\nj:%p\n", &i, &j);

	}
	else {
		
		printf("i:%p\nj:%p\n", &i, &j);
		printf("Stack grow upwards\n");
	}

	return 0;
}

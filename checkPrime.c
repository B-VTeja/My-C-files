#include<stdio.h>

int checkprime(int num)
{
	int n = num / 2;

	while (n > 1) {
		
		if (num % n == 0) {
			
			return 0;
		}
		n--;
	
	}
	if (n == 1) {
		return 1;
	}

}

int main()
{
	int input;
	while(1) {
		scanf("%d", &input);
		if(checkprime(input))
			printf("Prime\n");
		else
			printf("not Prime\n");
}

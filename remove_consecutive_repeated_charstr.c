#include<stdio.h>

int check_duplicates(char *str) {
	
	if (str[0] == '\0') {
		printf("Empty string\n");
		return 0;
	}
	if (str[0] == str[1]) {
		int i = 0;
		while (str[i] != '\0') {
		
			str[i] = str[i +1];
			i++;
		}

	}
	check_duplicates(str+1);
	
	return 0;

}
int main()
{
	char str[20];
	printf("Input string: \n");
	scanf("%s", str);

	check_duplicates(str);
	
	printf("%s\n", str);

	return 0;
}

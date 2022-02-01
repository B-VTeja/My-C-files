#include <stdio.h>

int main()

{

int num1, num2, temp;

scanf(" %d%d", &num1, &num2);
int cnt=1;
while( num2 != 0)
{

temp = num1 & num2;

num1 = num1 ^ num2;

num2 = temp << 1;
if(cnt)
{
printf("%d ",temp);
printf("%d ",num1);
printf("%d ",num2);
cnt=0;
}
printf("\n");

printf("Result is %d \n", num1);

return 0;

}
}


#include <stdio.h>
int main(){
    int i, num, sum = 0;
    printf("Enter the maximum value: ");
    scanf("%d", &num);
    printf("Even Numbers Between 0 and %d are: \n", num);
    for (i = 1; i <= num; i++)
	{
        if (i % 2 == 0)
		 {
            printf("%d\n", i);
            sum = sum + i;
        }
    }
    printf("The Sum of Even Numbers from 0 to %d is %d.", num, sum);
    return 0;
}

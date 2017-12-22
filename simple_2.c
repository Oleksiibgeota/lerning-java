#include <stdio.h>
int main()
{
    int low, high, i, flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are: ", low, high);

    while (low < high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", low);

        ++low;
    }
    scanf(%d %d %d %d %d %d %d %d %d, &prime[0], &prime[1], &prime[2], &prime[3], &prime[4], &prime[5], &prime[6], &prime[7], &prime[8]) ==9
    //  up number 29
    printf("%d\n", prime[3]);

    return 0;
}
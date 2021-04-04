#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm;
    for(i=0;i<200;i++)
	{
		printf("Enter the number of terms: \n");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("f(%d)=%d, ",n , t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
	}
    
    return 0;
}

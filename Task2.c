#include<stdio.h>

int main()
{
	int n,m,a,k,sum;
	scanf("%d",&n);

	while(n--)
	{
		scanf("%d %d",&m,&k);

		if(m%2 == 0)
		{
			m--;
		}

		a = m;
		sum = 0;

		while(a>0)
		{
			sum += a % 2;
			a = a/2;
		}

		if(sum == k)
        	{
                	printf("%d \n",m);
        	}

        	else
        	{
                	printf("-1\n");
        	}
	}
	return 0;
}

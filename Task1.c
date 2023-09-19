dj#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);

	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	int x;
	scanf("%d",&x);

	for(int i=0;i<n;i++)
	{
		if(a[i] == x)
		{
			a[i] = 1;
		}
	}

	int i, j;
    	for(i=0;i<n-1;i++) 
	{	
		for(j=0;j<n-i-1;j++)
		{		
			if(a[j] > a[j+1]) 
			{
                		int temp = a[j];
                		a[j] = a[j+1];
                		a[j+1] = temp;
			}
		}
	    	
	}

	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}

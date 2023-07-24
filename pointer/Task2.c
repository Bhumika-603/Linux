#include<stdio.h>

#define length 3

char* words[length];

int main()
{
	char *pi;
	char **ppi;

	words[0] = "zero";
	words[1] = "one";
	words[2] = "two";

	for(int i=0;i<length;i++)
	{
		printf("%s\n",words[i]);
	}

	printf("Print the strings again.\n");

	ppi = words;
	for(int i=0;i<length;i++)
	{
		ppi = words + i;
		pi = *ppi;

		while(*pi != 0)
		{
			printf("%c ",*pi);
			pi += 1;
		}
		printf("\n");
	}
	return 0;
}

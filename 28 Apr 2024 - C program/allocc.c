#include<stdio.h>
#define max_size 100
int main()
{
	char str[max_size];
	char toSearch;
	int i;
	printf("Enter the texts::\n");
	gets(str);
	printf("Enter the character:\n");
	toSearch=getchar();
	
	i=0;
	while(str[i]!='\0')
	{
		if(str[i]==toSearch)
		{
			printf("%c is index at %d\n",toSearch,i);
		}
	
		i++;
	}
	return 0;
}

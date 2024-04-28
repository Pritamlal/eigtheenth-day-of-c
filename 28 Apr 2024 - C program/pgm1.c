#include<stdio.h>
#define max_size 100
int lastindex(const char *str,const char tofind);
int main()
{
	char str[max_size];
	char tofind;
	int index;
	
	printf("Enter the string::");
	gets(str);
	printf("Enter the word::");
	tofind=getchar();
	index=lastindex(str,tofind);
	printf("last index of str %c is %d",tofind,index);
}

int lastindex(const char *str,const char tofind)
{
	int index=0;
	int i=0;
	
	while(str[i]!='\0')
	{
		if(str[i]==tofind)
		{
			index=i;
		}
		i++;
	}
	return index;
}

#include<stdio.h>
#define max_size 100
void removeduplicates(char *str);
void removeall(char *str,const char toRemove,int index);
int main()
{
	char str[max_size];
	
	printf("Enter the strings::");
	gets(str);
	
	printf("String before removing duplicates: %s\n", str);
	
	removeduplicates(str);
	
	printf("Obtained String is :%s",str);
	
}

void removeduplicates(char *str)
{
	int i=0;
	while(str[i]!='\0')
	{
		removeall(str,str[i],i+1);
		i++;
	}
}

void removeall(char *str,const char toRemove,int index)
{
	int i;
	
	while(str[index]!='\0')
	{
		if(str[index]==toRemove)
		{
			i=index;
			while(str[i]!='\0')
			{
				str[i]=str[i+1];
				i++;
			}
		}
		else
		{
			index++;
		}
	}
}

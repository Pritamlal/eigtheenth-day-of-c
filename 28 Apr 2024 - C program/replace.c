#include<stdio.h>
void replace(char *str,char oldchar,char newchar);
int main()
{
	char str[1000];
	char oldchar,newchar;
	printf("Enter the string::\n");
	gets(str);
	
	printf("Enter the charater to replace::\n");
	oldchar=getchar();
	
	getchar();
	
	printf("Enter the character to replace::\n");
	newchar=getchar();
	
	replace(str,oldchar,newchar);
	
	printf("In this word %c with %c : %s",oldchar,newchar,str);
	
	return 0;
}

void replace(char *str,char oldchar,char newchar)
{
	int i=0;
	
	while(str[i]!='\0')
	{
		if(str[i]==oldchar)
		{
			str[i]=newchar;
		
		}
		i++;
	}
}

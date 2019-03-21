#include <stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
  char str[100];
  int n,i,c=0,tot=0;
	printf("\nEnter the sentence : ");
	gets(str);
	for(i=0;str[i]!=NULL;i++)
	{
		if(isalpha(str[i])||isdigit(str[i]))
		{
			c++;
		}
		else
		{
			tot++;
		}
	}
	printf("\nThere are %d special characters in the sentence.",tot);
	return 0;
}

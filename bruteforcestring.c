#include<stdio.h>
#include<string.h>
int main()
{
	int n,m,i,j,flag=0;
	char t[20],p[10];
	printf("enter the text string\n");
	gets(t);
	printf("enter the pattern string\n");
	gets(p);
	n=strlen(t);
	m=strlen(p);
	for(i=0;i<=n-m;i++)
	{
		j=0;
		while(j<m && p[j]==t[i+j])
		{
			j++;
		}
		if(j==m)
		{

			printf("pattern found at position %d\n",i);
			flag=1;
		}

	}
	if(flag==0)
	printf("pattern not found\n");
}


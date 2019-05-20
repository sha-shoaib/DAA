#include<stdio.h>
int main()
{
	int flag=0,a[100],i,key,n;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the key element:\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{

	if(a[i]==key)
	{
		printf("element found at position %d",i+1);
		flag=1;
	}
	}
	 if(flag==0)
		printf("element not found");
	}


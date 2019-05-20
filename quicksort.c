#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
void quicksort(int [],int ,int );
int partition(int [],int ,int);
main()
{
	int n,i,a[100];
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	quicksort(a,0,n-1);
		printf("the array after sorting is\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
void quicksort(int a[],int low,int high)
{
	int j;
	if(low<high)
	{

	j = partition(a,low,high);
	quicksort(a,low,j-1);
	quicksort(a,j+1,high);
	}
}
int partition(int a[],int low,int high)
{
	int i,j,pivot,temp;
	j=high;
	i=low+1;

	pivot=a[low];
	while(1)
	{

		while(pivot>a[i] && i<=high)
			i++;
		while(pivot<a[j])
			j--;
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		else
		{
			temp=a[j];
			a[j]=a[low];
			a[low]=temp;
			return j;
		}
	}
}

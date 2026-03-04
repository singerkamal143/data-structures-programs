#include<stdio.h>
// function to merge two sorted subarrays
void merge (int a[],int l,int mid ,int h)
{
	int b[100];
	int i=l;
	int j =mid + 1;
	int k=l;
	//merge the two subarrrays
	while (i<=mid && j<=h)
	{
		if (a[i]<=a[j])
		{
			b[k] = a[i];
			i++;
		}
		else
		{
			b[k] =a[j];
			j++;
		}
		k++;	
	}
	while (i<= mid)
	{
		b[k]=a[i];
		i++;
		k++;
	}
	for(i=l;i<=h;i++)
	{
		a[i]=b[i];
	}
}
void mergeSort (int a[],int l,int h)
{
	if (l < h)
	{
		int mid =(l+h)/2;
		mergeSort(a, l, mid);
		mergeSort(a,mid+1,h);
		mergeSort ( a, l ,  h );
	}
}
int main()
{
	int a[100],n,i;
	printf("enter number of elements:");
	scanf("%d",&n);
	printf("enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergeSort(a,0,n-1);
	printf("sorted array:\n");
	for (i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
	}

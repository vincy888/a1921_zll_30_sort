#include"sortg.h"

void bubblesort(int arr[],int n)
{
	int i,j;
	int temp;
	int flag=0;
	for(i=1;i<n;i++)
	{
		flag=1;
		for(j=0;j<n-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				flag=0;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		if(flag==1)	break;
	}
}


void insertsort(int arr[],int n)
{
	int i,j;
	int temp;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while (j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
}

void selectsort(int arr[],int n)
{
	int i,j;
	int min;
	int temp;
	for(i=0;i<n-1;i++)
	{
		min=arr[i];
		int minindex=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<min)
			{
				min=arr[j];
				minindex=j;
			}
		}
		arr[minindex]=arr[i];
		arr[i]=min;
	}
}

void Partsort(int arr[],int low,int high)
{
	int x = arr[low];
	while(low < high)
	{

		while(low < high && arr[high]>=x)
			high--;
		if(low < high)
		{
			arr[low] = arr[high];
			low++;
		}
		while(low < high && arr[low]<=x)
			low--;
		if(low < high)
		{
			arr[high] = arr[low];
			high--;
		}
	}
	arr[low] = x;
	printf("%d ",low);
	return;
}
		

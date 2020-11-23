#include"sortg.h"
#include<time.h>
#define N 10

int main()
{
	int arr[N],n;
	srand(time(0));
	for (n=0;n<N;n++)
		arr[n]=rand()%100;
	printf("初始数据为： ");
	for (n=0;n<N;n++)
		printf("%d ",arr[n]);
	printf("\n");
	printf("排序后的数据： \n");
	bubblesort(arr,N);
	for(n=0;n<N;n++)
		printf("%d ",arr[n]);
	printf("\n");
	printf("排序后的数据： \n");
	insertsort(arr,N);
	for(n=0;n<N;n++)
		printf("%d ",arr[n]);
	printf("\n");
	printf("排序后的数据： \n");
	selectsort(arr,N);
	for(n=0;n<N;n++)
		printf("%d ",arr[n]);
	printf("\n");
	printf("排序后的数据： \n");
	Partsort(arr,0,n-1);
	for(n=0;n<N;n++)
		printf("%d ",arr[n]);
	printf("\n");
}
	

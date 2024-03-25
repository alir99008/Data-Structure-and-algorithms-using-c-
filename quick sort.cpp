#include<iostream>
using namespace std;
int quickPartitioning(int arr[] , int left , int right)
{
	int pivot_point = arr[right];
	int i= left-1;
	
	for(int j=left; j<right; j++)
	{
		if(arr[j]<pivot_point)
		{
			i++;
			int swap = arr[i];
			arr[i] = arr[j];
			arr[j] = swap;
		}
		
	}
   int swap = arr[i+1];
	arr[i+1] = arr[right];
	arr[right] = swap;
	return i+1;
}
void quickSorting(int arr[] , int left , int right)
{
	if(left<right)
	{
		int partition = quickPartitioning(arr,left,right);
		quickSorting(arr,left,partition-1);
		quickSorting(arr,partition+1,right);
	}
}
int main()
{
	int arr[] = {27,42,10,9,38,43};
	quickSorting(arr,0,5);
	for(int k=0; k<6; k++)
	{
		
		cout<<arr[k]<<" ";
	}
}

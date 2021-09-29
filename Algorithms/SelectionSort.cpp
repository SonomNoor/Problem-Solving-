//Selection Sort

#include<iostream>
using namespace std;

void selectionSort(int arr[],int n)
{
	for (int i=0;i<n-1;i++)
	{
		int min=i;
		for (int j=i+1;j<n;j++)
		{
			if (arr[j]<arr[min])
		
				min=j;
      
			swap (arr[min],arr[i]);
	}
}
}

void print (int arr[],int n)
{
	for (int i=0;i<n;i++)
	
	cout << arr[i] << " ";
}

int main ( )
{
	int arr[]={64, 25, 12, 22, 11};
	int n= sizeof (arr)/sizeof (arr[0]);
	selectionSort(arr,n);
	print (arr,n);
	return 0;
}

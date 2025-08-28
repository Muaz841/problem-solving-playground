#include<iostream>
using namespace std;

void swap(int array[], int s, int key)
{
	int start = 0;
	int end = s-1;
	int mid = key;
	

	while(mid < end)
	{
		swap(array[mid+1], array[end]);
		mid++, end--;		
	}
	
	mid = key; 
	
		while(start < mid)
	{
		swap(array[start],array[mid]);
		start++; mid--;
	}
	
	for(int i  =0; i <= s-1; i++)
	  {
	  	cout<<array[i]<<" ";
	  }
}

int main()
{
	int array[9] = {1,2,3,4,5,6,7,8,9};
	swap(array, 9, 4);
}

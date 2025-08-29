#include<iostream>
using namespace std;

void peak(int array[], int size)
{
	int start = 0; int end = size-1; int result = -1;
 while(start <= end)
 {
 	int mid = (start + end)/2;
 	
 		if(array[mid] > array[mid+1] && array[mid] > array[mid-1])
 		  {
 		  	result = mid;
		   }
 		if(array[mid] > array[mid+1] )
 		{
 			end = mid-1;
		 }
		 
		 	if(array[mid] < array[mid+1] )
 		{
 			start = mid+1;
		 }
 }
 
 cout<<result;
}

int main()
{
	int array[4] = {1,1,3,1};
	peak(array, 4);
	
}
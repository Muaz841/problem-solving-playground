#include<iostream>
using namespace std; 


void pivot(int array[], int s)
{
	int start = 0;
	int end = s-1;	
	int key = -1;
	
	while(start <= end)
	{
		int mid = (start + end) / 2;
		
	if(mid > 0 && array[mid] < array[mid+1] && array[mid] < array[mid-1])
		{
			key = array[mid] ;
			break;
		}
			
			if(array[mid] > array[start])
			{
				start = mid;
			}
			
			else 
			{
				end = mid;
			}

	}
	
	cout<<key;
}

int main()
{
	int array[8] = {3,4,5,6,7,0,1,2};
	
	pivot(array , 8);
}
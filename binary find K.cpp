#include<iostream>
using namespace std;

void indexbinarysearch(int array[], int s, int k)
{
	int start  =0; int end = s-1;
	int x = -1;
	
	while(start <= end)
	{
		int mid = (start+end)/2;
		
			if(array[mid] == k )
			{
				x = mid;
				break;
			}
			 
			 if(array[mid] > k )
			 		{
			 			end = mid-1;
					 }
					 
					 	if(array[mid] < k )
			 		{
			 			start = mid+1;
					 }
		}	
	cout<<x;
}
int main()
{
	int array[5] = {2,3,4,5,6}; 
	
	indexbinarysearch(array, 5, 6);
}
#include<iostream>
using namespace std;

int binarysquare(int array[], int k, int s)
{
	int end = s-1;
	int start = 0;
	int ans = -1;
	
	while(start <= end)
	{
			int mid = (start + end)/2;
			int square = array[mid] * array[mid];
		
		if(square == k )
		{			
			ans = array[mid];
			break;
		}
				
		if(square > k)
		{
			end = mid-1;
		}
		
		if(square < k)
		{
			ans = array[mid];
			start = mid+1;
		}
	}
	return ans;
}

double precised(double ans, int n)
{
	double factor = 1;
	
	for(int i = 0; i < 3; i++)
		{
			factor = factor / 10;			
		
				 for(double j = ans; j*j < n; j = j+factor)
				 {
				 	ans = j;
				 }
		}
		return ans;
}


int main()
{
		int array[1000];
		int num;
		
		cout<<" enter number"<<endl;
		cin >> num;
		

    for(int i = 0; i < 1000; i++) 
	{
        array[i] = i + 1;
    };
    
 		int squareroot = binarysquare(array, num, 1000);
 		double moreprecised = precised(squareroot, num);
 		
 		cout<<" squareroot "<<squareroot <<endl <<" decimal point " << moreprecised;
     
	return 0;
}
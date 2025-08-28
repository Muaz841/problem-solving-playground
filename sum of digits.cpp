#include<iostream>
using namespace std;

void sum(int array[], int s, int x)
{
	int result;
	for(int i = 0; i < s; i++)
	    {
	    	for(int j = 0; j < s; j++)
	    	    {
	    	    	result = array[i] + array[j];
	    	    	
	    	    	if(result == x)
	    	    	    {
	    	    	    	cout<<"sum of index "<<i<<" &  "<<j<<" = "<<result<<endl;

						}

				}
		}	
}
int main()
{
	int array[5] = {1,2,3,4,6};
     	sum(array, 5,  10);
}
 
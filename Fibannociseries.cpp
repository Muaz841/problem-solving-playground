#include<iostream>

using namespace std;

void Fibannociseries(int array[], int nextvalues)
{
	int output[nextvalues];
	
	for(int i = 0; i < 3; i++)
	{
		 output[i] = array[i];
	}
	
	for(int i = 3; i <= nextvalues; i++ )
	{
		output[i] = output[i-1] + output[i - 2]; 
	}
		for(int i = 0 ; i < 10;   i++ )
	{
		cout<<output[i]<<" ";
	}
}

int main()
{
	int array[3] = {1,2,3};
	Fibannociseries(array, 10);
}
#include<iostream>
using namespace std;

void dataManipulation(int start, int last, int gap)
{
	int arraySize = 0;
	int array[arraySize];
	
	for(int i = start; i<= last; i++)
	{
		if(array[i-1]< last)
		{
			arraySize++;
			array[i] =  array[i] + gap;
			cout<<array[i] << " ";
		}
		
	}	
}

int main()
{
	int last, start, gap = 0 ;
	dataManipulation(11, 20, 2);
}

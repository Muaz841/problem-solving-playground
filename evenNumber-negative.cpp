#include<iostream>
using namespace std;
void evenNumber(int array[], int s)
{
	for(int i = 0; i<s; i++)
	{
		if(array[i] % 2 == 0)
		{
			cout<<array[i] <<"is even number"<<endl;
		}
	}
}

int main()
{
	int array[7] = {2,3,-4,5,6,-8};
	evenNumber(array, 7);
}
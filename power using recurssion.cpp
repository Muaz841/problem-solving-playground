#include<iostream>
using namespace std;

int Power(int digit, int exponent)
{
	if(exponent == 0 ) return 1;
			
	 return digit * Power(digit,exponent - 1);
}

int main()
{
	cout<<Power(5,5);
}
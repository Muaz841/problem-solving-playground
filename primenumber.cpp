#include<iostream>
using namespace std;
bool isPrime(int n)
{
	if(n == 2) return false;
	
	for(int i = 2; i<=n/2; ++i)
	{
		if (n % i == 0) return false;
	}
	 return true;
}
int main()
{
	int array [6] = {13,7,5,17,15,19};
	
	for(const auto& num : array)
	{
		if(isPrime(num))
		{
			cout<<num<<" "<<"is prime number"<<endl;
		}
	}
} 
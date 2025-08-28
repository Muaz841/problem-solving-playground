#include<iostream>
#include<string>
using namespace std;

string stringReverse(string str)
{
	string rev;
	for(int i = str.length(); i >= 0; i--)
	{
		rev+= str[i];
	}
	return rev;
}
int main()
{
	cout<<stringReverse("abc");
}
#include<iostream>
using namespace std;

int multiplication(int n , int time)
{
	if(time == 0)
	{
		return 0;
	}
	int ans  = n;	
	for(int i = 1; i < time; i++)
	{
		ans = ans + n;
	}
	return ans;
}
int main()
{
	int num, time ;
	cout<<" multiply ";
	cin>>num;
	cout<<" with ";
	cin>>time;
	
	cout<<"answer: "<<multiplication(num , time);
}
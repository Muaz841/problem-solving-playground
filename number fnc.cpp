#include<iostream>
using namespace std;
int lessnumber (int array[5],int n,int s,int loc)
{
	for(int i=0; i<5; i++)
	{
		if(array[i]<n)
		{
			s=s+1;
			loc=i+1;
			cout<<"location of the number:"<<loc<<endl;
		}
	}
	cout<<" total numbers less than "<<n<<" is:"<<s<<endl;
	
}
int main()
{
	int array[5],number,sum,location;
	cout<<"enter 5 numbers "<<endl;
	for(int i=0; i<5; i++)
	{
		cin>>array[i];
	}
	cout<<"enter a number:"<<endl;
	cin>>number;
	lessnumber (array,number,sum,location);
	//takes input in an array
	//takes a number
	//and tells the total elements of arrray 
	//that are less than the entered number
	//and also gives their location
}

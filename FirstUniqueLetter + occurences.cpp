#include<iostream>
#include<unordered_map>
using namespace std;


void FirstUniqueLetter(string str)
{
	unordered_map<char, int> data;
	string rev;
	for(char ch : str)
	{
		data[ch]++;	
	}
	
		for(char ch : str)
			{
				if (data[ch] == 1) cout<< ch <<"  unique letter "<<endl;    //unique letter
			}
	
	for(auto i : data)
	    {
	    	cout<<i.first << " " << i.second << endl;     // numer of occurence
		}
	
}
int main()
{
	FirstUniqueLetter("aabbccdxdeeff");
}
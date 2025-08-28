#include<iostream>
#include<unordered_map>
using namespace std;

void repetetion(string str)
{
	
	unordered_map<char, int> map;
	
	for(int i = 0; i <= str.length(); i++)
	{
		int count = 0;
			for(int j = 0; j <= str.length(); j++)
		{
		    if(str[i] == str[j])
		    {
		    	count++;
		    	
			}
				
			}
			
			if(count > 1)
			{
				map[str[i]] = count;
			}			
	}
	for(auto x :map)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
}
int main()
{
	string str = "aabbnhcbddggaadgd";
	repetetion(str);
}
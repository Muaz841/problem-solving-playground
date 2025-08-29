#include<iostream>
#include<string>
using namespace std;

string reverse(string str)
	{
	int length = str.length();
	string rev;
	
	for(int i = length-1; i >= 0; i--)
	{
		rev += str[i]; 
	}
	
	return rev;
	};

	void pand(string str)
		{
			int length = str.length();
			string check = "";		
			
				for(int i  = 0; i < length; i++)
				{
					for(int j = i; j < length; j++)
					{
						check += str[j];
						
						if(check == reverse(check) && check.length() > 2)		
						{
							cout<<check<<endl;
									}
					}
					check = "";
				}	
		}

int main()
{
	string str  = "civicsbmadam" ;
   pand(str);
}
#include<iostream>
#include<unordered_map>
#include <string>

using namespace std;

void  uniqueLetter(string data)
{
	int stringLength = data.length() ;
	
	 unordered_map<char, int> freq;
	 
	  for (char ch : data)
        freq[ch]++;
	 
	 
	for (char ch : data)
    {
        if (freq[ch] == 1)
        {
            cout << "First Unique Letter is: " << ch << endl;
            return;
        }
    }
	
	 cout << "No unique character found!" << endl;
}


int main()
{
    string testStr = "GeeksForGeeks";
    uniqueLetter(testStr); 

    return 0;
}
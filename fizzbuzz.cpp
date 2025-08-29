#include <iostream>
using namespace std;
int main() {

for(int i = 0; i <= 100; i++)
{
	string Out = "";
	
     if(i % 5 == 0  && i % 3 == 0){Out = "fizzbuzz"; }
     else if(i % 3 == 0){Out = "fizz";  }
     else if(i % 5 == 0){Out = "buzz";  }
     
      if(Out != "")
        {
        	cout<<Out<<endl;
		}
		else cout<< i<<endl;
}
}
#include <iostream>
using namespace std;

void numbers(int n)
{
    cout<< n <<endl;
    n = n + 1;
   
    if(n <=100)
    {
        numbers(n);
    }
}

int main() {

  int n = 0;
   numbers(n);
}
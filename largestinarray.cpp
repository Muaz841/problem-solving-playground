// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
   void largestInArray(int array[], int size)
 {
 	int largest = 0;
 	
 	for(int i = 0; i < size; i++)
 	{
 		if(array[i] > largest)
 		{
 			largest = array[i];
		 }
	 }
 	cout<<largest;
 	
 }
int main() {
 
   	int array[5] = {1,98,33,45,0};
 	largestInArray( array, 5);

    return 0;
}
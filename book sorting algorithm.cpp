#include<iostream>
using namespace std;

 
void bookallocation(int array[], int books, int students)
{

 int end = books;
 int start = students - 1;

 int ans = 0;

 while (start < end)
 {
 	int count = 0;
 	
 	for(int i = start; i <= end; i ++)
 	  {
 	  	count += array[i];  	  	
	  }
	  	
	  if(count > ans) ans = count;	  	
	  start += 1;	  
 }
	
	cout<< ans<<endl;
}

int main()
{
	int array[4] = {10,20,30,40};
	int students = 3 , books = 3;
	
    bookallocation(array,books, students);		
}
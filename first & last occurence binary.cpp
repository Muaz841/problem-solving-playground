#include <iostream>
using namespace std;

int lastOccurrence(int s, int array[], int key) {
    int start = 0;
    int end = s - 1;
    int result = -1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (array[mid] == key) {
            result = mid;
            start = mid +1; 
        } else if (key < array[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return result;
}
int firstOccurrence(int s, int array[], int key) {
    int start = 0;
    int end = s - 1;
    int result = -1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (array[mid] == key) {
            result = mid;
            end = mid -1; 
        } else if (key < array[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return result;
}
int main() {
    int array[] = {1, 2, 2, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int key = 2;
   int first =  firstOccurrence(size, array, key);
   int last =  lastOccurrence(size, array, key);
    
    cout<<"first occurence: "<<first<<endl;
    cout<<"last occurence: "<<last<<endl;
	cout<<"total occurence: "<<last - first<<endl;
    return 0;
}

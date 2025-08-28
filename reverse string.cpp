#include <iostream>
using namespace std;

void lastOccurrence(int s, int array[], int key) {
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

    cout << "First occurrence at: " << result << endl;
}
void firstOccurrence(int s, int array[], int key) {
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

    cout << "First occurrence at: " << result << endl;
}
int main() {
    int array[] = {1, 2, 2, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int key = 2;
    firstOccurrence(size, array, key);
    return 0;
}

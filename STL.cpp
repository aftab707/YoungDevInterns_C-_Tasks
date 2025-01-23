#include <iostream>
#include <algorithm> // For std::sort
#include <vector>  //For vector
using namespace std;

template <typename T>
void sortArray(T arr[], int size) {
    sort(arr, arr + size);
}

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[] = {5, 2, 9, 1, 5, 6};
    double doubleArr[] = {3.5, 2.1, 5.7, 1.3};

    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);

    sortArray(intArr, intSize);
    sortArray(doubleArr, doubleSize);

    cout << "Sorted integer array: ";
    printArray(intArr, intSize);

    cout << "Sorted double array: ";
    printArray(doubleArr, doubleSize);


    

    // Using of Vector
    
    vector<int> vec = {5, 2, 9, 1, 5, 6};

    // Sorting the vector
    sort(vec.begin(), vec.end());

    // Displaying the sorted vector
    cout << "Sorted vector: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    

    return 0;
}

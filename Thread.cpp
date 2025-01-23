#include <iostream>
#include <thread>
#include <vector>  
#include <numeric> 
using namespace std;

// Function to compute the sum of a portion of the array
void computeSum(const std::vector<int>& arr, int start, int end, int& result) {
    result = accumulate(arr.begin() + start, arr.begin() + end, 0);
}

int main() {
    // Initialize the array
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Number of threads
    int numThreads = 2;
    int length = arr.size();
    int chunkSize = length / numThreads;

    // Vector to store the results of each thread
    vector<int> results(numThreads);

    // Vector to store the threads
    vector<thread> threads;

    // Create and start threads
    for (int i = 0; i < numThreads; ++i) {
        int start = i * chunkSize;
        int end = (i == numThreads - 1) ? length : start + chunkSize;
        threads.push_back(thread(computeSum, ref(arr), start, end, ref(results[i])));
    }

    // Join threads
    for (auto& th : threads) {
        th.join();
    }

    // Compute the total sum
    int totalSum = accumulate(results.begin(), results.end(), 0);

    // Display the result
    cout << "Total Sum: " << totalSum << endl;

    return 0;
}

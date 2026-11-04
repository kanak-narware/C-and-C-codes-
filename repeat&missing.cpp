#include <iostream>
#include <vector>

using namespace std;

vector<int> findTwoElement(vector<int>& arr) {
    long long n = arr.size();
    
    // Expected Sum and Sum of Squares for numbers 1 to N
    long long expectedSum = (n * (n + 1)) / 2;
    long long expectedSumSq = (n * (n + 1) * (2 * n + 1)) / 6;
    
    long long actualSum = 0;
    long long actualSumSq = 0;
    
    // Calculate actual sum and sum of squares from the array
    for (int num : arr) {
        actualSum += num;
        actualSumSq += (long long)num * num;
    }
    
    // X - Y
    long long diffSum = actualSum - expectedSum; 
    
    // X^2 - Y^2
    long long diffSumSq = actualSumSq - expectedSumSq; 
    
    // X + Y = (X^2 - Y^2) / (X - Y)
    long long sumXY = diffSumSq / diffSum;
    
    // Solving the linear equations
    int repeating = (diffSum + sumXY) / 2;
    int missing = sumXY - repeating;
    
    return {repeating, missing};
}

int main() {
    vector<int> arr = {3, 1, 2, 5, 3}; // Example array
    vector<int> result = findTwoElement(arr);
    
    cout << "Repeating: " << result[0] << ", Missing: " << result[1] << endl;
    return 0;
}

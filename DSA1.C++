#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
#include <algorithm> // For std::sort, std::binary_search

using namespace std;

int main() {
    // ---- 1. Dynamic Array (Vector) ----
    vector<int> nums = {5, 2, 9, 1, 5, 6};
    nums.push_back(8); // Insert at end

    // ---- 2. Sorting & Binary Search ----
    sort(nums.begin(), nums.end()); // O(N log N) time
    bool exists = binary_search(nums.begin(), nums.end(), 5); // O(log N) time

    cout << "Sorted Vector: ";
    for (int x : nums) cout << x << " ";
    cout << "\nIs 5 present? " << (exists ? "Yes" : "No") << "\n\n";

    // ---- 3. Hash Map (Unordered Map) ----
    unordered_map<string, int> ageMap;
    ageMap["Alice"] = 24;
    ageMap["Bob"] = 30;
    cout << "Alice's Age: " << ageMap["Alice"] << "\n\n";

    // ---- 4. Stack (LIFO - Last In First Out) ----
    stack<int> s;
    s.push(10);
    s.push(20);
    cout << "Stack Top: " << s.top() << "\n"; // Outputs 20
    s.pop(); // Removes 20
    cout << "\n";

    // ---- 5. Queue (FIFO - First In First Out) ----
    queue<int> q;
    q.push(100);
    q.push(200);
    cout << "Queue Front: " << q.front() << "\n"; // Outputs 100
    q.pop(); // Removes 100

    return 0;
}

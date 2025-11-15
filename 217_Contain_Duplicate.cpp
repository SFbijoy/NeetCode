// Problem: Check if array contains duplicate elements
// Approach: Use hash set to track seen numbers for O(n) time complexity

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to detect if duplicates exist in the array
    // Time Complexity: O(n) - single pass through array
    // Space Complexity: O(n) - storing elements in unordered_set
    bool hasDuplicate(vector<int> &nums)
    {
        // Create a hash set to store seen numbers
        unordered_set<int> seen;
        
        // Iterate through each number in the array
        for (int num : nums)
        {
            // If number already exists in set, duplicate found
            if (seen.count(num))
            {
                return true; // Return true immediately
            }
            // Add current number to set for future comparisons
            seen.insert(num);
        }
        
        // If loop completes, no duplicates exist
        return false;
    }
};

int main()
{
    // Read the size of array from input
    int n;
    cin >> n;
    
    // Create vector of size n to store array elements
    vector<int> nums(n);
    
    // Read n numbers from input and store in vector
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    
    // Create an instance of Solution class
    Solution sl;
    
    // Call hasDuplicate method and store result
    bool result = sl.hasDuplicate(nums);
    
    // Print result: 1 for true (duplicate exists), 0 for false (no duplicate)
    cout << result << endl;
    
    return 0;
}
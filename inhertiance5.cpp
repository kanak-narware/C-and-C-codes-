#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Ensure nums1 is the smaller array to minimize binary search range
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }
        
        int m = nums1.size();
        int n = nums2.size();
        int low = 0, high = m;
        
        while (low <= high) {
            int i = (low + high) / 2; // Partition index for nums1
            int j = (m + n + 1) / 2 - i; // Partition index for nums2
            
            // Handle edge cases where partition is at the extreme ends
            int nums1LeftMax = (i == 0) ? INT_MIN : nums1[i - 1];
            int nums1RightMin = (i == m) ? INT_MAX : nums1[i];
            
            int nums2LeftMax = (j == 0) ? INT_MIN : nums2[j - 1];
            int nums2RightMin = (j == n) ? INT_MAX : nums2[j];
            
            // Check if partition is correct
            if (nums1LeftMax <= nums2RightMin && nums2LeftMax <= nums1RightMin) {
                // If total length is odd
                if ((m + n) % 2 == 1) {
                    return max(nums1LeftMax, nums2LeftMax);
                }
                // If total length is even
                return (max(nums1LeftMax, nums2LeftMax) + min(nums1RightMin, nums2RightMin)) / 2.0;
            }
            else if (nums1LeftMax > nums2RightMin) {
                // We are too far right in nums1, move left
                high = i - 1;
            } else {
                // We are too far left in nums1, move right
                low = i + 1;
            }
        }
        
        return 0.0;
    }
};
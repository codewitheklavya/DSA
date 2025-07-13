class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;         // last index of nums1
        int j = n - 1;         // last index of nums2
        int k = m + n - 1;     // last index of merged array

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // If any elements left in nums2 
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};

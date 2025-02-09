// insertion sort
class Solution {
    public:
    // Insertion Sort
        vector<int> insertionSort(vector<int>& nums) {
            int n = nums.size();
            // Traverse through the array
            for (int i = 0; i <= n - 1; i++) {
                int j = i;
                // Swap elements till we reach a greater element
                while (j > 0 && nums[j - 1] > nums[j]) {
                    swap(nums[j - 1], nums[j]);
                    j--;
                }
            }
            return nums;
        }
    };
// merge sort
class Solution{
    public:
       
        void merge(vector<int> &arr, int low, int mid, int high) {
            vector<int> temp;
            int left = low;
            int right = mid + 1;
            while (left <= mid && right <= high) {
                if (arr[left] <= arr[right]) {
                    temp.push_back(arr[left]);
    
                    left++;
                }
                else {
                    temp.push_back(arr[right]);
                    
                    right++;
                }
            }
    
            // Adding the remaining elements of left half
            while (left <= mid) {
                temp.push_back(arr[left]);
                left++;
            }
    
            // Adding the remaining elements of right half
            while (right <= high) {
                temp.push_back(arr[right]);
                right++;
            }
    
            // Transferring the sorted elements to arr
            for (int i = low; i <= high; i++) {
                arr[i] = temp[i - low];
            }
        }
        
        // Helper function to perform merge sort from low to high
        void mergeSortHelper(vector<int> &arr, int low, int high){
            // Base case: if the array has only one element
            if (low >= high)
                return;
            
            // Find the middle index
            int mid = (low + high) / 2;
            // Recursively sort the left half
            mergeSortHelper(arr, low, mid);
            // Recursively sort the right half
            mergeSortHelper(arr, mid + 1, high);
            // Merge the sorted halves
            merge(arr, low, mid, high);
        }
        
        // Function to perform merge sort on the given array
        vector<int> mergeSort(vector<int> &nums) {
            int n = nums.size(); // SIze of array
            
            // Perform Merge sort on the whole array
            mergeSortHelper(nums, 0, n-1);
            
            // Return the sorted array
            return nums;
        }
    };
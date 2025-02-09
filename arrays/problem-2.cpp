// Count of odd numbers in array
class Solution {
    public:
        
        // Function to count the odd numbers in an array 
        int countOdd(int arr[], int n) {
            // Set counter to 0
            int count = 0;
            // Iterate through the array
            for (int i = 0; i < n; i++) {
            // check for odd values and increment
                if (arr[i] % 2 != 0) {
                    count++;
                }
            }
            return count;
        }
    };
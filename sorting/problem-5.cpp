// quick sort 
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int partition(vector<int>& arr, int low, int high) {

        int pivot = arr[low];
        int i = low;
        int j = high;

        while (i < j) {
     
            while (arr[i] <= pivot && i <= high - 1) {
                i++;
            }
           
            while (arr[j] > pivot && j >= low + 1) {
                j--;
            }
           
            if (i < j) swap(arr[i], arr[j]);
        }
        
        swap(arr[low], arr[j]);
        return j;
    }

    
    void quickSortHelper(vector<int>& arr, int low, int high) {
        
        if (low < high) {
            int pIndex = partition(arr, low, high);
            quickSortHelper(arr, low, pIndex - 1);
            quickSortHelper(arr, pIndex + 1, high);
        }
    }
    
  vector<int> quickSort(vector<int>& nums) {
        int n = nums.size();
        
        quickSortHelper(nums, 0, n-1);
        
        return nums;
    }
};
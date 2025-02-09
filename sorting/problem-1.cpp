// selection sort
class Solution {
    public:
        vector<int> selectionSort(vector<int>& nums) {
        for( let i=0; i<nums.length - 1;i++){
            let mini = i;
            for( let j = i+1;j<nums.length;j++){
                mini = j;
            }
            //swaping 
            if(mini != j){
                [nums[i],nums[mini]] = [nums[mini],nums[i]]
            }
        }
        return nums;
        }
    };
    
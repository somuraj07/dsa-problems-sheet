//Floor and Ceil in Sorted Array
class Solution {

    private:
      int findfloor(vector<int>& nums,int n ,int x){
        int low=0,high =n-1;
        int ans=-1;
        while(low<=high){
            int mid = (low + high)/2;
            if(nums[mid]<=x){
                ans = nums[mid];
                low = mid +1;
            }else{
                high = mid -1;
            }
        }
        return ans;
      }
      int findciel(vector<int>& nums,int n ,int x){
        int low=0,high =n-1;
        int ans=-1;
        while(low<=high){
            int mid = (low + high)/2;
            if(nums[mid]>=x){
                ans = nums[mid];
                high = mid -1;
            }else{
                low = mid +1;
            }
        }
        return ans;
      }
    public:
        vector<int> getFloorAndCeil(vector<int> nums, int x) {
          int n= nums.size();
          int floor = findfloor(nums,n ,x);
          int ciel = findciel(nums,n,x);
          return {floor ,ciel};
        }
    };
class Solution {
public:
    int reversePairs(vector<int>& nums) {

         int low = 0 ;
        int high = nums.size()-1;
       long long count = 0;

        mergeSort(nums ,low ,high,count);
        return count ;
        
    }
    void mergeSort(vector<int> &nums ,int low , int high , long long&count){

        if(low >= high) return ;
        int mid = low + (high -low)/2 ;
        mergeSort( nums, low ,mid , count);
        mergeSort(nums, mid+1 ,high ,count);
        countpairs(nums, low ,mid , high ,count);
        merge(nums, low ,mid , high ,count);
        return ;

    }

void countpairs(vector<int> &nums, int low, int mid, int high, long long &count) {
    int right = mid + 1;

    for (int left = low; left <= mid; left++) {
        while (right <= high && nums[left] > 2LL * nums[right]) {
            right++;
        }
        count += (right - (mid + 1));
    }
}

    void merge(vector<int> &nums ,int low ,int mid , int high , long long &count){

        int left = low ;
        int right = mid +1 ;
        vector <int>temp ;

        while(left <= mid && right <= high){
            if(nums[left] > nums[right]){
                temp.push_back(nums[right]);

               
                right++ ;
            }
            else{
                temp.push_back(nums[left++]);
            }
        }

        while(left <= mid){
            temp.push_back(nums[left++]);
        }
        while(right <= high){
            temp.push_back(nums[right++]);

        }

        for(int i = low ; i<= high ;i++){
            nums[i] = temp[i-low];
        }
        return ;


        
    }
};
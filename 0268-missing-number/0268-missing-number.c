int missingNumber(int* nums, int numsSize) {
   
     int total = numsSize*(numsSize+1)/2;
            int arr_total=0;
            int miss;
            
    for(int i=0;i< numsSize;i++)
    {
            arr_total += nums[i];
    }
    miss = total - arr_total;

    return miss;
}
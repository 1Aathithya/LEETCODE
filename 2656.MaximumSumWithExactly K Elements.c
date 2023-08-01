int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int maximizeSum(int* nums, int numsSize, int k){
    int sum=0;
    qsort(nums, numsSize, sizeof(int), cmpfunc);
    // for(int i=0;i<k;i++){
    //     sum+=nums[numsSize-1];
    //     nums[numsSize-1]=++nums[numsSize-1];
    //     return sum;
    // }(or)
    int num=nums[numsSize-1];
    return num*k+k*(k-1)/2;
}

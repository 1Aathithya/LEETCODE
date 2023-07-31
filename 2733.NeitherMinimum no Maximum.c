int findNonMinOrMax(int* nums, int numsSize){
if(numsSize==1 || numsSize==2){
    return -1;
}
int min=100,max=0;
for(int i=0;i<numsSize;i++){
    if(nums[i]>max){
        max=nums[i];
    }
    if(nums[i]<min){
        min=nums[i];
    }
}
int value;
for(int i=0;i<numsSize;i++){
    if(nums[i]>min && nums[i]<max){
        value=nums[i];
        break;
    }
}
return value;
}

int sumOfSquares(int* nums, int numsSize){
int squareValue=0;
int n=1;
for(int i=0;i<numsSize;i++){
    if(numsSize%n==0){
        squareValue+=nums[i]*nums[i];
    }
    n++;
}
return squareValue;
}

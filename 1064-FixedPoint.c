int fixedPoint(int* arr, int arrSize){
    int flag=0,value;
    for(int i=0;i<arrSize;i++){
        if(arr[i]==i){
            value=i;
            flag=1;
            break;
        }
    }
    if(flag==0){
        return -1;
    }else{
        return value;
    }
}

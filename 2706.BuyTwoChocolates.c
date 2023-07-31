int buyChoco(int* prices, int pricesSize, int money){
    int value,i,j;
    for(i=0;i<pricesSize;i++){
         for(j=i+1;j<pricesSize;j++){
             if(prices[i]>prices[j]){
                 int temp=prices[i];
                 prices[i]=prices[j];
                 prices[j]=temp;
             }
         }
    }
    value=money-(prices[0]+prices[1]);
    if(value<0){
        return money;
    }
    else{
        return value;
    }
}

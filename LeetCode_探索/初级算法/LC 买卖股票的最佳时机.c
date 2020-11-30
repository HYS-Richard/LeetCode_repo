//#include<stdio.h>
//#include<stdlib.h>

//own part 本地测试答案正确，oj莫名出现错误
int maxProfit(int* prices, int pricesSize){
    if(pricesSize <= 1){
        return 0;
    }
    int profit;
    int min=0,max=0;
    if (prices[0] < prices[1]){
        min = prices[0];
    }
    for(int i=1;i < pricesSize - 1;i++){
        if((prices[i-1]>prices[i])&&(prices[i+1]>prices[i])){
            min = prices[i];
        }
        if((prices[i-1]<prices[i])&&(prices[i+1]<prices[i])&&(min != 0)){
            max = prices[i];
        }
        if((min != 0)&&(max != 0)){
            profit = profit + max - min;
            max = 0;
            min = 0;
        }
    }
        if(min != 0){
            if(max == 0){
                profit = profit + prices[pricesSize-1]-min;
                min = 0;
            }
            else{
                profit = profit + max - min;
                max = 0;
                min = 0;
            }
        }
    return profit;
}*/

//the answer part
/*int maxProfit(int*p,int t){
    int i=1,r=0;
    for(;i^t;++i) r+=p[i-1]<p[i]?p[i]-p[i-1]:0;
    return r;
}*/



/*int main(){
    int pricesSize;
    scanf("%d",&pricesSize);
    getchar();
    int * prices;
    prices = (int *)malloc(pricesSize * sizeof(int));
    for(int i=0;i < pricesSize;i++){
        scanf("%d",&prices[i]);
    //    printf("%d\n",prices[i]);
    }
    int ret;
    ret = maxProfit(prices,pricesSize);
    printf("The return value is %d\n",ret);
    return 0;
}*/
//test part
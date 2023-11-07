#include<bits/stdc++.h>
using namespace std;
int MaxProfit(vector<int> &prices){
    int i=1,min=prices[0],profit=0;
    while(i<prices.size()){
        while (i<prices.size() && prices[i]>prices[i-1])
            i++;

        if(prices[i-1] - min > 0)
            profit += prices[i-1] - min;

        min=prices[i];
        i++;
    }
    return profit;
}
int main(){
    vector<int> arr{5,2,6,1,4,7,3,6};
    cout<<MaxProfit(arr);
    return 0;
}
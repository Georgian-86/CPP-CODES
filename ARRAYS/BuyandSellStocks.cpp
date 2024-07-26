#include <iostream>
using namespace std;

int maxProfit(int *prices, int n){
    int bestbuy[100000];
    bestbuy[0]=INT8_MAX;
    for (int i=1; i<n; i++){
        bestbuy[i] = min(bestbuy[i-1], prices[i-1]);
        cout << bestbuy[i] << ", ";
    }
    cout << endl;
    int maxProfit =0;
    for (int i=0; i<n; i++){
        int currprofit = prices[i]-bestbuy[i];
        maxProfit = max(currprofit, maxProfit);
    }
    cout << maxProfit;

}

int main(){
    int prices[6]={7, 1, 5, 3, 6, 4};
    int n = 6;
    maxProfit(prices, n);
}
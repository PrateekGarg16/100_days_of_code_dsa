/* You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return */

#include <stdio.h>
#define MAX_SIZE 100005

int main() {
    int n;
    scanf("%d", &n);
    
    int prices[MAX_SIZE];
    for(int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }
    
    if(n < 2) {
        printf("0\n");
        return 0;
    }
    
    int min_price = prices[0];
    int max_profit = 0;
    
    for(int i = 1; i < n; i++) {
        min_price = (prices[i] < min_price) ? prices[i] : min_price;
        int profit = prices[i] - min_price;
        max_profit = (profit > max_profit) ? profit : max_profit;
    }
    
    printf("%d\n", max_profit);
    
    return 0;
}

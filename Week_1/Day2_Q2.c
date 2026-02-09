/* You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

Example 2:
Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0. */

#include <stdio.h>
int main(){

    //Array Creation
    int n;
    printf("Enter prices for each day in sequential order: ");
    scanf("%i",&n);
    int arr[n];
    printf("Enter Elements: ");
    for (int i=0; i<n; i++) scanf("%i",&arr[i]);

    //Checking max
    int max=0, buy=0,sell=0, flag=0;
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (arr[j]-arr[i]>max){
                buy=i;
                sell=j;
                max=arr[j]-arr[i];
                flag=1;
            }
        }
    }

    if (flag==1){
        printf("Buy on day %i (Price: %i)\n Sell on day %i (Price: %i)\n Net Profit: %i",buy+1,arr[buy],sell+1,arr[sell], max);
    }
    else printf("Net profit: %i, No good day to buy or sell upcoming.",max);


    
}
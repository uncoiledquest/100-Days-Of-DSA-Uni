/* You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and return the missing element.

Examples:

Input: arr[] = [1, 2, 3, 5]
Output: 4
Explanation: All the numbers from 1 to 5 are present except 4.

Input: arr[] = [8, 2, 4, 5, 3, 7, 1]
Output: 6
Explanation: All the numbers from 1 to 8 are present except 6.

Input: arr[] = [1]
Output: 2
Explanation: Only 1 is present so the missing element is 2. */

#include <stdio.h>
int main(){

    // Array creation and adding sum
    int n,sum=0;
    printf("Enter no of elements: ");
    scanf("%i",&n);
    int arr[n];
    printf("Enter elements (Natural numbers): ");
    for (int i=0; i<n; i++) {
        scanf("%i",&arr[i]);
        sum+=arr[i];
    }

    // Checking the missing number.
    int sum_ofN= (n+1)*(n+2)/2;
    int x= sum_ofN-sum;
    if (n==1) printf("Only 1 is present so the missing element must be 2. Else Question condition Violated.");
    else if (x==0) printf("No element was missing");
    else printf("All Elements 1 to %i are present except %i",n+1,x);
  
}
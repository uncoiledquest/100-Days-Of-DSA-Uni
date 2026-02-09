/* Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

Input:
- First line: integer n (array size)
- Second line: n space-separated integers
- Third line: integer k (key to search)

Output:
- Line 1: "Found at index i" OR "Not Found"
Line 2: "Comparisons = c"

Example:
Input:
5
10 20 30 40 50
30

Output:
Found at index 2
Comparisons = 3

Explanation: Compared with 10, 20, 30 (found at index 2 with 3 comparisons) */

#include <stdio.h>
int main(){

    //Array creation
    int n;
    printf("Enter no of elements: ");
    scanf("%i",&n);
    int arr[n];
    printf("Enter elements: ");
    for (int i=0; i<n; i++) scanf("%i",&arr[i]);

    // Comparison starts

    int comp=0,search,flag=0;
    printf("Enter element to search: ");
    scanf("%i",&search);

    for(int i=0; i<n; i++){
        comp++;
        if (arr[i]==search){
            flag=1;
            search=i;
            break;
        }
    }

    if (flag==1) printf(" Found at Index : %i\n Num of comparisons: %i",search,comp);
    else printf(" Not found \n Num of Comparisons: %i", comp);
    
}
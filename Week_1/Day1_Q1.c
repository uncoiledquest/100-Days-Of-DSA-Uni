/* 
Write a C program to insert an element x at a given 1-based position pos in an array of n integers. 
Shift existing elements to the right to make space.

Example:
Input:
5
1 2 4 5 6
3
3

Output:
1 2 3 4 5 6

*/

#include <stdio.h>

int main(){

    int n,x,pos;
    printf("Enter Length of Array: ");
    scanf("%i",&n);

    int arr[n+1];

    printf("Enter Elements: ");
    for (int i=0; i<n; i++) scanf("%i",&arr[i]);

    printf("Enter element to insert: ");
    scanf("%i",&x);
    printf("Enter Position: ");
    scanf("%i",&pos);

    for (int i=n; i>pos-1; i--) arr[i]=arr[i-1];
    arr[pos-1]=x;

    for (int i=0; i<n+1; i++) printf("%i ",arr[i]);

}
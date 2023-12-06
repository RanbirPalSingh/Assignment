//Write a C program to reverse a given array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the limit of the array:");
    scanf("%d",&n);
    printf("Enter the elements in the array:\n");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a[n];
    for(int j=n-1,k=0;j>=0,k<n;j--,k++){
        a[k]=arr[j];
    }
    printf("The reverse of the array is:\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
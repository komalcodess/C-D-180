#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter all the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter the number as a threshold: ");
    scanf("%d",&x);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)
        count++;
    }
    printf("The number/s greater than %d are %d",x,count);
}
#include<stdio.h>
void main() {
    int arr[100],n,i,f;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the array:\n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("enter the number to be searched: ");
    scanf("%d",&f);
    for(i=0;i<n;i++) {
        if(arr[i]==f) {
            printf("element found at %d is: %d ",i+1,arr[i]);
            break;
        }
        if(i==n-1)
        printf("not found!!!");
    }
}

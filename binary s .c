#include<stdio.h>
int main() {
    int i,arr[100],n,mid,fis,last,f;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("enter the array:");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("enter the number to be searched: ");
    scanf("%d",&f);
    fis=0;
    last=n-1;
    mid=(fis+last)/2;
    while(fis<=last) {
        if(arr[mid]==f) {
            printf("found element at %d and is %d",mid+1,f);
            break;
        }
        else if(arr[mid]<f) {
            fis=mid+1;
        }
        else if(arr[mid>f]) {
            last=mid-1;
        }
        mid=(fis+last)/2;
    }
    if(fis>last) 
    printf("not found!!!");
 return 0;
}

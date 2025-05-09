#include<stdio.h>

int main(){
    int n;
    float neg=0,zero=0,pos=0;
    
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] >=1) pos++;
        else if(arr[i] <=-1) neg++;
        else if(arr[i] ==0) zero++;
    }
    printf("%f\n%f\n%f",pos/n,neg/n,zero/n);
}
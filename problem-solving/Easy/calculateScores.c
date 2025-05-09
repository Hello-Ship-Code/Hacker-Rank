#include <stdio.h>
#define SIZE 3

void calculateScores(int *a,int *b){
    int alice=0,bob=0;
    for(int i=0;i<SIZE;i++) {
        if(a[i]>b[i]){
            alice++;
        } else if(b[i]>a[i]){
            bob++;
            }
    }
    printf("%d %d",alice,bob);
}

int main(){
    int a[SIZE],b[SIZE];
    
    for(int i=0;i<SIZE;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<SIZE;i++)
    {
        scanf("%d",&b[i]);
    }
    calculateScores(a,b);
    return 0;
}
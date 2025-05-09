#include<stdio.h>

int main()
{
    int a[3],b[3],ab=0,bc=0;
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
        if(a[i] > b[i]) ab++;
        else if(a[i] < b[i]) bc++;
    }
    
    printf("%d %d",ab,bc);
    
}
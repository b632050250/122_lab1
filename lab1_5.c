#include<stdio.h>
int main()
{
    int i,j,max,k,l;
    scanf("%d",&k);
    int num[k];
    for(i=0;i<k;i++)
    {
        scanf("%d",&num[i]);
    }
    for(j=0;j<k;j++)
    {
        if(j==0)
        {
            max=num[j];
        }
        else if(max<num[j])
        {
            max=num[j];
        }
    }
    for(i=0;i<k;i++)
    {
        if(max==num[i])
        {
            l=i+1;
            break;
        }
    }
    printf("%d %d",l,max);
    return 0;
}

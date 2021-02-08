#include<stdio.h>
int main()
{
    int a,b,c;
    unsigned int m,n;
    unsigned long int t;
    char f;
    scanf("%u %u %lu",&m,&n,&t);
    fflush(stdin);
    scanf("%c",&f);
    if(n<1000 && m<1000 && n<t && m<t)
    {
        b=t%(n+m);
        if((b-n)>0)
        {
               printf("R");
        }
        else if((b-n)<=0)
        {
               printf("L");
        }
    }
    return 0;
}

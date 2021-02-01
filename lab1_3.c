#include<stdio.h>
int main()
{
    unsigned long long int N;
    scanf("%llu",&N);
    printf("%llu %llu",N%3,N%11);
    return 0;
}

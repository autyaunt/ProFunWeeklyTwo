#include<stdio.h>
void xyz(int x)
{
    if (x>=1)
    {
        printf("*");
        xyz(x-1);
    } 
}
int main()
{
    int x;
    scanf("%d",&x);
    xyz(x);
}
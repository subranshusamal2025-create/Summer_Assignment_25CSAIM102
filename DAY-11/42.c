#include <stdio.h>
int max(int, int); 

int main()
{
    int a,b,Big;
    
    printf("Enter Two Numbers:");
    scanf("%d%d",&a,&b);

    Big = max(a,b);
    
    printf("The Bigger Number is = %d",Big);
    return 0;
}

int max(int x, int y)
{
    if (x > y)
    {
        return (x);
    }
    else
    {
        return (y);
    }
}

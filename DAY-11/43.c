#include <stdio.h>
int Prime(int); 

int main()
{
    int n,result;
    
    printf("Enter a Positive Integer:");
    scanf("%d",&n);
    
    result = Prime(n);
    
    if (result == 1)
    {
        printf("%d is a Prime Number\n", n);
    }
    else
    {
        printf("%d is not a Prime Number\n", n);
    }
        
    return 0;
}

int Prime(int num)
{
    if (num<=1)
    {
        return 0;
    }
        
    for (int i = 2;i<=num/2;i++)
    {
        if (num%i == 0)
        {
            return 0;
        }
    }
    
    return 1;
}
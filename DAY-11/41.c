#include <stdio.h>
int sum(int, int); 

int main() 
{
    int a,b,result;
    
    printf("Enter Two Numbers:");
    scanf("%d%d",&a,&b);
    
    result = sum(a,b); 
    
    printf("The Sum is = %d", result);
    return 0;
}

int sum(int x, int y) 
{
    int z; 
    z = x + y;
    return z;
}
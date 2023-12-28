#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int result;
    printf("Enter the number:");
    scanf("%i",&num);
    printf("print the multiplacation of %i:\n",num);
    for(int i=1;i<=12;i++)
    {
        result=num*i;
        printf("%i*%i=%i\n",num,i,result);
    }
    return 0;
}

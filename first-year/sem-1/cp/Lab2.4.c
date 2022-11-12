#include <stdio.h>

int main()
{
    int a=1,b=2,c=2,k=0;
    if(a==b)
        k++;
    if(b==c)
        k++;
    if(a==c)
        k++;
    switch(k)
    {
        case 0:
            printf("All arguements are distinct.");
            break;
        case 3:
            printf("All arguements are equal.");
            break;
        case 1:
        {
            if(a==b)
                printf("Arguements 1 and 2 are equal.");
            if(b==c) 
                printf("Arguements 2 and 3 are equal.");
            if(a==c) 
                printf("Arguements 1 and 3 are equal.");
        }
    }
}
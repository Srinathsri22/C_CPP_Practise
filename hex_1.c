#include<stdio.h>
int main()
{
    int a[6]= {0,1,2,3,4,5};
    for(int i=0;i<6;i++)
        printf("%d\t",a[i]);

    for(int i=0;i<6;i++)
        {
            if(i%2 == 0)
                a[i] = a[i+1];
        }
    printf("\n");
    for(int i=0;i<6;i++)
        printf("%d\t",a[i]);
    return 0;
}
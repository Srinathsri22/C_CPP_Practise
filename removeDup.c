#include<stdio.h>
#include<string.h>

void removeDupChar(char str[])
{
    for(int i=0;i<strlen(str);i++)
    {
        for(int j=i+1;str[j]!='\0';j++)
        {
            if(str[j] == str[i])
            {
                for(int k=j;str[k]!='\0';k++)
                    str[k] = str[k+1];
            }
        }   
    }
    printf("Strings without duplicates is %s",str);

}

void main()
{
    char str[] = "Apple";
    removeDupChar(str);
}
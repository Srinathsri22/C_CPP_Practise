#include<stdio.h>
#include<string.h>

void removeDuplicate(char str[])
{
    char dup[100];
    int index=0,flag;
    for(int i=0;i<strlen(str);i++)
    {
        flag = 0;
        for(int j=0;j<strlen(dup);j++)
        {
            if(str[i] == dup[j])
                {
                    flag = 1;
                    break;
                }
        }
        if(flag == 0)
            {
                dup[index++] = str[i];
            }
        
    }
    printf("%s\n",dup);
}

int main()
{
    char str[] = "Apple";
    removeDuplicate(str);
    return 0;
}
#include<stdio.h>
#include<string.h>

void main()
{
    char str[] = "apple";
    int n = strlen(str);
    for(int i=0;i<n;i++)
    {
        int count =1;
        if (str[i])
        {
            for(int j=i+1;j<n;j++)
            {
                if (str[i] == str[j])
                {
                    count++;
                    str[j] = '\0';
                }                
            }
            printf("%c = %d\n",str[i],count);
        }
        
        //printf("%c\n",str[i]);
    }
} 
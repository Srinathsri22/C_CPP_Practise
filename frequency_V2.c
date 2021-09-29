#include<stdio.h>
#include<string.h>

void frequencyChar(char s[])
{
    int freq[26] = {0};
    int i =0 ;
    while(s[i] != '\0')
    {
        freq[s[i] - 'a']++;
        i++;
    }
    for(int i=0;i<26;i++)
    {
        if (freq[i]!=0)
        {
            printf("%c = %d\n",i+'a',freq[i]);
        }
        
    }
}

 void main()
{
    char str[] = "banana";
    //int n = strlen(str);
    frequencyChar(str);
}

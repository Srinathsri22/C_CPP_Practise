#include <stdio.h>
#include <string.h>
#include<stdlib.h>

const char *path = "./school/class/student/marks.txt";

char *getnewpath(char *newpath, const char *path, char *name)
{
    
    char *pattern = "student";
    newpath = malloc(256);
    int index = 0, i = 0, found = 0;

    while(i<strlen(path)) {
        int j=0;
        for (;j<strlen(pattern) && !found;j++) {
            if (path[i+j] != pattern[j])
                break;
        }
        
        if (j>=strlen(pattern)) {
            found = 1;
            newpath[index] = '\0';
            strcat(newpath, name);
            index+=strlen(name);
            i+=strlen(pattern);
        } else {
            newpath[index++] = path[i];
            i++;
        }
        newpath[index] = '\0';
    }
    
    return newpath;
    
}
void main()
{
    char *newpath;
    newpath = getnewpath(newpath, path, "john");
    printf("newpath - %s\n", newpath);
    //open the new path
    //expected output "./school/class/john/marks.txt"
    
}

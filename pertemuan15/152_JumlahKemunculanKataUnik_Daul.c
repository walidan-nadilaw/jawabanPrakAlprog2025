#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char* hapusNonAlphanumeric(char* str)
{
    char* res=(char*)(malloc(sizeof(char)));
    int i=0;
    
    while(*str!='\0')
    {
        if (isalpha(*str) || isdigit(*str))
        {
            res[i++]=tolower(*str);
            res=(char*)(realloc(res,(i+1)*sizeof(char)));
        }
        ++str;
    }
    
    res[i]='\0';
    return res;
}

struct word
{
    char word[250];
    int count;
};
typedef struct word WORD;

int main(){
    char line[1000];
    int maxIndex = 0;
    WORD words[500];
    char *delim = "[ \n\t,;-.]";
    while (fgets(line, 500, stdin) != NULL)
    {
        char *token = strtok(line, delim);
        while (token != NULL)
        {
            char *res = hapusNonAlphanumeric(token);
            if (strlen(res) < 3)
            {
                token = strtok(NULL, delim);
                continue;
            }
            int found = 0;
            for (int i = 0; i < maxIndex; i++)
            {
                if (strcmp(words[i].word, res) == 0)
                {
                    words[i].count++;
                    found = 1;
                }
            }
            if (!found)
            {
                strcpy(words[maxIndex].word, res);
                words[maxIndex].count = 1;
                maxIndex++;
            }
            token = strtok(NULL, delim);
        }
    }
    for (int i = 0; i < maxIndex; i++)
    {
        printf("%s %d\n", words[i].word, words[i].count);
    }
    return 0;
}
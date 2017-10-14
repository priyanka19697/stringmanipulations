#include<stdio.h>
#include<string.h>

void main()
{
    char string1[100], string2[100];
    char *tokenArray[10], *tokenArray2[10], *token;

    int i = 0;

    printf("\n enter first string");
    scanf("%s", string1);
    printf("\n enter second string");
    scanf("%s", string2);

    token = strtok(string1," ");

    while(token != NULL)
    {
        tokenArray[i] = token;

        printf("%s\n",token);
        token = strtok(NULL," ");

        i++;

    }

    char *token2;

    int j = 0;

    token2 = strtok(string2," ");

    while(token2 != NULL)
    {
        tokenArray2[j] = token2;

        printf("%s\n",token2);
        token2 = strtok(NULL," ");

        j++;

    }

    int a,b;
    int count = 0;

    for( a = 0; a < j; a++)
    {
        for(b = 0; b < i; b++)
        {
            if(!strcmp(tokenArray2[a], tokenArray[b]))
              count++;
        }
    }

    printf("\n %d \n", count);

}

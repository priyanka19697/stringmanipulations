#include<stdio.h>
#include<string.h>

void main()
  {
    char string[50], search[50];
    int count1 = 0, count2 = 0, i, j, flag, choice;
    char *subs;

    printf("\n enter a string");
    scanf("%s", string);
    printf("\n enter substring to be searched");
    scanf("%s", search);
    count1 = strlen(string);
    count2 = strlen(search);
    printf("\n how to check for substring \n 1.without function \n 2.with function");
    scanf("%d\n",&choice);
    switch(choice)
    {
     case 1:
    for(i = 0; i <= count1 - count2; i++)
      {
        for(j = i; j < i + count2; j++)
          {
            flag = 1;
            if(string[j] != search[j - i])
              {
                flag = 0;
                break;

              }
          }
          if(flag == 1)
          break;
      }
      if(flag == 1)
      {
        printf("\n search succesful\n" );
      }
      else
      printf("\n search unsuccesful\n");
      break;

      /*case 2:
      subs = strstr(string, search);
      if(subs != NULL)
      printf("\n search succesful\n" );
      else
      printf("\n search unsuccesful\n");
      break;
      */

      }
  }

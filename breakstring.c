#include<stdio.h>
#include<string.h>

void main()
{
  char *string = "nothingfffishyisffhappening";

  char *breaker= "fff";

  int i = 0;

  while(*string != NULL)
  {
      while(string = strstr(string,breaker) && string != NULL)
      {
          printf("%c",string);
          string++;
      }

      string = string + strlen(breaker) + 1;
      printf("\n");

  }
}

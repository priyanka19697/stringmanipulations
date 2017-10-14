#include<stdio.h>
#include<string.h>



void main()
{
  char *string = "who cares if aaa one more light goes out aaa in the sky of a million aaa stars,aaa well i do if the star is you";

  char *breaker = "aaa";



while(*string)
{
  while(string != strstr(string, breaker) && *string)
  {
    printf("%c", *string);
    string++;

  }

  string = string + strlen(breaker) + 1;

  printf("\n");
}


}

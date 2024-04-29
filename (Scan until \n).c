#include<stdio.h>
#define MAX 100
int main()
{
  char line[MAX];
  int i=0;

   while((line[i++]=getchar())!='\n')
   {
      
   }
   line[i]='\0';
   printf("%s",line);
}

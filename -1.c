#include <stdio.h>

int main()
{
int i=0;
while(+(+i--)!=0)
i-=i++;
  printf("%d",i);
  
  return 0;
}


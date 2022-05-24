#include <stdio.h>
int main () 

{
char c[1000];
while (c)
{
printf(" Start typing\n");
scanf("%s", c);
      
if (getchar () == 0X0A)
{
puts ("User pressed Enter");
break;
}
}
  
return 0;

}



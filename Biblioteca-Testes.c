#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void xy(int x, int y)
{

 printf("%c[%d;%df", 0x1B, y, x);

}

void cls(void)
{
    system("cls");
}

void ping(void)
{
    system("ping localhost -n 3 >nul");
}

void hacker(void)
{

    system("color 0a");

}

int main()

{
 int i = 0;
 short x = 1;
 short y = 1;
 hacker();
 cls();

a:

 xy(x, y);
 printf("teste");
  x++;
  x++;
  x++;
  x++;
  y++;

goto a;
 
}


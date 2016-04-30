#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
#include<stdio.h>
int main()
{
char s='g',c;
s=(s+16)%26;
if(s<65)
s=s+65;
cout<<s;
getch();
return 0;
}

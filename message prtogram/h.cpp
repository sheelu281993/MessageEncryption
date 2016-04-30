#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<iomanip.h>
int main()
{
char s[50];
int i=0;
char ch;
cout<<"\n    Enter the address no:";
while(ch!=255)
{
ch=getchar();
s[i]=ch;
i++;
}
cout<<"\n";
cout<<s;
getch();
return 0;
}

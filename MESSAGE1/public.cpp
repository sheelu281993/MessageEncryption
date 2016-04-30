
/*
  Name: Shailendra singh sachan(B.TECH IT 4th sem)
  Copyright: 
  Author: 
  Date: 28/03/13 02:23
  Description: generating private key 1
*/
#include<iomanip.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
int main()
{
char pub[25],cp1[25],t=33,arr[5][5],cp[25];//pub is public key
int i,j,c,k,m,n=0,l;
cout<<"Enter the public key:"<<endl;
cin.getline(pub,26);
l=strlen(pub);
for(i=l;i<25;i++)
{
pub[i]='\0';
}
for(i=0;i<25;i++)
{
if(pub[i]==' '||pub[i]=='\0')
{
t=t+1;
pub[i]=t;
if(t==42)
t=33;
cp1[i]=pub[i];
continue;
}                  
c=1;
if(i>=1)
{
for(j=0;j<i;j++)
{
if(pub[i]==pub[j])
{
c=c+1;
}
}
}
cp1[i]=pub[i];
cp1[i]=cp1[i]+c;
}
cout<<endl;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
arr[i][j]=cp1[n];
n++;
}
}  
const int pvt1=31524;//constant key
int r,tem;
k=4;
tem=pvt1;
while(tem>0)
{
r=tem%10;
tem=tem/10;
for(i=5*(r-1),j=0;i<5*r,j<5;i++,j++)
{
cp[i]=arr[j][k];
}
k--;
}
cout<<"*******************************\n";
cout<<"The private key 1 will be:-\n\n";
for(i=0;i<25;i++)
{
cout<<cp[i];
}
cout<<"\n*******************************\n";
cout<<endl;
getch();
return 0;
}

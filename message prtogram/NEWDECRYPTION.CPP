#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
#include<stdio.h>
int main()
{

int r,k,i,j,m=0,x,p,n,y,z,key,key1,key2,k1,k2;
char CIPHERTEXT[25],cipher[5][5],sort[5][5],mat[5][5],arr[25],Msg[25];
cout<<"Enter the cipher text 2:-"<<endl;
cout<<"\n********************************\n";
cin>>CIPHERTEXT;
cout<<"*******************************\n";
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
cipher[i][j]=CIPHERTEXT[m];
m++;
}
}
cout<<"Enter the key 1:";
cin>>key1;
cout<<"Enter the key 2:";
cin>>key2;
cout<<endl;
while(key1>0 && key2>0)
{
k1=key1%10;
k2=key2%10;
key1=key1/10;
key2=key2/10;
for(i=0;i<5;i++)
{
sort[i][k2-1]=cipher[i][k1-1];
}
}
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{cout<<sort[i][j];}
cout<<endl;
}
int tem;
for(i=0;i<5;i++)
{
for(j=i;j<5;j++)
{
tem=sort[i][j];
sort[i][j]=sort[j][i];
sort[j][i]=tem;

}}
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{cout<<sort[i][j];}
cout<<endl;
}
key=45132;
k=4;
while(key>0)
{
r=key%10;
key=key/10;
i=r-1;
for(j=0;j<5;j++)
{
mat[j][k]=sort[j][i];
}
k--;
}
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{

cout<<mat[i][j];

}cout<<endl;}
m=0;
cout<<endl;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
arr[m]=mat[i][j];
cout<<arr[m];
m++;
}
}
cout<<"\nThe Message is as follows:-\n\n";
cout<<"===============================\n";

for(i=0;i<25;i++)
{
p=x=y=z=1;

for(n=2;n<=(i+1)/2;n++)
{
if((i+1)%n==0)
{
p=0;
break;
}
}
if(p==1)
{
Msg[i]=arr[i];
Msg[i]=((Msg[i]-5-97+26)%26)+97;
Msg[i]=((Msg[i]-i-97+26)%26)+97;

if(Msg[i]=='z')
Msg[i]=' ';
}
else
{
if((i+1)%2==0)
{
Msg[i]=arr[i];
Msg[i]=((Msg[i]-4-97+26)%26)+97;
Msg[i]=((Msg[i]-i-97+26)%26)+97;

if(Msg[i]=='x')
{
Msg[i]=' ';
}
}
else
{
Msg[i]=arr[i];
Msg[i]=((Msg[i]-3-97+26)%26)+97;
Msg[i]=((Msg[i]-i-97+26)%26)+97;

if(Msg[i]=='v')
Msg[i]=' ';
}
}
}
cout<<"\n===============================\n";
for(i=0;i<25;i++)
cout<<Msg[i];

getch();
return 0;
}

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
#include<stdio.h>//lszsavxmuwcsowygmsqsakwuw
int main()
{
char Msg[25],arr[25],mat[5][5],cp2[25],sort[5][5],cipher[5][5],CIPHERTEXT[25],c;
int p,k,i,O,E,x,l,m=0,j,key,r,key1,key2,k1,k2;
cout<<"Enter the message:-"<<endl;
cout<<"\n---------------------------------\n";
gets(Msg);
cout<<"---------------------------------\n";
l=strlen(Msg);
cout<<"enter the key 1:";
cin>>key1;
cout<<endl;
cout<<"enter key 2:";
cin>>key2;
cout<<endl;
for(i=l;i<25;i++)
{Msg[i]='\0';}
for(i=0;i<25;i++)
{
O=1,x=1,E=1;
k=1;
//check for prime numbers p variable
//because array subscript from 0index value

//for space and null character

for(p=2;p<=(i+1)/2;p++)
{
if((i+1)%p==0)
{k=0;
break;
}
}
if(k==1)
{
if(Msg[i]==' '||Msg[i]=='\0')
{
Msg[i]='z';
}
if(Msg[i]>=65 && Msg[i]<=90)
{
Msg[i]=Msg[i]+32;
}
Msg[i]=((Msg[i]+5-97)%26)+97;
Msg[i]=((Msg[i]+i-97)%26)+97;
//character is at prime position so replace original character by 5 characters 

arr[i]=Msg[i];
}
else
{
if((i+1)%2==0)
{
if(Msg[i]==' '||Msg[i]==00)
{
Msg[i]='x';
}
if(Msg[i]>=65 && Msg[i]<=90)
{
Msg[i]=Msg[i]+32;
}
Msg[i]=((Msg[i]+4-97)%26)+97;
Msg[i]=((Msg[i]+i-97)%26)+97;

arr[i]=Msg[i];
}
else
{
if(Msg[i]==' '||Msg[i]=='\0')
{
Msg[i]='v';
}
if(Msg[i]>=65 && Msg[i]<=90)
{
Msg[i]=Msg[i]+32;
}
Msg[i]=((Msg[i]+3-97)%26)+97;
Msg[i]=((Msg[i]+i-97)%26)+97;

arr[i]=Msg[i];
}
}
}
for(i=0;i<25;i++)
cout<<arr[i];
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
mat[i][j]=arr[m];
cout<<mat[i][j];
m++;
}
cout<<endl;
}
//sorting of array using a constant key
key=45132;
k=4;
while(key>0)
{
r=key%10;
key=key/10;
i=r-1;
for(j=0;j<5;j++)
{
sort[j][i]=mat[j][k];
}
k--;
}
cout<<endl;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
cout<<sort[i][j];
}
cout<<endl;
}
cout<<endl;
//transpose of the matrix sort[5][5]
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

while(key1>0 && key2>0)
{
k1=key1%10;
k2=key2%10;
key1=key1/10;
key2=key2/10;
for(i=0;i<5;i++)
{
cipher[i][k2-1]=sort[i][k1-1];
}
}m=0;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{cout<<cipher[i][j];}
cout<<endl;
}
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
CIPHERTEXT[m]=cipher[i][j];
m++;
}
}
cout<<endl;
for(i=0;i<25;i++)
cout<<CIPHERTEXT[i];
getch();
return 0;
}

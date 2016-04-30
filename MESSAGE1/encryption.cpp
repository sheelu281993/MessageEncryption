/*
  Name: Shailendra singh sachan(B.TECH IT 4th sem)
  Copyright: 
  Author: 
  Date: 28/03/13 02:23
  Description:encryption of the  message
*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
void publickey()
{char pub[25],cp1[25],t=33,arr[5][5],cp[25];//pub is public key
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

}

int main()
{
publickey();
char Msg[25],arr[25],mat[5][5],cp2[25];
int p,k,i,O,E,x,l,m=0,j,key,r;
cout<<"Enter the message:-"<<endl;
cout<<"\n---------------------------------\n";
cin.getline(Msg,26);
cout<<"---------------------------------\n";
l=strlen(Msg);
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
Msg[i]='j';
arr[i]=Msg[i];
}
else
{
while(x<=10)
{
Msg[i]=Msg[i]+1;
if(Msg[i]==123)
Msg[i]='a';
if(Msg[i]==91)
Msg[i]='A';
x++;}
arr[i]=Msg[i];
}

}
else
{
if((i+1)%2==0)
{
if(Msg[i]==' '||Msg[i]==00)
{
Msg[i]='d';
arr[i]=Msg[i];

}
else
{           
while(E<=4)
{

Msg[i]=Msg[i]+1;
if(Msg[i]==123)
Msg[i]='a';
if(Msg[i]==91)
Msg[i]='A';

E++;}
arr[i]=Msg[i];
}


}
else
{
if(Msg[i]==' '||Msg[i]=='\0')
{
Msg[i]='b';
arr[i]=Msg[i];
}
else
{
while(O<=2)
{

Msg[i]=Msg[i]+1;
if(Msg[i]==123)
Msg[i]='a';
if(Msg[i]==91)
Msg[i]='A';

O++;}
 arr[i]=Msg[i];
}

}
}
}
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
mat[i][j]=arr[m];
;
m++;
}
}

cout<<"\nEnter the private key2:-"<<endl;
cout<<"\n=====\n";
cin>>key;
cout<<"=====\n";
k=4;
while(key>0)
{
r=key%10;
key=key/10;
for(i=5*(r-1),j=0;i<5*r,j<5;i++,j++)
{
cp2[i]=mat[j][k];
}
k--;
}
cout<<"\nthe cipher text 2 is as folows:-\n";
cout<<"\n*********************************\n";
for(i=0;i<25;i++)
{
cout<<cp2[i];
}
cout<<"\n*********************************\n";

getch();
return 0;
}   

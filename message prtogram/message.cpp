#include<iomanip.h>
#include<conio.h>
#include<iostream.h>
int main()
{
char pubkey[25],p[25],t=34,parr[5][5];
int l,i,j,c,s=0,m=5,k=0,tem[5];
cout<<"\nEnter the  public key:";

cin.getline(Msg,26);

l=strlen(Msg);
for(i=l;i<25;i++)
{Msg[i]='\0';}

for(i=0;i<25;i++)
{
if(Msg[i]==' '||Msg[i]=='\0')
{
t=t+1;
Msg[i]=t;
p[i]=Msg[i];
cout<<p[i];
continue;
}                  
c=1;
if(i>=1)
{
for(j=0;j<i;j++)
{
if(Msg[i]==Msg[j])
{
c=c+1;
}
}
}
p[i]=Msg[i];
p[i]=p[i]+c;
cout<<p[i];
}
cout<<endl;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
arr[i][j]=p[k];
k++;
cout<<arr[i][j]; 
}
cout<<endl;
}  
int pkey1,r;
cout<<"enter the private key 1:\n";
cin>>pkey1;

  
getch();
return 0;
}

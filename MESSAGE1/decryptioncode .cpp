/*
  Name: Shailendra singh sachan(B.TECH IT 4th sem)
  Copyright: 
  Author: 
  Date: 28/03/13 02:23
  Description: decryption of the coded form message
*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
int decryption();
int main()
{
char pr1[25];

 char pub[25],cp1[25],t=33,arr[5][5],cp[25],tem[25];
 //pub is public key
 cout<<"ENTYER THE PUBLIC KEY:\n";
 cin.getline(pub,26);
int i,j,c,k,m,n=0,l,R;
l=strlen(pub);
for(i=l;i<25;i++)
{
pub[i]='\0';

}
cout<<"\nEnter private key 1";
cout<<"\n----------------------------------------";
cout<<endl;
for(i=0;i<25;i++)
{
cin>>pr1[i];
}
cout<<"----------------------------------------\n";

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

for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
arr[i][j]=cp1[n];
n++;
}

}  
const int pvt1=31524;
int r,tem;
k=4;
tem=31524;
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


R=1;

cout<<endl;
for(i=0;i<25;i++)
{
if(pr1[i]!=cp[i])
{R=0;
break;}

}
if(R==0)
{
cout<<"......ERROR.....ERROR.....ERROR......\n";
}
else
decryption();
getch();
return 0;
}
 
 
 
 //decryption() function begins from here
//*********************************************************************************************************



int decryption()
{

int r,k,i,j,m,x,p,n,y,z;
char cp2[25],cp1[25],mess[25];
cout<<"Enter the cipher text 2:-"<<endl;
cout<<"\n********************************\n";
cin>>cp2;
cout<<"*******************************\n";
char mat[5][5];
int pvt2;
cout<<"\nEnter the private key2:-"<<endl;
cout<<"\n-----\n";
cin>>pvt2;
cout<<"-----\n";
k=4;
while(pvt2>0)
{
r=pvt2%10;
pvt2=pvt2/10;
for(i=5*(r-1),j=0;i<5*r,j<5;i++,j++)
{
mat[j][k]=cp2[i];
}
k--;
}

m=0;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
cp1[m]=mat[i][j];

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
if(cp1[i]=='j')
{
cp1[i]=255;
cout<<cp1[i];
}
else
{
while(x<=10)
{



cp1[i]=cp1[i]-1;
if(cp1[i]==96)
cp1[i]='z';
x++;
}
cout<<cp1[i];
}}
else
{
if((i+1)%2==0)
{
if(cp1[i]=='d')
{
cp1[i]=' ';
cout<<cp1[i];
}
else
{
while(y<=4)
{
cp1[i]=cp1[i]-1;
if(cp1[i]==96)
cp1[i]='z';
y++;
}
cout<<cp1[i];
}}
else
{
if(cp1[i]=='b')
{
cp1[i]=255;
cout<<cp1[i];
}
else
{
while(z<=2)
{
cp1[i]=cp1[i]-1;
if(cp1[i]==96)
cp1[i]='z';
z++;
}
cout<<cp1[i];
}
}
}
}
cout<<"\n===============================\n";
return 0;
}
//***************************************************************************************************/*
  

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
void encryption()
{
cout<<"success";
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

cout<<"\nEnter the key:-"<<endl;
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



 

}
int main()
{
char pass[10],arr[10]="itggu",i;
int l=strlen(arr);
cout<<"enter the password:";
for(i=0;i<l;i++)
{
cin>>pass[i];
}
for(i=0;i<l;i++)
{
if(pass[i]==arr[i])
{
}
else
{
cout<<"Error..................Error................Error.............Eroor.....................\n";
break;
}
}
if(i==l)
encryption();
getch();
return 0;
}

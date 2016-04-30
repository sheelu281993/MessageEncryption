#include<iostream.h>
#include<conio.h>
int main()
{
int r,k,i,j,m,x,p,n,y,z;
char cp2[25],cp1[25],mess[25];
cout<<"enter the cypher text 2"<<endl;
cin>>cp2;
char mat[5][5];
int key;
cout<<"enter the key"<<endl;
cin>>key;
k=4;
while(key>0)
{
r=key%10;
key=key/10;
for(i=5*(r-1),j=0;i<5*r,j<5;i++,j++)
{
mat[j][k]=cp2[i];
}
k--;
}
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
cout<<mat[i][j];
}
cout<<endl;
}
m=0;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
cp1[m]=mat[i][j];
cout<<cp1[m];
m++;
}

}
cout<<endl;
for(i=0;i<25;i++)
{
p=1;
x=1;
y=1;
z=1;
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
cp1[i]=2556;
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
cp1[i]=' ';
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
cp1[i]=255;
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
}}
}
}

getch();
return 0;
}

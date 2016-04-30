#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int main()
{
char cp2[25],mat[5][5],cp1[25];
int key,r,i,j,k;
cout<<"enter the cypher text"<<endl;
cin.getline(cp2,26);
cout<<"Enter the private key 2"<<endl;
cin>>key;
k=4;
while(key>0)
{
r=key%10;
key=key/10;
for(i=5*(r-1),j=0;i<(5*r),j<5;i++,j++)
{
mat[k][j]=cp2[i];
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


getch();
return 0;
}

if(Msg[i]==' '||Msg[i]=='\0')
{
if((i+1)%2==0)
{
Msg[i]='a'+3;
arr[i]=Msg[i];
}
else
{
Msg[i]='a'+1;
arr[i]=Msg[i];
}
continue;
}

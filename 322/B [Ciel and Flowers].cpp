#include<iostream>
using namespace std; 
int main()
{
int a,b,c;
cin>>a>>b>>c;
int min,total;
min=a;
if(b<min)
{
    min=b; 
}
if(c<min)
{
    min=c;
}
total=min+(a-min)/3 +(b-min)/3 + (c-min)/3;
a=a-min;
b=b-min;
c=c-min;
if(a%3+b%3+c%3>3&&(a+min)!=0&&(b+min)!=0&&(c+min)!=0)
{
    cout<<total+1;
}
else
{
    cout<<total;
}
return 0;
}
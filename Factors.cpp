//
#include<iostream>
using namespace std;
int main()
{
int x,y;
cout<<"enter the number"<<endl;
cin>>y;
cout<<endl<<"the factors are ==>";
for(x=1;x<=y;x++)
{
if(y%x==0)
{cout<<x<<endl;}
}
cout<<endl;
return 0;
}

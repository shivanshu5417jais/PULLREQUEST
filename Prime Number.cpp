#include <iostream>
using namespace std;
int main()
{
int x,y,flag=0;
cout<<"enter the no."<<endl;
cin>>y;
cout<<endl;
for(x=2;x<y;x++)
{
if(y%x==0)
flag=1;
}
if(flag==0)
cout<<"it is prime"<<endl;
else
cout<<"it is not prime"<<endl;
return 0;
}

#include<iostream>
#include<math.h>
using namespace std;
float f(float x)
  {
     return sqrt(1+x*x); 
   }
  int main()
  { float a[20],b[20];
    float ans=0,sum=0;
    float u,l;
    int n;
    float h;
  cout<<"enter the no of strips you want"<<endl;
  cin>>n;
  cout<<"enter the limits upper and lower"<<endl;
  cin>>u>>l;
cout<<"upperlimit="<<u<<"  "<<"lowerlimit="<<l; 

h=(u-l)/n;

cout<<endl<<h<<endl;
for(int i=1;i<n;i++)
{
 a[i]=l+i*h;
  if(i%2==0)
  {
   sum=sum+2*f(a[i]);
  }
  else
  { 
    sum=sum+4*f(a[i]);
  }
} 
  
sum=sum+f(l)+f(u); 

ans=(h/3)*sum;
cout<<endl<<"answer "<<ans<<endl;

return 0;
}

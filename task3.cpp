#include<iostream>
using namespace std;
int main()
{   //task 3;
    float a1,b1,c1,a2,b2,c2,x,y,D,A,B;
    cout<<" a1 = ";
    cin>>a1;
    cout<<" a2 = ";
    cin>>a2;
    cout<<" b1 = ";
    cin>>b1;
    cout<<" b2 = ";
    cin>>b2;
    cout<<" c1 = ";
    cin>>c1;
    cout<<" c2 = ";
    cin>>c2;
    D=a1*b2-a2*b1;
    x=(c1*b2-c2*b1)/D;
    y=(a1*c2-a2*c1)/D;
    cout<<" D = "<<D<<endl;
    cout<<" x = "<<x<<endl;
    cout<<" y = "<<y<<endl;
    cout<<" sistema"<<endl;
    c1=a1*x+b1*y;
    c2=a2*x+b2*y;
    cout<<" javobi sistema c1 = "<<c1<<endl;
    cout<<" javobi sistema c2 = "<<c2<<endl;
}

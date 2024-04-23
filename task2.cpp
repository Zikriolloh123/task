#include<iostream>
using namespace std;
int main()
{   //task 2;
    float a,b,c,x_kg_shokolad,y_kg_irisok,narxi_shokolad,narxi_irisok;
    cout<<" x_kg_shkolad _";
    cin>>x_kg_shokolad;
    cout<<x_kg_shokolad<<" kg shokolad chand rubl meshavad_";
    cin>>narxi_shokolad;
    cout<<" y_kg_irisok  _";
    cin>>y_kg_irisok;
    cout<<y_kg_irisok<<" kg irisok chand rubl meshavad_";
    cin>>narxi_irisok;
    a=narxi_shokolad/x_kg_shokolad;
    b=narxi_irisok/y_kg_irisok;
    c=a-b;
    cout<<" 1 kg shokolad stoit "<<a<<" rubl "<<endl;
    cout<<" 1 kg irisok stoit "<<b<<" rubl "<<endl;
    cout<<" shokolad az irisok "<<c<<" rubl qimat ast."<<endl;

}

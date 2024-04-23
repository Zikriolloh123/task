#include<iostream>
using namespace std;
int main()
{   //task 5;
    int soniyai_avval, daqiqai_avval,soati_avval,soniyai_baadi,daqiqai_baadi,soati_baadi,a,b,c;
    cout<<" soati_avval _";
    cin>>soati_avval;
    cout<<" daqiqai_avval _";
    cin>>daqiqai_avval;
    cout<<" soniyai_avval _";
    cin>>soniyai_avval;
    cout<<" soati_baadi _";
    cin>>soati_baadi;
    cout<<" daqiqai_baadi _";
    cin>>daqiqai_baadi;
    cout<<" soniyai_baadi_";
    cin>>soniyai_baadi;
    cout<<" natija;"<<endl;
    a=(soati_baadi-soati_avval)*60*60;
    b=(daqiqai_baadi-daqiqai_avval)*60;
    c=soniyai_baadi-soniyai_avval;
    cout<<" miqdori soniyaho dar bayni in vaqthoro = "<<a+b+c<<endl;
    main();
}

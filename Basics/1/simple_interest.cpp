#include<iostream>
using namespace std;

int main()
{
    int p, r, t;
    float si;
    cout<<"Enter the principle, rate and time : "<<endl;
    // cin>>p>>r>>t;

    cin>>p;
    cin>>r;
    cin>>t;

    si = p*r*t/100;

    cout<<"SI is : "<<si<<endl;
    return (0);
}
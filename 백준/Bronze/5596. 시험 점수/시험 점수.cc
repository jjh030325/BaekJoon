#include <iostream>
using namespace std;

int main()
{
    int a[4],b[4], aa = 0,bb = 0;
    
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    cin>>b[0]>>b[1]>>b[2]>>b[3];
    
    aa=a[0]+a[1]+a[2]+a[3];
    bb=b[0]+b[1]+b[2]+b[3];
    
    if(aa>bb)
    {
        cout<<aa<<endl;
    }else
    {
        cout<<bb<<endl;
    }
    
    return 0;
}
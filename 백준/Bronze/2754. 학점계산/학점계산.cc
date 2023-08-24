#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cin>>a;
    
    if(a=="A+")
    {
        cout<<"4.3"<<endl;
    }else if(a=="A0")
    {
        cout<<"4.0"<<endl;
    }else if(a=="A-")
    {
        cout<<"3.7"<<endl;
    }else if(a=="B+")
    {
        cout<<"3.3"<<endl;
    }else if(a=="B0")
    {
        cout<<"3.0"<<endl;
    }else if(a=="B-")
    {
        cout<<"2.7"<<endl;
    }else if(a=="C+")
    {
        cout<<"2.3"<<endl;
    }else if(a=="C0")
    {
        cout<<"2.0"<<endl;
    }else if(a=="C-")
    {
        cout<<"1.7"<<endl;
    }else if(a=="D+")
    {
        cout<<"1.3"<<endl;
    }else if(a=="D0")
    {
        cout<<"1.0"<<endl;
    }else if(a=="D-")
    {
        cout<<"0.7"<<endl;
    }else
    {
        cout<<"0.0"<<endl;
    }
    
    return 0;
}

/*
A+: 4.3, A0: 4.0, A-: 3.7
B+: 3.3, B0: 3.0, B-: 2.7
C+: 2.3, C0: 2.0, C-: 1.7
D+: 1.3, D0: 1.0, D-: 0.7
F: 0.0
*/
#include <iostream>
using namespace std;

int main()
{
    int a, dap = 0;
    
    for(int i=0;i<5;i++)
    {
        cin>>a;
        dap+=a*a;
    }
    cout<<dap%10<<endl;
    return 0;
}
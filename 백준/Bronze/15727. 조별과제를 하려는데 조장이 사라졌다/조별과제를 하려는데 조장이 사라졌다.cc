#include <iostream>
using namespace std;

int main()
{
    int n, dap = 0;
    cin>>n;
    if(n%5 != 0)
    {
        dap = n/5;
        dap++;
    }else
    {
        dap = n/5;
    }
    cout<<dap<<endl;
    return 0;
}
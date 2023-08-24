#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    long long int n, m, dap;
    cin>>n>>m;
    dap = n-m;
    dap=abs(dap);
    cout<<dap<<endl;
    return 0;
}
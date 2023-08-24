#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, dap = 0, imsi = 0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
        {
            imsi++;
        }else
        {
            imsi = 0;
        }
        dap+=imsi;
    }
    cout<<dap<<endl;
    return 0;
}
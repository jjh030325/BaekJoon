#include <iostream>
using namespace std;

int main()
{
    int n;
    long long int pac = 1;
    cin>>n;
    if(n==0||n==1)
    {
        cout<<pac<<endl;
        return 0;
    }
    for(int i=2;i<=n;i++)
    {
        pac*=i;
    }
    cout<<pac<<endl;
    return 0;
}
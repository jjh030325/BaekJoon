#include <iostream>
using namespace std;

int main()
{
    int t, n, hap = 0, a;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            hap+=a;
        }
        cout<<hap<<endl;
        hap = 0;
    }
    return 0;
}
/*2
5
1 1 1 1 1
7
1 2 3 4 5 6 7
*/
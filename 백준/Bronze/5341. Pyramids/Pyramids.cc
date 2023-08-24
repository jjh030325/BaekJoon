#include <iostream>
using namespace std;

int main()
{
    int a, b = 0;
    for(;;)
    {
        cin>>a;
        if(a==0)
        {
            return 0;
        }else
        {
            for(int i=1;i<=a;i++)
            {
                b+=i;
            }
        }
        cout<<b<<endl;
        b=0;
    }
    return 0;
}
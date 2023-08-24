#include <iostream>
using namespace std;

int main()
{
    int n, a;
    cin>>n;
    
    if (n == 1010){     //1010
        cout<<20<<endl;
    }
    else if (n % 10 == 0){   //a10
        n /= 100;
        cout<<10 + n<<endl;
    }
    else{
        a = n % 10;
        n /= 10;
        if (n == 10){
            cout<<10 + a<<endl;
        }
        else{
            cout<<n + a<<endl;
        }
    }
    return 0;
}
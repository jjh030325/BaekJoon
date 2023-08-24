#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    
    if(a==60 && b==60 && c==60)
    {
        cout<<"Equilateral"<<endl;
    }else if(a+b+c == 180)
    {
        if(a!=b && b!=c && c!=a)
        {
            cout<<"Scalene"<<endl;
        }else
        {
            cout<<"Isosceles"<<endl;
        }
    }else
    {
        cout<<"Error"<<endl;
    }
    
    return 0;
}

/*
세 각의 크기가 모두 60이면, Equilateral
세 각의 합이 180이고, 두 각이 같은 경우에는 Isosceles
세 각의 합이 180이고, 같은 각이 없는 경우에는 Scalene
세 각의 합이 180이 아닌 경우에는 Error
*/
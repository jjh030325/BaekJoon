#include <iostream>
using namespace std;

int main()
{
    int m, o, t;
    
    cin>>m;
    o = m * 22 / 100;
    t = m / 5 * 22 / 100;
    cout<<m-o<<" "<<m-t<<endl;
    
    return 0;
}
/*
전체 상금의 22%를 제세공과금으로 납부하는 경우
상금의 80%를 필요 경비로 인정받고, 나머지 금액 중 22%만을 제세공과금으로 납부하는 경우
*/
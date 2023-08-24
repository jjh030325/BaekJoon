#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a,b,c,d,e;
    int aa,bb;
    cin>>a>>b>>c;
    cin>>d>>e;
    aa = min(a,b);
    aa = min(aa, c);
    bb = min(d,e);
    cout<<aa+bb-50<<endl;
    return 0;
}
/*
입력은 총 다섯 줄이다. 
첫째 줄에는 상덕버거, 둘째 줄에는 중덕버거, 셋째 줄에는 하덕버거의 가격이 주어진다. 
넷째 줄에는 콜라의 가격, 다섯째 줄에는 사이다의 가격이 주어진다. 모든 가격은 100원 이상, 2000원 이하이다.

출력
첫째 줄에 가장 싼 세트 메뉴의 가격을 출력한다.
*/
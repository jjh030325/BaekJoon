#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a.length()>=6 && a.length()<=9)
        {
            cout<<"yes"<<endl;
        }else
        {
            cout<<"no"<<endl;
        }
    }
}
/*
비밀번호는 6자리 이상 9자리 이하여야 한다.
예를 들어, 123124는 올바른 비밀번호이고, 1202727161은 잘못된 비밀번호이다. 문자열이 주어졌을 때 현관문 비밀번호로 사용할 수 있는지 판단하자.

입력
첫째 줄에 문자열의 총개수 
$N$이 주어진다.

둘째 줄부터 
$N$개의 줄에 걸쳐 숫자, 영어 대소문자로만 구성된 문자열이 주어진다.

출력
줄마다 사용할 수 있는 비밀번호면 yes, 그렇지 않으면 no를 출력한다.

문자열의 길이는 1자리 이상 20자리 이하이다.
*/
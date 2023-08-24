//첫 줄에 출발역과 종착역을 제외한 정거장의 수 N(1 ≤ N ≤ 100,000)과 
//출발역에서 탑승하는 사람의 수 K(1 ≤ K ≤ 10,000)가 주어진다. 
//둘째 줄부터 N개의 줄에 걸쳐 각 줄마다 i번째 정거장에서 탑승하는 인원 A와
//하차하는 인원 B가 주어진다. (0 ≤ A, B ≤ 10,000)
#include <iostream>
using namespace std;

int main()
{
    int n, k, a, b;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
    }
    printf("비와이\n");
    return 0;
}
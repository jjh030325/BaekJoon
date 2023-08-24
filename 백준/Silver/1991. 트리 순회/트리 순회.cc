#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <map>
#include <tuple>
using namespace std;

int n;
char a, b, c;
map<char, pair<char, char>> tree;

void potential(char node) {             //전위
	cout << node; 
	if (tree[node].first != '.') {
		potential(tree[node].first);
	}
	if (tree[node].second != '.') {
		potential(tree[node].second);
	}
}
void median(char node) {                //중위
	if (tree[node].first != '.') {
		median(tree[node].first);
	}
	cout << node;
	if (tree[node].second != '.') {
		median(tree[node].second);
	}
}
void postfix(char node) {              //후위
	if (tree[node].first != '.') {
		postfix(tree[node].first);
	}
	if (tree[node].second != '.') {
		postfix(tree[node].second);
	}
	cout << node;
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b >> c;
		tree[a] = make_pair(b, c);
	}

	potential('A');
	cout << endl;
	median('A');
	cout << endl;
	postfix('A');
	cout << endl;

	return 0;
}

/*
첫째 줄에는 이진 트리의 노드의 개수 N(1 ≤ N ≤ 26)이 주어진다. 
둘째 줄부터 N개의 줄에 걸쳐 각 노드와 그의 왼쪽 자식 노드, 오른쪽 자식 노드가 주어진다. 
노드의 이름은 A부터 차례대로 알파벳 대문자로 매겨지며, 항상 A가 루트 노드가 된다. 
자식 노드가 없는 경우에는 .으로 표현한다.

출력
첫째 줄에 전위 순회, 둘째 줄에 중위 순회, 셋째 줄에 후위 순회한 결과를 출력한다. 각 줄에 N개의 알파벳을 공백 없이 출력하면 된다.
*/
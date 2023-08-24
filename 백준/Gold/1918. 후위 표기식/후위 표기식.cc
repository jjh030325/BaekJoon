#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int prec(char op)
{
	switch (op) {
	case '(': case ')': return 0;
	case '+': case '-': return 1;
	case '*': case '/': return 2;
	}
	return -1;
}

int main()
{
	char input[101];
	int i = 0;
	char ch, top_op;
	cin >> input;
	int len = strlen(input);
	stack<char> s;
	char* postfix;
	int j = 0;
	postfix = (char *)malloc(sizeof(char) * (len * 3));  // 문자열 길이 넉넉한 크기로 동적 할당

	for (i = 0; i < len; i++) {
		ch = input[i];
		switch (ch) {
		case '+':
		case '-':
		case '*':
		case '/': // 연산자
			// 스택에 있는 연산자의 우선순위
			while ((!s.empty()) && (prec(ch) <= prec(s.top()))) {
				postfix[j] = s.top();
				s.pop();
				j++;
			}
			s.push(ch);
			break;
		case '(': // 왼쪽 괄호
			s.push(ch);
			break;
		case ')': // 오른쪽 괄호
			top_op = s.top();
			s.pop();
			// 왼쪽 괄호를 만날 때까지 출력
			while (top_op != '(') {
				postfix[j] = top_op;
				j++;
				top_op = s.top();
				s.pop();
			}
			break;
		default: // 피연산자
			if (input[i + 1] != '+' && input[i + 1] != '-' && input[i + 1] != '*' && input[i + 1] != '/' && input[i + 1] != '(' && input[i + 1] != ')' && input[i + 1] != '\0')
			{
				postfix[j] = ch;
				j++;
			}
			else
			{
				postfix[j] = ch;
				j++;
			}

			break;
		}
	}
	while (!s.empty()) { // 스택에 저장된 연산자들 출력
		postfix[j] = s.top();
		s.pop();
		j++;
	}
	postfix[j] = '\0';  // 문자열의 끝을 나타내는 null 문자 추가

	cout << postfix << endl;

	return 0;
}
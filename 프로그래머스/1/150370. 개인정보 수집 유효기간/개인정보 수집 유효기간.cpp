#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int total_day(string date)
{
	int y = stoi(date.substr(0, 4));
	int m = stoi(date.substr(5, 2));
	int d = stoi(date.substr(8, 2));

	return (y * 12 * 28) + (m * 28) + d;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
	vector<int> answer;

	unordered_map<string, int> map;

	// 약관 종류 별 수집 기간 저장
	for (int i = 0; i < terms.size(); i++)
	{
		string term = terms[i].substr(0, 1);
		map[term] = stoi(terms[i].substr(2));
	}

	int now = total_day(today);

	// 기간 초과여부 체크
	for (int i = 0; i < privacies.size(); i++)
	{
		int day = total_day(privacies[i].substr(0, 10));
		day += map[privacies[i].substr(11)] * 28;
		if (now >= day)
		{
			answer.push_back(i + 1);
		}
	}

	return answer;
}
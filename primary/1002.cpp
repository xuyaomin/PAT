#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

static const string shuzipinyin[] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };

inline void number_to_digits(short n, vector<short> &v)
{
	while (n != 0)
	{
		v.push_back(n % 10);
		n /= 10;
	}
	reverse(v.begin(), v.end());
}

int main()
{
	string n;
	cin >> n;
	short ret = 0;
	for (char c : n)
	{
		ret += atoi(&c);
	}

	vector<short> v;
	number_to_digits(ret, v);

	for (size_t i = 0; i < v.size(); i++)
	{
		if (i == v.size() - 1) cout << shuzipinyin[v.at(i)];
		else cout << shuzipinyin[v.at(i)] << " ";
	}

	return 0;
}
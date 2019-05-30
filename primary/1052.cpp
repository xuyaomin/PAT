#include <cstdio>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

const char SEPARATOR_LEFT = '[';
const char SEPARATOR_RIGHT = ']';

void inputFormat(istream &istrm, vector<char> &vc)
{
	string line;
	getline(istrm, line);
	string::size_type begin = 0, end = 0;
	while (begin != string::npos)
	{
		begin = line.find(SEPARATOR_LEFT, begin);
		end = line.find(SEPARATOR_RIGHT, begin);
		vc.push_back(*line.substr(begin + 1, end - begin - 1).c_str());
		begin = end + 1;
	}
}

int main()
{
	vector<char> shou;
	inputFormat(cin, shou);
	vector<char> yan;
	inputFormat(cin, yan);
	vector<char> kou;
	inputFormat(cin, kou);

	int n = 0;
	scanf("%d\n", &n);
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	while (n-- > 0)
	{
		scanf("%d %d %d %d %d\n", &a, &b, &c, &d, &e);
		if (a > shou.size() || e > shou.size())
		{
			printf("Are you kidding me? @\\/@");
			continue;
		}
		if (b > yan.size() || b > yan.size())
		{
			printf("Are you kidding me? @\\/@");
			continue;
		}
		if (c > kou.size())
		{
			printf("Are you kidding me? @\\/@");
			continue;
		}
		printf("%d%d%d%d%d\n", shou.at(a), yan.at(b), kou.at(c), yan.at(d), shou.at(e));
	}

	// 瞥见你的目光里还有一些挂恋，我大概知道这是你拒绝他的原因，我还以为你是傻傻的，会吃了亏
	// 也想过要当救世主去保护你，然而这个念头在我心消散了，怎么能坏了朋友的事呢，假如你真的答应了
	// 我想，彼时彼刻你也一定是幸福的，那么是我多虑了！
	// 然而结果却是我意想不到的，你逃避了，我便没有什么顾虑了。

	return 0;
}
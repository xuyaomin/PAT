#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <limits>
#include <algorithm>

using namespace std;

struct Student
{
	char name[10] = "";
	char sno[10] = "";
	unsigned short grade = 0;
};

int main()
{
	int n = 0;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	vector<Student> vec;

	for (int i = 0; i < n; i++)
	{
		string line;
		Student stu;
		getline(cin, line);
		istringstream iss(line);
		iss >> stu.name >> stu.sno >> stu.grade;
		vec.push_back(stu);
	}

	sort(vec.begin(), vec.end(), [&](Student lhs, Student rhs) { return lhs.grade < rhs.grade; });

	cout << vec.back().name << " " << vec.back().sno << endl;
	cout << vec.front().name << " " << vec.front().sno << endl;

	return 0;
}
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Student
{
	char name[11] = "";
	char sno[11] = "";
	unsigned short grade = 0;
};

int main()
{
	int n = 0;
	cin >> n;

	vector<Student> vec;

	for (int i = 0; i < n; i++)
	{
		Student stu;
		cin >> stu.name >> stu.sno >> stu.grade;
		vec.push_back(stu);
	}

	sort(vec.begin(), vec.end(), [](Student &lhs, Student &rhs) { return lhs.grade < rhs.grade; });

	cout << vec.back().name << " " << vec.back().sno << endl;
	cout << vec.front().name << " " << vec.front().sno << endl;

	return 0;
}
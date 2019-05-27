#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student
{

	Student(string &s, int i)
	{
		rank = stos.substr(0, 1);
		areaNo = s.substr(1, 4);
		date = s.substr(4, 10);
		stuNo = s.substr(10, 13);
		grade = i;
	}
	string pat()
	{
		return rank + areaNo + date + stuNo;
	}
	char rank;					// 级别 			T，A，B
	unsigned short areaNo;					// 考场编号		101-999
	unsigned short date;					// 考试日期		190527
	unsigned short stuNo;					// 考生编号		000-999
	unsigned short grade = 0;		// 成绩			0-100
};

int main()
{

	int n = 0;						// 考生人数
	int m = 0;						// 统计人数
	cin >> n >> m;

	vector<Student> v;

	for (int i = 0; i < n; ++i)
	{
		string pat;
		unsigned short grade = 0;
		cin >> pat >> grade; 
		Student s(pat, grade);
		v.push_back(s);
	}


	return 0;
}
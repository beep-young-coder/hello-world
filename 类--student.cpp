#include<bits/stdc++.h>
using namespace std;

class Student
{   
  private:
	string name;
	int age;
	double score;
	
	public:
		Student(string n,int a,double s)
		:name{n},age{a},score{s} {};
		
		void print()
		{
			cout << "姓名：" << name <<endl;
			cout << "年龄：" << age << endl;
			cout << "分数：" << score << endl; 
		}
		
		bool ispass()
		{
			return score >= 60;
		}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	Student s1("小苏",18,85.5);
	Student s2("小李",19,50);
	
	s1.print();
	cout << "是否及格:" << (s1.ispass()?"是":"否") << endl;
	s2.print();
	cout << "是否及格:" << (s2.ispass()?"是":"否") << endl;
	return 0; 
}

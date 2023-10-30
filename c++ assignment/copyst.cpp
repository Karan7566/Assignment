#include<iostream>
using namespace std;
class student{
	int roll_no;
	string name;
	public:
		student(intt roll,string n)
		{
			roll_no=roll;
			name=n;
			
		}
		student (student &t)
		{
			roll_no=t.roll_no;
			name=t.name;
			
		}
		void display()
		{
			cout<<roll_no<<""<<name;
			
		}
};
int main()
{
	student s1(11,"xyz");
	s1.display();
	student s2(s1);
	s2.display();
	return 0; 
}

#include<iostream>
using namespace std;
class person{
	protected:
		string name;
		int age;
		public:
			void_input_person_info()
			{
				cout<<"enter name:";
				cin>>name;
				cout<<"enter age:";
				cin>>age;
				
			}
		void display_person_info()
		{
			cout<<"person information:";
			cout<<"name:"<<name<<endl;
			cout<<"age:"<<age<<endl;
		}
};
class student:public person{
	private:
		string student_id;
		public:
			void input_student_info()
			{
				cout<<"enter student id";
				cin>>student_id;
			}
			void display_student_info()
		{
			cout<<"student id:"<<student_id<<endl;
		}
};

int main()
{
	student s;
	cout<<"enter student information:\n";
	s.input_student_info();
	cout<<"displaying student information:\n";
	s.display_student_info();
	return 0;
}

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
class employee:public person{
	protected:
		int employee_id;
		public:
			void input_employee_info()
			{
				cout<<"enter employee id:";
				cin>>employee_id;
			}
			void display_employee_info()
			{
				cout<<"employee_id:"<<employee_id<<endl;
			}
};
class manager:public employee{
		private:
		string department;
		public:
			void input_manager_info()
			{
				cout<<"enter department:";
				cin>>department;
			}
			void display_manager_info()
			{
				cout<<"department:"<<department<<endl;
			}
};
int main()
{
	manager m;
	cout<<"enter manger detail:"<<endl;
	m.input_manager_info();
	cout<<"display manger information:"<<endl;
	m.display_manager_info();
	return 0;
	
}

#include<iostream>
using namespace std;
class employee{
	protected:
		string name;
		double salary;
		public:
		employee(string n,double s)
		{
			name=n;
			salary=s;
			}	
			void display_employee()
			{
				cout<<"employee name:"<<name<<endl;
				cout<<"employee salary:"<<salary<<endl;
			}
};
class developer:public employee{
	private:
		string programming_language;
		public:
		developer(string n,double s,string lang):employee(n,s)
	{
		programming_language=lang;
		}
		void display_developer()
		{
			cout<<"programming language:"<<programming_language<<endl;
		}
};
class designer:public employee{
		private:
		string design_tool;
		public:
		designer(string n,double s,string tool):employee(n,s)
		{
		design_tool=tool;
		}
		void display_designer()
		{
			cout<<"design_tool:"<<design_tool<<endl;
		}
};
int main()
{
	developer dev("mariam",75000,"C++");
	cout<<"developer information:"<<endl;
	dev.display_developer();
	cout<<"\n";
	designer des("sakeena",65000,"photoshop");
	cout<<"designer information:"<<endl;
	des.display_designer();
	return 0;
	}

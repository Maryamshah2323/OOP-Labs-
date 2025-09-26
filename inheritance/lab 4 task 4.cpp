#include<iostream>
using namespace std;
class printer{
	public:
		void print_document()
		{
			cout<<"printing the document:"<<endl;
		}
};
class scanner{
	public:
		void scan_document()
		{
			cout<<"scan the document:"<<endl;
		}
};
class photocopier:public printer, public scanner{
	public:
		void photocopy()
		{
			cout<<"starting photocopying process:"<<endl;
			//call boths function
			scan_document();
			print_document();
			cout<<"photocopy completed:"<<endl;
		}
};
int main()
{
	photocopier pc;
	cout<<"using photocopier:"<<endl;
	pc.print_document();
	pc.scan_document();
	pc.photocopy();
	return 0;
}

#include "student_base_inherit.cpp"
using namespace std;
class test:private student{
	int sub1,sub2;
	public:
		void readdata();
		void putdata();
};
void test::readdata()
{
	getdata();
	cout<<"Enter the marks of subjetc 1 :";
	cin>>sub1;
	cout<<"Enter the marks of subjetc 2 :";
	cin>>sub2;
}
void test::putdata()
{
	display();
	
	cout<<"marks of subjetc 1 :"<<sub1<<endl;
	cout<<" marks of subjetc 2 :"<<sub2<<endl;
}


using namespace std;
#include<iostream>
class student{
	int roll_no;
	char name[25];
	public:
		void getdata()
		{
			cout<<"Enter the Roll_no of the student : ";
			cin>>roll_no;
			cout<<"Enter the Name of the student : ";
			cin>>name;
		}
		void display()
		{
			cout<<" Roll_no of the student : "<<roll_no<<endl;
			cout<<"Name of the student : "<<name<<endl;
		}
};


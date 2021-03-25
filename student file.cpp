#include<iostream>
#include<conio.h>
using namespace std;
#include<fstream>
struct student
{
	int rno,marks;
	char name[30];
};
int main()
{
	ofstream ofs("a.txt",ios_base::app);
	student s;
	cout<<"enter roll no"<<endl;
	cin>>s.rno;
	cout<<"enter marks"<<endl;
	cin>>s.marks;
	cout<<"enter name"<<endl;
	cin>>s.name;
	ofs<<s.rno<<endl;
	ofs<<s.marks<<endl;
	ofs<<s.name<<endl;
	ofs.close();
	getch();
	return 0;
}

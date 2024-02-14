#include<iostream>
using namespace std;
class Student{
	
	private :
		string name;
		int rollnumber;
		
	public:	
		 setData()
		{
			cout << "Enter the your name : ";
			cin >> name;
			cout << "Enter the your roll number : ";
			cin >>rollnumber;
			
		}
		
		getData()
		{
			
			
			cout << "your name is a : "<<this ->name<<endl;
			cout << "your roll number is a : "<<this ->rollnumber<<endl;
			
		}
	
	
};
int main()
{
	
	Student s[3];
	int i;
	
	for(i=0;i<3;i++)
	{
		
		s[i].setData();
		s[i].getData();
	
		
	}
		
	return 0;
}

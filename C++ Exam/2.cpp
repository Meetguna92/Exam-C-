#include<iostream>
using namespace std;
class Car{
	
	private :
		string model;
		int year,speed;
		
	public :
		 setData()
		{
			cout << "Enter the your car model number  : ";
			cin >> model;
			cout << "Enter the your car year : ";
			cin >>year;
			cout << "Enter the your car speed : ";
			cin >>speed;
			
		}
		
		getData()
		{
			
			
			cout << "your Car Model is a : "<<this ->model<<endl;
			cout << "your Car Year is a  : "<<this ->year<<endl;
			cout << "your Car speed is a  : "<<this ->speed<<endl;
			
			
		}
	
	
};
int main()
{
	
	Car c;
		
		c.setData();
		c.getData();
	
	return 0;
}

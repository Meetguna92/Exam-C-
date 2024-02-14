#include<iostream>
using namespace std;
class Device{
	
	public :
		string brand,powercon;
	
		
};
class Leptop : public Device{
	
		public :
		
			setting()
			{
				cout<< "Enter the Brand of the laptop :  ";
				cin >>brand;
				cout << "Enter the power Consumption in a laptop :  ";
				cin >>powercon;
				
			}
			
			getting()
			{
				cout << "your laptop brand is a"<<brand<<endl;
				cout << "your laptop power Consumption is a"<<powercon<<endl;
				
			}
	
};
class Smartphone :public Device{
	
	public :
		
			setting()
			{
				cout<< "Enter the Brand of the Smartphone :  ";
				cin >>brand;
				cout << "Enter the power Consumption in a Smartphone :  ";
				cin >>powercon;
				
			}
			
			getting()
			{
				cout << "your Smartphone brand is a"<<brand<<endl;
				cout << "your Smartphone power Consumption is a"<<powercon<<endl;
				
			}
	
};
int main()
{
	
	Leptop l;
	Smartphone s;
	
		l.setting();
		s.setting();
		l.getting();
		s.getting();
	
	return 0;
}

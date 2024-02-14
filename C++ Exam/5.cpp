#include<iostream>
using namespace std;
class Animal{
	
	public:
		
	     virtual makesound()
	     {
	     	
	     	
	     	cout << "Animal"<<endl;
		 }
	
		
};

class Lion :public Animal{
	
	public :
		Lion()
		{
			
			
			cout << "this is Lion"<<endl;
			
		}
		
	
};
class Fish:public Animal{
	
	public :
		
		public :
			Fish()
			{
			
				cout << "this is Fish"<<endl;
				
			}
	
};

int main()
{
	
	Lion l;
	Fish f;
	
	
	return 0;
}

#include<iostream>
using namespace std;
class Mathoperation{
	
	public:
		int a,b;
		
		
		Mathoperation(int c,int d)
		{
			try{
				
				if( c<=0 || d<=0 )
				{
					
					throw c || d;
				}
				
				cout << "your division of this value : "<<c/d;
				
				
			}catch(...)
			{
				
				cout << "Error.. you Can not division by a O and negative...";
			}
		
		}
	
		
};

int main()
{
	Mathoperation m(56,-6);
	
	
	
	return 0;
}

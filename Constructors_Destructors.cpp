//Constructors - to intialize an object
//Destructors - to delete an object
#include<iostream>
using namespace std;

class Rectangle{
	public:
		int l;
		int b;
		Rectangle(){ //default constructor - no args
			l=0;
			b=0;
			cout<<"Default constructor call "<<endl;
		}
		Rectangle(int x,int y){ //parameterized constructor - passing args
			l = x;
			b = y;
			cout<<"parameterized constructor call "<<endl;
		}
		Rectangle(Rectangle& r){ //Copy constructor - intialize an obj by another existing object
			l=r.l;
			b=r.b;
			cout<<"Copy constructor call "<<endl;
		}
		
		//Destructors
		~Rectangle(){ //Default Destructor call
			cout<<"Destructor is called"<<endl;
		}	
};
int main(){
	Rectangle r1; 
	cout<<r1.l<<" "<<r1.b<<endl;
	
	Rectangle r2(3,4);
	cout<<r2.l<<" "<<r2.b<<endl;
	
	Rectangle r3 = r2;
	cout<<r3.l<<" "<<r3.b<<endl;
	
	Rectangle* r4 = new Rectangle(); // pointer variable
	cout<<r4->l<<" "<<r4->b<<endl;
	delete r4; //destructor call for pointer that deletes the memeory that pointed by the pointer
	/*here if we place this pointer function for r1 then it gets constructed first then deleted.
	and then the remaining costructor calls takes place and at the end the complete destructor 
	through the ~Rectangle() happens */
return 0;
}

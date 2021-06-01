#include<iostream>
using namespace std;
class ww1{
	public:
		void india(){
			cout<<"is a big country"<<endl;
		}
		
};

class ww2{
	public:
		void india(){
			cout<<"it has an estimate of 1.3 billion people"<<endl;
		}
};

class world:public ww1, public ww2{
	public:
		void india(){
				ww2::india();
		}
};
int main()
{
	ww1 aot;
	aot.india();
	ww2 hit;
	hit.india();
	world demi;
	demi.india();
	return 0;
}


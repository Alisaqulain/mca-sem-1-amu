//weak 4 2nd program
#include<iostream>
using namespace std;
int main(){
	int a ,b;
	cout<<"enter two number :";
	cin>>a>>b;

   cout << "Adding " << a << " and " << b << std::endl;

    while (b != 0) {
        int carry = a & b; 
        a = a ^ b;         
        b = carry << 1;    
    }

    cout << "Sum: " << a <<endl;

	return 0;
}

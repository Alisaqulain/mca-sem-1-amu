//week5 problem 1
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter array size"<<endl;
	cin>>n;
	int ar[n];
	cout <<"enter "<<n<<" elements="<<endl;
	for (int i=0;i<n;i++){
	cin>>ar[i];
	}
	cout<<"Array elements are:"<<endl;
		for (int i=0;i<n;i++){
	cout<<ar[i]<<"\t";
	}
}

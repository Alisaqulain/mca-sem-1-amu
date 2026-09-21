//week5 problem 2
#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"enter array size"<<endl;
	cin>>n;
	int ar[n];
	cout <<"enter "<<n<<" elements="<<endl;
	for (int i=0;i<n;i++){
	cin>>ar[i];
	}

		for (int i=0;i<n;i++){
		sum=sum+ar[i];
	}
	cout<<"Sum="<<sum;
	}

//wap to reverse a number
#include<iostream>
using namespace std;
int main() {
	int n,m,sum;
	cout << "Enter a number :" << endl;
	cin >> n;
	while(n != 0) {
		m=n%10;
		n=n/10;
		sum=sum*10 + m;
	}
	cout << "sum =" << sum;
	
}


//wap to check whether a number is prime or not
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter a number:" ;
	cin >> n;
	

		for(int a = 2 ; a <= n/2 ; a++) {
			if(n % a == 0) {
				cout << n  << " is not a prime number." << endl;
			return 0;
	    	}
    	}

				cout << n  << " is a prime number." << endl
	}
		
	

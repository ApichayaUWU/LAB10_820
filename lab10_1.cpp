#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double l,r,p;
	cout << "Enter initial loan: ";
	cin >> l;
	cout << "Enter interest rate per year (%): ";
	cin >> r;
	cout << "Enter amount you can pay per year: ";
	cin >> p; 
	int y = 1; //ปีที่
    double prevB = l , intr = r/100*l ; 
	double t; 
	double pay = p;
	double newB;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//for(nbalance ; nbalance == 0 ; nbalance =  )
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	while(newB!=0)
	{
	//if (l == 0 ) break;
	 cout << fixed << setprecision(2); 
	 cout << setw(13) << left << y; 
	 cout << setw(13) << left << prevB ;
	 intr = r/100*prevB;
	 cout << setw(13) << left << intr ;
	 t = prevB + intr;
	 cout << setw(13) << left << t;
	 if(t <= pay) 
	 {
		pay = t;
		cout << setw(13) << left << pay;
		newB = 0;
		cout << setw(13) << left << newB;
	 }else
	 {
	 cout << setw(13) << left << pay;
	 newB = prevB+intr-pay;
	 cout << setw(13) << left << newB;
	 }

	 cout << "\n";	
	 ++y;
	 prevB = newB;
	 
	 //if (newB <=0) break;
	}
	return 0;
}

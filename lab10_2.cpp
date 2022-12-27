#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int n, int m)
{
	int i = 0 , j = 0;
	if (m<= 0 or n<=0)
	{
		cout << "Invalid input";
	}
	else
	{
		
		while (i < n)
		{
			while(j < m)
			{
				cout << 'O';
				j++;
			}
			cout << "\n";
			j = 0;
			i++;
		}
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}

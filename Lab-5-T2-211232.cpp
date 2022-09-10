#include <iostream>

using namespace std;

//program that takes the power of a number using for loop.

int main() 
{
	int num,power,result=1; //declaration of number and variables
	cout<<"\n\n\t\tCALCULATOR FOR CALCULATING POWER OF ANY NUMBER\n\n";  //title of the program
	cout<<"****************************************************************";
	cout<<"\n\n\t\tEnter the number: "; cin>>num; //input integer from user
	cout<<"\n\t\tEnter the power of the number: "; cin>>power; //input power from user
	cout<<endl<<endl;
	cout<<"****************************************************************";
	for (int i=1; i<=power; i++) //using of "for loop"
	result=result*num; 
	cout<<"\n\n\t\t\tAnswer = "<<num<<" ^ "<<power<<" = "<<result;
	
	
	
	return 0;
}

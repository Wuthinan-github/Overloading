#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void DisplayMenu();
float Area(const float Radius);
float Area(const float Lenght,const float Widht);
float Area(double Base , double High);
int main()
{
	char Choice;
	bool Flag = true;
	do {
		DisplayMenu();
		cin>>Choice;
		if (Choice == '1'){
			float Radius;
			cout<<"\nEter radius : ";
			cin>> Radius;
			cout<<"Area of Circle = "<< fixed;
			cout<<setprecision(2)<<Area(Radius)<<endl;
		}
		else if (Choice == '2'){
			float Lenght,Widht;
			cout<<"Enter length and widht :";
			cin>>Lenght>>Widht;
			cout<<"Area of Rectangle = "<<fixed;
			cout <<setprecision(2)<<Area(Lenght,Widht);
			cout << endl;
		}
		else if (Choice == '3'){
			double Base,High;
			cout<<"Enter base and high : ";
			cin >> Base >> High;
			cout <<"Area of Triangle = "<<fixed;
			cout << setprecision(2)<<Area(Base,High);
			cout<<endl;
		}
		else if (Choice == '4') Flag = false;
		else {
			cout <<"\nYou choose out of range is ";
			cout <<"not process.\n";
		}
	} while (Flag);
	cout << "\n...Exit Program...\n";
	return 0;
}
float Area(const float Radius)
{
	return(3.14159F * Radius * Radius);
}
float Area(const float Length,const float Widht)
{
	return(Length * Widht);
}
float Area(double Base,double High)
{
	return (1/2 * (Base * High));
}
void DisplayMenu()
{
	cout << endl;
	cout << "Program Calculate Area " << endl;
	cout << " 1. Circle." << endl;
	cout << " 2. Rectangle" << endl;
	cout << " 3. Triangle" << endl;
	cout << " 4. Exit" << endl;
}
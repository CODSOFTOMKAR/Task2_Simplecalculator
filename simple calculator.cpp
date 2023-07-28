//Task 2
//simple calculator
#include<iostream>
using namespace std;
int main()
{
		double num1,num2;
		char c;
		
		cout<<"\t*SIMPLE CALCULATOR*\n";
		cout<<"Enter first number:";
		cin>>num1;
		cout<<"Enter second number:";
		cin>>num2;
	
		cout<<"Enter operator(+ ,-, * ,/):";
		cin>>c;
			switch(c)
			{
				case '+':
					cout<<num1<<c<<num2<<"="<<num1+num2;
					break;
					
				case '-':
					cout<<num1<<c<<num2<<"="<<num1-num2;
					break;
					
				case '*':
					cout<<num1<<c<<num2<<"="<<num1*num2;
					break;
					
				case '/':
					if(num2 ==0)
					{
						cout<<"Divide by 0 not possible";
					}
					else
					{
						cout<<num1<<c<<num2<<"="<<num1/num2;
				
					}
					break;
			}
			
		}
		

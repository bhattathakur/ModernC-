/*Greatest common divisor
 *Write a program that, given two positive integers, will calculate and print the greatest divisor of the two
 */
#include <iostream>
using namespace std;

int main ()
{
  cout<<"This program prints the greatest commond divisor of two user input numbers"<<endl;
  cout<<"--------------------------------------------------------------------------"<<endl;

  cout<<"Enter two numbers to calculate greatest common divisor\t"<<endl;
  int num1,num2;
  cin>>num1>>num2;

  int smallest;
  int biggest;
  if(num2<num1){smallest=num2;biggest=num1;}
  else {smallest=num1;biggest=num2;}
  cout<<"smallest of two\t"<<smallest<<endl;
  cout<<"largest of two\t"<<biggest<<endl;
  double HCF=0;
  //double dividend,divisor;
   int dividend=biggest;int divisor=smallest;

 while(true){
   int remainder=(dividend % divisor);
   if(remainder==0){ HCF=divisor;break;}
   else{ 
    divisor=remainder;dividend=smallest; }
 }
 cout<<"HCF of "<<num1<<" & "<<num2<<" = "<<HCF<<endl;


  return 0;
}

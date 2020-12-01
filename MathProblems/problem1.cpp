/*
 * 1. Sum of naturals divisible by 3 and 5
 * Write a program that calculates and prints the sum of all the natural numbers divisible by either 3 or 5, upto a given limit entered by the user.
 *
 */

#include <iostream>
using namespace std;

int main()
{
  cout<<"This program finds the sum of naturals divisible by 3 and 5"<<endl;
  cout<<"--------------------------------------------------------------"<<endl;
  int limit;

  cout<<"Enter the maximum limit of the number:\t";
  cin>>limit;

  //calulation
  double sum=0.;

  for (int i=0;i<limit;i++)
  {
    if(i%3==0 || i%5==0){
      cout<<"checking\t"<<i<<endl;
      sum+=i;
    }

  }

  cout<<"Total sum\t"<<sum<<endl;

  cout<<"test"<<endl;



  return 0;
}

/*
 * 3. Least common multiple
 * Write a program that will, given two or more positive
 * intergers, calculate and print the least common 
 *multiple of them all
 */

#include <iostream>
using namespace std;

int main()
{
  cout<<"This program gives for LCM for two or more positive intergers"<<endl;
  cout<<"-------------------------------------------------------------"<<endl;

  cout<<"How many numbers?: ";
  int num,num1;cin>>num;
  int inputarray [num];

  //fill the array with user input
  cout<<"Enter "<<num<<" positive intergers\n";
  for (int i=0;i<num;i++){cin>>num1;inputarray[i]=num1;}

  //print the array with user input
  cout<<"You entered\t";
  for (int i=0;i<num;i++){cout<<inputarray[i]<<'\t';}

  //check the maximum number in the array
  int max=0;
  for (int i=0;i<num;i++) if(inputarray[i]>max)max=inputarray[i];
  cout<<"max in array\t"<<max<<endl;

  //set maximum values as the initial LCM
  int LCM=max;
  while(true){
    bool isLCM=true;
    for(int i=0;i<num;i++) if(LCM%inputarray[i]!=0){isLCM=false;break;}
    if(isLCM){cout<<"LCM:\t"<<LCM<<endl;break;}
    LCM++;
  }
  return 0;
}


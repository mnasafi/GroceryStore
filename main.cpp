// Author: Mustafa Nasafi

#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;


  do
  {

    cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";
    cout<<"\n (A)dd an item";
    cout<<"\n (Q)uit";
    cout<<"\nYour choice (A/Q): ";
    cin>>input;

    if(input =='a' || input =='A')
    {
     
     // output to ask name of the item to be added to the list
      cout<<"What is the item?"<<endl;

    // add new item to the list
    // cin>> how I append new item to list[]?

    }

  }while( input !='q' && input !='Q'); // q or Q terminates the loop
 

  return 0;
}

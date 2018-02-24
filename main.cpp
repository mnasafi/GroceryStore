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




            // increment numItems after appending new item

        } // end if

        else if(numItems < 5) // check if grocery list[] full
        {
            // increment numItems after appending new item to list
            numItems++;                            

        } // end else if

        else if( !(numItems > 5) )
        {

        }

        else
        {
            cout<<"You'll need a bigger list!"<<endl;

        }
       
    // end do
    }while( ( input !='q' && input !='Q') && numItems < 5); // q or Q terminates the loop and if numItems > 5


    return 0;
}

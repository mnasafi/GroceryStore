// Author: Mustafa Nasafi

#include<iostream>
#include<string>
using namespace std;

int main()
{
    const int LIST_SIZE = 5;
    
    string list[ LIST_SIZE ]; //array of 5 strings
    int numItems = 0;
    char input;
    string inputString;


    do
    {

        cout<<"\n==GROCERY LIST MANAGER==";
        cout<<"\nEnter your choice: ";
        cout<<"\n (A)dd an item";
        cout<<"\n (Q)uit";
        cout<<"\nYour choice (A/Q): ";
        cin>>input;

        
              
        
        if( input =='a' || input =='A') 
        {

            if ( numItems < 5 )
            {

              cout << "Whats is the item?" << endl;
              
              // add new item to the list[]
              cin >> inputString;
              list[numItems] = inputString;

              numItems++;  

            } //end if

            else 
            {
               cout << "You'll need a bigger list!" << endl;
    
            } //end else


        } //end if


       
    // end do
    }while ( input !='q' && input !='Q'); // q or Q terminates the loop 

    
    cout << "==ITEMS TO BUY==" << endl;

    // for loop to output the grocery list
    for( int index = 0; index < LIST_SIZE; index++)
    {
        cout << index + 1 << " " << list[index] << endl;
       
    }


    return 0;

} // end prog

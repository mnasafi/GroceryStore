// Author: Mustafa Nasafi
// Dynamic Grocery List

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    
    char inputChar;
    string inputString;

    int numItems;
    
    vector <string> items;
    // items.push_back(int value);
    // items.pop_back();

    do
    {

        cout<<"\n==GROCERY LIST MANAGER==";
        cout<<"\nEnter your choice: ";
        cout<<"\n (A)dd an item";
        cout<<"\n (Q)uit";
        cout<<"\nYour choice (A/Q): ";
        cin >> inputChar;


        if( inputChar =='a' || inputChar =='A') 
        {
            
          // prompt user for the item
          cout << "What is the item?" << endl;

          // add new input to item vector
          cin >> inputString;
          items.push_back( inputString );

        } //end if

    // end do
    }while ( inputChar !='q' && inputChar !='Q'); // q or Q terminates the loop 

    // outputs stored grocery list
    cout << "==ITEMS TO BUY==" << endl;

    // for loop to output the grocery list
    for( int index = 0; index < items.size(); index++)
    {
        cout << index + 1 << " " << items[index] << endl;
       
    }


    return 0;

} // end prog

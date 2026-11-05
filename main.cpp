#include <iostream>
using namespace std;

int main(){
  
    // Self documenting variables for us:

    int num_of_riders_in_one_session = 0;
    double money_made_in_day = 0;
    int fare_evaders = 0;
    
    // These varibles are subject to change based on price changes and may be updated while keeping the function working

    double discounted_fare = 1.45;
    double full_fare = 2.90;
    
    
    // Prompt to find the number to use to run the calcultaions for profit

    cout << "How many people came into Fulton Street station today?" << endl;
   
    cin >> num_of_riders_in_one_session;
    
    // For loop use to find out the ammount of money made factoring for fare evaders, discounted fares and full price fares

    for (int i = 1; i <= num_of_riders_in_one_session; i++){
    
    // % 3 will account for the fare evaders

        if (i % 3 == 0){
        money_made_in_day += fare_evaders;
    }
    // % 5 will account for the people with discounted fare rates

    else if (i % 5 == 0) {
        money_made_in_day += discounted_fare;
    }

    // Else statement covers for the full fare riders

    else {
       money_made_in_day += full_fare;
    }
   }

   // This is Where the final value will be displayed after running the calculation
    
   cout << money_made_in_day << endl;

}

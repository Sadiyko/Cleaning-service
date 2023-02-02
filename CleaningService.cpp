#include <iostream>

using namespace std;

int main() {

    cout << "Hello, Welcome to Sadiya's cleaning service!" << endl;

    int small_rooms{ 0 };
    cout << "\nHow many small rooms would you like to clean?:";
    cin >> small_rooms;


    int large_rooms{ 0 };
    cout << "How many large rooms would you like to clean?:";
    cin >> large_rooms;


    const double price_per_small_room(25);
    const double price_per_large_room(35);
    const double sales_tax(0.06);
    const int estimate_expiry(30);//days



    cout << "\nEstimate for carpet cleaning service:" << endl;
    cout << "\nNumber of small rooms:" << small_rooms << endl;
    cout << "Number of large rooms:" << large_rooms << endl;


    cout << "\nPrice per small room:$" << price_per_small_room << endl;
    cout << "Price per large room:$" << price_per_large_room << endl;

    cout << "\nCost:$"
        << (price_per_small_room * small_rooms) + (price_per_large_room * large_rooms)
        << endl;
    cout << "Tax:$"
        << ((price_per_small_room * small_rooms) + (price_per_large_room * large_rooms)) * sales_tax
        << endl;

    cout << "=====================================================" << endl;
    cout << "Total estimate: $"
        << ((price_per_small_room * small_rooms) + (price_per_large_room * large_rooms))
        + (((price_per_small_room * small_rooms) + (price_per_large_room * large_rooms)) * sales_tax)
        << endl;
    cout << "This estimate valid for " << estimate_expiry << " days" << endl;

    cout << endl;
    return 0;
}
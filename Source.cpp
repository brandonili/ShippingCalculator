
// This program is a shipping calculator, you have to enter what you are shipping
// is it is fragile or not, what is the cost of the item and where are you shipping it to. 

#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
#include<fstream>
using namespace std;


int main() {

    //Declaring variables
    string ItemName;
    string ItemType, ShippingDestination;
    double OrderTotal, OverallTotal = 0, ShippingCharge{};
    cout << ".................................................................." << endl;
    cout << "\tITCS 2530 - Programming Assignment for week #3" << endl;
    cout << ".................................................................." << endl;

    // asking user to input the item, if it is fragile or not, quantity, and destination. 
    cout << "\nPlease enter the item name (no spaces):...........:";
    cin >> ItemName;
    cout << "Is the item fragile ? (y=yes/n=no)...................:";
    cin >> ItemType;

    // when user enters a upper or lower case y ans ame for n the progeam will still run
    if (ItemType.compare("y") == 0 || ItemType.compare("Y") == 0 || ItemType.compare("n") == 0 || ItemType.compare("y") == 0)
    {
        cout << "Please enter your order total................:";
        cin >> OrderTotal;
        cout << "Please enter destination .(usa/can/aus/eur)................:";
        cin >> ShippingDestination;


        // if user enter yes for fragile
        if (ItemType.compare("y") == 0 || ItemType.compare("Y") == 0)
        {
            OverallTotal += 2;
            if (OrderTotal <= 50)
            {

                // if item cost is less then $50 there is a shipping fee
                if (ShippingDestination.compare("usa") == 0)
                {
                    ShippingCharge = 6.00;
                }
                else if (ShippingDestination.compare("can") == 0)
                {
                    ShippingCharge = 8.00;
                }
                else if (ShippingDestination.compare("aus") == 0)
                {
                    ShippingCharge = 10.00;
                }
                else if (ShippingDestination.compare("eur") == 0)
                {
                    ShippingCharge = 15.00;
                }

            }

            // if item cost is less then $100 there is a shipping fee
            else if (OrderTotal >= 50.01 && OrderTotal <= 100)
            {
                if (ShippingDestination.compare("usa") == 0)
                {
                    ShippingCharge = 9.00;
                }
                else if (ShippingDestination.compare("can") == 0)
                {
                    ShippingCharge = 12.00;
                }
                else if (ShippingDestination.compare("aus") == 0)
                {
                    ShippingCharge = 14.00;
                }
                else if (ShippingDestination.compare("eur") == 0)
                {
                    ShippingCharge = 16.00;

                }
            }
                // if item cost is less then $150 there is a shipping fee
                else if (OrderTotal >= 100.01 && OrderTotal <= 150)
                {
                    if (ShippingDestination.compare("usa") == 0)
                    {
                        ShippingCharge = 12.00;
                    }
                    else if (ShippingDestination.compare("can") == 0)
                    {
                        ShippingCharge = 15.00;
                    }
                    else if (ShippingDestination.compare("aus") == 0)
                    {
                        ShippingCharge = 17.00;
                    }
                    else if (ShippingDestination.compare("eur") == 0)
                    {
                        ShippingCharge = 20.00;

                    }
                }

                    // if item cost is greater then $150 there is no shipping fee
                else if (OrderTotal >= 150)
                {
                    if (ShippingDestination.compare("usa") == 0)
                    {
                        ShippingCharge = 0;
                    }

                    else if (ShippingDestination.compare("can") == 0)
                    {
                        ShippingCharge = 0;
                    }
                    else if (ShippingDestination.compare("aus") == 0)
                    {
                        ShippingCharge = 0;
                    }
                    else if (ShippingDestination.compare("eur") == 0)
                    {
                        ShippingCharge = 0;

                    }
                }


                        // Overall to ShippingCharge and OrdderTotal 
                        OverallTotal += (ShippingCharge + OrderTotal);
                        string name = "";
                        for (int i = 0;i < ItemName.length();i++)
                        {
                            // capitalize the Item name
                            name += toupper(ItemName.at(i));
                        }

                        // Print Item, shippingcost, Destination, and totalshipping cost
                        cout << "\nYour Item is ......................" << name << endl;
                        cout << "Your shipping cost is ...............$" << ShippingCharge << endl;
                        cout << "You are shipping to .................." << ShippingDestination << endl;
                        cout << "Your total shipping costs are..............$" << OverallTotal << endl;
                        cout << "\n.....................................Thank You!" << endl;
                    }
                }
                else
                {


                    cout << "Invalid entry, exiting" << endl;
                }


                system("pause");



                return 0;
            }
            
        
    

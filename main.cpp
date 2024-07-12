#include <iostream>
using namespace std;

int main() {
    int result;
    float balance = 100.00;
    int option;
    string shortcode;
    cout<<"Enter  your shortcode:\n";
    cin>>shortcode;
    if(shortcode =="*170#") {
        cout<<"1.Transfer Money\n2.MomoPay & Pay Bill\n3.Airtime & Bundles\n4.Allow Cashout\n5.Financial Services\n6.My Wallet\n";
        cout<<"Select your option:\n";
        cin>>option;
        if( option ==1){
            int option1;
            cout<<"1.Momo User\n2.Non Momo User\n3.Send with Care\n4.favorite\n5.Financial Services\n6.My Wallet\n";
            cout<<"Select your option:\n";
            cin>>option1;
            if(option1==1) {
                int number1;
                int number2;
                cout<<"Enter mobile number:\n";
                cin>>number1;
                cout<<"Confirm number:\n";
                cin>>number2;
                if(number1==number2) {
                    cout<<"Enter Amount:\n";
                    float amount;
                    cin>>amount;
                    cout<<"Enter reference:\n";
                    string ref;
                    cin>>ref;
                    int pin =6269;
                    cout<<"Transfer $" << amount << " to "  <<  number1 << "?\n";
                    cout<<"Enter your pin:";
                    cin>>pin;
                    if(pin==6269) {
                        int confirm;
                        cout<<"Complete transaction?\n 1.Yes 2.No";
                        cin>>confirm;
                        if(confirm == 1) {
                            balance = balance - amount;
                            cout<<"Transaction successful.\nYour new balance is: $" <<balance<<endl;

                        }
                        else {
                            cout<<"Transaction terminated!\n Try Again.";
                        }

                    }
                    else {
                        cout<<"Incorrect pin, Try again\n";
                    }


                }else {
                    cout<<"Numbers do not match, Try again.\n";
                }


            }


        }//to be continued.
        else if(option== 2) {
            cout<<"Welccome to MomoPay and Pay Bill\n1.MomoPay\n2.Pay Bill\n3.GhQR\n4.Fuels\n5.Ghana.GOV\n5.Back";
            int option21;
            cout<<"Enter Merchant ID/Payment reference:";
            cin>>option21;

           //code for Airtime & Bundles option.
        }else if(option ==3) {
            int option31;
            cout<<"Airtime & Bundles\n1. Airtime\n2.Internet Bundles\n3.Fixed Broadband\n4.Schedule Airtime\n5.Just4U\n0.Back\n";
            cout<<"Select your option:";
            cin>>option31;
            if(option31==1) {
                int option311;
                cout<<"Airtime\n1.Self\n2.Others\n3.Welcome Pack\n4.Other Networks\n0.Back\n";
                cout<<"Select your option:";


            }

        }




        else {
            cout<<"Incorrect shortcode!";
        }
        return 0;
    }
}


















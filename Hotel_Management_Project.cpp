

#include <iostream>
using namespace std;

int main()
{

    int quant;
    int choice;


    int Qrooms = 0, Qpasta = 0, Qshake = 0, Qchicken = 0, Qnoodles = 0, Qburger = 0;

    int Srooms = 0, Spasta = 0, Sshake = 0, Schicken = 0, Snoodles = 0, Sburger = 0;

    int total_rooms = 0, total_pasta = 0, total_shake = 0, total_chicken = 0, total_noodles = 0, total_burger = 0;

    cout << "\n\t Quantity of item we have";
    cout << "\n Roooms Available:";
    cin >> Qrooms;
    cout << "\n Quantity of Pasta:";
    cin >> Qpasta;
    cout << "\n Quantity of Shake:";
    cin >> Qshake;
    cout << "\n Quantity of Chicken:";
    cin >> Qchicken;
    cout << "\n Quantity of Noodles:";
    cin >> Qnoodles;
    cout << "\n Quantity of Burgers:";
    cin >> Qburger;
    m:
    cout << "\n\t\t\t Please Slect from menue Option";
    cout << "\n\n1) Rooms";
    cout << "\n2)Pasta";
    cout << "\n3)Shake";
    cout << "\n4)Chicken";
    cout << "\n5) noodles";
    cout << "\n6)burger";
    cout << "\n7) Information egarding sales and Collection";
    cout << "\n8) Exist";


    cout << "\n\n Please Enter Your choice";
    cin >> choice;


    switch (choice)
    {
    case 1:
        cout << "\n\n Enter the numbers of rooms you want:";
        cin >> quant;


        if (Qrooms - Srooms >= quant)
        {
            Srooms = Srooms + quant;
            total_rooms = total_rooms+quant*1200;
            cout << "\n\n\t\t" << quant << " room/rooms have been alloted to you";


        }

        else 
        
            cout << "\n\tonly" << Qrooms - Srooms << " Rooms Remained in Hotel";
            break;
        
        
            

    case 2:
        cout << "\n\n Enter the Pasta Quantity:";
        cin >> quant;
        if (Qpasta - Spasta >= quant)
        {
            Spasta = Spasta + quant;
            total_pasta = total_pasta + quant * 500;
            cout << "\n\n\t\t" << quant << " pasta is order";


        }

        else
        
            cout << "\n\tonly" << Qpasta - Spasta << " pasta Remained in Hotel";
            break;
    case 3:
        cout << "\n\n Enter the Quantity of shake:";
        cin >> quant;
        if (Qshake - Sshake >= quant)
        {
            Sshake = Sshake + quant;
            total_shake = total_shake + quant * 12000;
            cout << "\n\n\t\t" << quant << " shake is order";


        }

        else
        
            cout << "\n\tonly" << Qshake - Sshake << " shake Remained in Hotel";
            break;

    case 4:
        cout << "\n\n Enter the Quantity of Chicken:";
        cin >> quant;
        if (Qchicken - Schicken >= quant)
        {
            Schicken = Schicken + quant;
            total_chicken = total_chicken + quant* 12000;
            cout << "\n\n\t\t" << quant << " chicken is order";
        }

        else
        
            cout << "\n\tonly" << Qrooms - Srooms << " Cchicken Remained in Hotel";
            break;

    case 5:
        cout << "\n\n Enter the Quantity of Burgers:";
        cin >> quant;
        if (Qburger - Sburger >= quant)
        {
            Sburger = Sburger + quant;
            total_burger = total_burger + quant * 120;
            cout << "\n\n\t\t" << quant << " burger is ordered:";


        }

        else
        
            cout << "\n\tonly" << Qburger - Sburger << " burger Remained in Hotel";
            break;


    case 6:
        cout << "\n\n Enter the numbers of rooms you want:";
        cin >> quant;
        if (Qnoodles - Snoodles >= quant)
        {
            Snoodles = Snoodles + quant;
            total_noodles = total_noodles + quant * 1000;
            cout << "\n\n\t\t" << quant << " noodles is orders";


        }

        else
        
            cout << "\n\tonly" << Qnoodles - Snoodles << " nooodles";
            break;

    case 7:
        cout << "\n\t\t Details of Sales and Collection";
        cout << "\n\n Numbers of rooms we had" << Qrooms;
        cout << "\n\n Numbers of rooms we gave for rent" << Srooms;
        cout << "\n\n Numbers of Remaining rooms " << Qrooms - Srooms;
        cout << "\n\n Total rooms colllection for a day:" << total_rooms;


        cout << "\n\n Numbers of pasta we had" << Qpasta;
        cout << "\n\n Numbers of pasta we had sold: " << Spasta;
        cout << "\n\n Numbers of Remaining pasta " << Qpasta - Spasta;
        cout << "\n\n Total pasta colllection for a day:" << total_pasta;

        cout << "\n\n Numbers of Noodles we had" << Qnoodles;
        cout << "\n\n Numbers of Noodles we had sold: " << Snoodles;
        cout << "\n\n Numbers of Remaining p=Nooodle " << Qnoodles - Snoodles;
        cout << "\n\n Total Nooodle colllection for a day:" << total_noodles;

        cout << "\n\n Numbers of shake we had" << Qshake;
        cout << "\n\n Numbers of shake we had sold: " << Sshake;
        cout << "\n\n Numbers of Remaining shake " << Qshake - Sshake;
        cout << "\n\n Total shake colllection for a day:" << total_shake;

        cout << "\n\n Numbers of burger we had" << Qburger;
        cout << "\n\n Numbers of burger we had sold: " << Sburger;
        cout << "\n\n Numbers of Remaining burger " << Qburger - Sburger;
        cout << "\n\n Total burger colllection for a day:" << total_burger;

        cout << "\n\n Numbers of chicken we had" << Qchicken;
        cout << "\n\n Numbers of chicken we had sold: " << Schicken;
        cout << "\n\n Numbers of Remaining chicken " << Qpasta - Schicken;
        cout << "\n\n Total chicken colllection for a day:" << total_chicken;

    case 8:
        exit(0);
    default:
        cout << "\n Please slesect the number mentioned above:";
        }
        goto m;
}
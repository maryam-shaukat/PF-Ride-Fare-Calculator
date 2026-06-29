#include<iostream>
using namespace std;

string PickupName(int pickup)
{
    switch(pickup)
    {
        case 1: return "Bahria Town Ph 1";
        case 2: return "Bahria Town Ph 2";
        case 3: return "Bahria Town Ph 3";
        case 4: return "Bahria Town Ph 4";
        case 5: return "Bahria Town Ph 5";
        default: return "Invalid";
    }
}

string DestinationName(int destination)
{
    switch(destination)
    {
        case 1: return "Faizabad";
        case 2: return "PWD";
        case 3: return "Kacheri";
        case 4: return "DHA Ph 1";
        case 5: return "DHA Ph 2";
        default: return "Invalid";
    }
}

float point_pickup(int pickup)
{
    switch(pickup)
    {
        case 1: return 0;
        case 2: return 5;
        case 3: return 10;
        case 4: return 15;
        case 5: return 20;
        default: return -1;
    }
}

float pickup_dropoff(int destination)
{
    switch(destination)
    {
        case 1: return 9;
        case 2: return 15;
        case 3: return 20;
        case 4: return 17;
        case 5: return 30;
        default: return -1;
    }
}

int main()
{
    cout<<"*.*.*.* Ride Fare Calculator *.*.*.*"<<endl;

    int pickup, destination;
    int rate = 40;
    float pickupdis, destinationdis, distance, fare;

    cout<<"\nChoose your PICKUP location:\n";
    cout<<"1: Bahria Town Ph 1\n";
    cout<<"2: Bahria Town Ph 2\n";
    cout<<"3: Bahria Town Ph 3\n";
    cout<<"4: Bahria Town Ph 4\n";
    cout<<"5: Bahria Town Ph 5\n";
    cout<<"Enter location number: ";
    cin>>pickup;

    cout<<"\nYour pickup location: "<<PickupName(pickup)<<endl;
    cout<<"Press Enter to continue...";
    cin.ignore();
    cin.get();

    cout<<"\nChoose your DESTINATION location:\n";
    cout<<"1: Faizabad\n";
    cout<<"2: PWD\n";
    cout<<"3: Kacheri\n";
    cout<<"4: DHA Ph 1\n";
    cout<<"5: DHA Ph 2\n";
    cout<<"Enter location number: ";
    cin>>destination;

    cout<<"\nYour dropoff location: "<<DestinationName(destination)<<endl;
    cout<<"Press Enter to continue...";
    cin.ignore();
    cin.get();

    
    pickupdis = point_pickup(pickup);
    destinationdis = pickup_dropoff(destination);

    
    if(pickupdis == -1 || destinationdis == -1)
    {
        cout<<"\n!!! Invalid Selection !!!";
        return 0;
    }
    distance = pickupdis + destinationdis;
    fare = distance * rate;

    cout<<"\n----------- Ride Details -----------\n";
    cout<<"Pickup Location   : "<<PickupName(pickup)<<endl;
    cout<<"Dropoff Location  : "<<DestinationName(destination)<<endl;
    cout<<"Distance          : "<<distance<<" km"<<endl;
    cout<<"Fare              : "<<fare<<" Rs"<<endl;

    return 0;
}

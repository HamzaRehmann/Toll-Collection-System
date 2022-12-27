/*
Hamza Rehman
*/
#include<iostream>
using namespace std;

//suggested tolls
const int Cycle = 1;
const int Electric_scooty = 1;
const int motor_or_electric_cycle = 1;
const int Cars = 2;
const int Suv = 2;
const int Crossovers = 2;
const int vans = 3;
const int pickups = 3;
const int minibus = 3;
const int minivans = 3;
const int campervan = 3;
const int tractors = 4;
const int agricultural_machines = 4;
const int busses = 5;
const int coaches = 5;
const int Vans = 5;
const int trucks = 6;
const int lorries = 6;
const int Trucks = 10;
const int Agricultural_machines = 10;

//class of toll station
class Toll_Station {
    private:
           int Two_wheelers_count, Four_wheelers_count, Six_wheelers_count, Ten_or_more_wheelers_count, Cycle_count,
           Electric_scooty_count, motor_or_electric_cycle_count, Cars_count, Suv_count, Crossovers_count, vans_count,
           pickups_count,minibus_count,minivan_count, campervan_count, tractors_count, agricultural_machines_count,
           busses_count,coaches_count,Vans_count,trucks_count,lorries_count,Trucks_count,Agricultural_machines_count;

           int toll_twowheelers[Cycle,Electric_scooty,motor_or_electric_cycle];
           int toll_fourwheelers[Cars,Suv,Crossovers,vans,pickups,minibus,minivans,campervan,tractors,agricultural_machines];
           int toll_sixwheelers[busses,coaches,Vans,trucks,lorries];
           int toll_ten_or_more_wheelers[Trucks,Agricultural_machines];
           int total_vehicle = 0;

    public:
           void Count();
           void Two_wheelers();
           void Four_wheelers();
           void Six_wheelers();
           void ten_Or_more_wheelers();
           void Total_toll();
           void Total_vehical();

};

void Toll_Station::Count(){
    Two_wheelers_count = 0, Four_wheelers_count = 0, Six_wheelers_count = 0, Ten_or_more_wheelers_count = 0;
}

void Toll_Station::Two_wheelers() {
    string a;
    cout <<"Enter the name of two wheelers you have: ";
    cin >> a;
    if(a=="Cycle"){
        toll_twowheelers[Cycle] = 1;
        Cycle_count++;
        total_vehicle++;
    }
    else if(a=="Electric_scooty"){
        toll_twowheelers[Electric_scooty] = 1;
        Electric_scooty_count++;
        total_vehicle++;
    }
    else if(a=="Motor cycle" || a=="Electric cycle"){
        toll_twowheelers[motor_or_electric_cycle] = 1;
        motor_or_electric_cycle_count++;
        total_vehicle++;
    }
    else{
        cout<<"Invalid Car! Please enter again."
    }
}

void Toll_Station::Four_wheelers() {
    string b;
    cout<< "Enter the name of the four wheelers you have: ";
    cin>> b;
    if(b=="Car") {
        toll_fourwheelers[Cars] = 2;
        Cars_count++;
        total_vehicle++;   
    }
    else if(b=="SUV"){
        toll_fourwheelers[Suv] = 2;
        Suv_count++;
        total_vehicle++;
    }
    else if(b=="Crossovers"){
        toll_fourwheelers[Crossovers] = 2;
        Crossovers_count++;
        total_vehicle++;
    }
    else if(b=="Vans"){
        toll_fourwheelers[vans] = 3;
        vans_count++;
        total_vehicle++;
    }
    else if(b=="Pickups"){
        toll_fourwheelers[pickups] = 3;
        pickups_count++;
        total_vehicle++;
    }
    else if(b=="Minibus"){
        toll_fourwheelers[minibus] = 3;
        minibus_count++;
        total_vehicle++;
    }
    else if(b=="Minivans"){
        toll_fourwheelers[minivans] = 3;
        minivan_count++;
        total_vehicle++;
    }
    else if(b=="Campervan"){
        toll_wheelers[campervan] = 3;
        campervan_count++;
        total_vehicle++;
    }
    else if(b=="Tractors"){
        toll_fourwheelers[tractors] = 4;
        tractors_count++;
        total_vehicle++;
    }
    else if(b=="Agricultural Machines"){
        toll_fourwheelers[agricultural_machines] = 4;
        agricultural_machines_count++
        total_vehicles++
    }
    else{
        cout<<"Invalid Car! Please enter again.";
    }
    
}
void Toll_Station::Six_wheelers() {
    string c;
    cout<< "Enter the name of six wheelers vehicle you have: ";
    cin>>c;
    if(c=="Bus"){
        toll_sixwheelers[busses] = 5;
        busses_count++;
        total_vehicle++;
    }
    else if(c=="Coach"){
        toll_sixwheelers[coaches] = 5;
        coaches_count++;
        total_vehicle++;
    }
    else if(c=="Van"){
        toll_sixwheelers[Vans] = 5;
        Vans_count++;
        total_vehicle++;
    }
    else if(c=="Truck"){
        toll_sixwheelers[trucks] = 6;
        trucks_count++;
        total_vehicle++;
    }
    else if(c=="Lorry"){
        toll_sixwheelers[lorries] = 6;
        lorries_count++;
        total_vehicle++;
    }
    else{
        cout<<"Invalid car! Please enter again.";
    }
}

void Toll_Station::ten_Or_more_wheelers() {
    string d;
    cout<<"Enter the name of your vehicle: ";
    cin>>d;
    if(d==Truck){
        toll_ten_ormore_wheelers[Trucks] = 10;
        Trucks_count++;
        total_vehicle++;
    }
    else if(d=="Agricultural Machine"){
        toll_ten_ormore_wheelers[Agricultural_machines] = 10;
        Agricultural_machines_count++;
        total_vehicle++;
    }
    else{
        cout<<"Invalid car! Please enter again.";
    }
}
//function to print the total toll amount collected from the different types of vehicles
void Toll_Station::Total_toll(){

    int sum = 0;
    for(int i=0; i<Two_wheelers_count; i++){
        sum = sum + toll_twowheelers[i];
    }
    for(int i=0; i<Four_wheelers_count; i++){
        sum = sum + toll_fourwheelers[i];
    }
    for(int i=0; i<Six_wheelers_count; i++){
        sum = sum + toll_Sixwheelers[i];
    }
    for(int i=0; i<Ten_or_more_wheelers_count; i++){
        sum = sum + int toll_ten_or_more_wheelers[i];
    }
    cout<< "Total toll collected from different vehicle types is: " << sum<<endl;
}
//function to print the total number of vehicles which has crossed the toll

void Toll_Station::Total_vehicle()[

    cout<<"Total number of vehicle which has crossed this toll is: "<<total_vehicle<<endl;
]

//main function

int main() {

    Toll_Station express;
    express.count();

    cout<<"Welcome to the Toll Station."<<endl;
    cout<<"Enter 1 to give the toll"<<endl;
    cout<<"Enter 2 to see the toll station reports"<<endl;
    cout<<"Enter 3 to exit the toll."<<endl;
    int j;
    cout<<"Select: ";
    cin>> j;
    switch(j){
        case '1':
                cout<<"Enter\n a for two_wheelers\n b for four_wheelers\n c for six_wheelers\n d for ten_or_more_wheelers";
                char g;
                cout<<"Select: ";
                cin>>g;
                switch(g){
                    case 'a':
                             express.Two_wheelers();
                             break;
                    case 'b':
                             express.Four_wheelers();
                             break;
                    case 'c':
                             express.Six_wheelers();
                             break;
                    case 'd':
                             express.ten_Or_more_wheelers();
                             break;
                    default:
                            cout<<"Invalid character!";
                            break;
                }
                break;

        case '2':
                cout<<"Enter\n w for total number of vehicles which have crossed the toll\n u for the total toll collected";
                char p;
                cout<<"Select: ";
                cin>>p;
                switch(p){
                    case 'w':
                             express.Total_vehicle();
                             break;
                    case 'u':
                             express.Total_toll();
                             break;
                    defualt: 
                            cout<<"Invalid Character!";
                            break;
                }
                break;
        case '3':
                 cout<<"Program exited. Have a safe journey!";
                 return 0;
        default:
                cout<<"Enter a valid number!";
                break;
                 
    }

    return 0;

}










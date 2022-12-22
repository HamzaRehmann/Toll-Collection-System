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
const int Crossovers;
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

           void print();

};

void Toll_Station::Count(){
    Two_wheelers_count = 0, Four_wheelers_count = 0, Six_wheelers_count = 0, Ten_or_more_wheelers_count = 0;
}

void Toll_Station::Two_wheelers() {
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
    else{
        toll_twowheelers[motor_or_electric_cycle] = 1;
        motor_or_electric_cycle_count++;
        total_vehicle++;
    }

void Toll_Station::Four_wheelers() {

}
}







/*
Hamza Rehman
*/

#include <iostream>
#include <map>
#include <string>

//Base class for vehicles
class Vehicle {
public:
    virtual int getToll() const = 0;
    virtual std::string getType() const = 0;
    virtual ~Vehicle() {}
};

//Derived classes for different types of vehicles
class TwoWheeler : public Vehicle {
public:
    int getToll() const override {
        return 1;
    }
    std::string getType() const override {
        return "Two Wheeler";
    }
};

class FourWheeler : public Vehicle {
public:
    int getToll() const override {
        return 2;
    }
    std::string getType() const override {
        return "Four Wheeler";
    }
};

class Van : public Vehicle {
public:
    int getToll() const override {
        return 3;
    }
    std::string getType() const override {
        return "Van";
    }
};

class Bus : public Vehicle {
public:
    int getToll() const override {
        return 5;
    }
    std::string getType() const override {
        return "Bus";
    }
};

class Truck : public Vehicle {
public:
    int getToll() const override {
        return 6;
    }
    std::string getType() const override {
        return "Truck";
    }
};

class TenOrMoreWheeler : public Vehicle {
public:
    int getToll() const override {
        return 10;
    }
    std::string getType() const override {
        return "Ten or More Wheeler";
    }
};

//Toll class to manage toll collection and generate reports
class Toll {
private:
    std::map<std::string, int> vehicleCounts;
    std::map<std::string, int> vehicleTollCollected;
    int totalTollCollected;
    int totalVehiclesCrossed;

public:
    Toll() : totalTollCollected(0), totalVehiclesCrossed(0) {}

    //Collecting toll for a specific vehicle and updating counts
    void collectToll(const Vehicle& vehicle) {
        int toll = vehicle.getToll();
        totalTollCollected += toll;
        totalVehiclesCrossed++;
        vehicleCounts[vehicle.getType()]++;
        vehicleTollCollected[vehicle.getType()] += toll;
    }

    //Generating and printing the summary report
    void generateSummary() const {
        std::cout << "----- Toll Summary Report -----\n";
        std::cout << "Total toll collected: " << totalTollCollected << " euro\n";
        std::cout << "Total vehicles crossed: " << totalVehiclesCrossed << "\n\n";

        std::cout << "Toll Collected from Each Vehicle Type:\n";
        for (const auto& entry : vehicleTollCollected) {
            std::cout << entry.first << ": " << entry.second << " euro\n";
        }
        std::cout << "\n";

        std::cout << "Number of Each Vehicle Type Crossed:\n";
        for (const auto& entry : vehicleCounts) {
            std::cout << entry.first << ": " << entry.second << "\n";
        }
    }
};

int main() {
    Toll tl;
    std::string input;

    std::cout << "Welcome to the Toll Collection System\n";

    //Main loop for toll collection
    while (true) {
        std::cout << "Enter vehicle type (Two Wheeler, Four Wheeler, Van, Bus, Truck, Ten or More Wheeler) or 'Exit' to end: ";
        std::getline(std::cin, input);

        if (input == "Exit" || input == "exit") {
            //If the user chooses to exit, generate and display summary report
            tl.generateSummary();
            break;
        }

        //Creating appropriate vehicle object based on user input
        Vehicle* vehicle = nullptr;
        if (input == "Two Wheeler") {
            vehicle = new TwoWheeler();
        } else if (input == "Four Wheeler") {
            vehicle = new FourWheeler();
        } else if (input == "Van") {
            vehicle = new Van();
        } else if (input == "Bus") {
            vehicle = new Bus();
        } else if (input == "Truck") {
            vehicle = new Truck();
        } else if (input == "Ten or More Wheeler") {
            vehicle = new TenOrMoreWheeler();
        } else {
            //Invalid input, prompt user again
            std::cout << "Invalid vehicle type. Please try again.\n";
            continue;
        }

        //Collecting toll for the selected vehicle and update booth information
        tl.collectToll(*vehicle);
        delete vehicle;
    }

    return 0;
}

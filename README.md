### Toll Collection System

Develop a software in C/C++ that can charge toll for every passing vehicle and generate a summary for the revenue collected, and vehicle crossed etc. 

Text based interface takes keyboard input for a particular type of vehicle and automatically record the revenue collected and type of vehicle that crossed the check point. The user/operator may end the program using “Exit” option.

The operator should be able to generate following reports:

Total toll collected
Total vehicles crossed
Total toll collected from each vehicle (eg, cycle, motor cycle etc)
Total toll collected from each type of vehicle (eg. Four wheelers, two wheelers etc.) Number of each vehicle crossed (eg, cycle, motor cycle etc)
Number of each type of vehicle crossed (eg. Four wheelers, two wheelers etc.)


Polymorphism is used for designing and attempting the code.

# To compile this program:

clang++ -std=c++11 -o toll main.cpp

# To run the program:
./toll

# sample output:
----- Toll Summary Report -----
Total toll collected: 3 euro
Total vehicles crossed: 2

Toll Collected from Each Vehicle Type:
Two Wheeler: 1 euro
Four Wheeler: 2 euro

Number of Each Vehicle Type Crossed:
Two Wheeler: 1
Four Wheeler: 1


/*
Project 3 - Part 1e / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
*/
struct CellPhone
{

};
/*
2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


/*
1)
WeatherStation
5 properties:
    1) Height of the wheather station
    2) Does it contain a liquid?
    3) Accuracy of the temperature measurement
    4) Sensitivity of the temperature measurement
    5) Display diagonal in inch
3 things it can do:
    1) Display temperature
    2) Calculate humidity
    3) Play alarm when thunder is expected
 */

/*
2)
Grandfather
5 properties:
    1) The age of the grandfather
    2) Number of grand children
    3) Does he have a beard
    4) Monthly income
    5) Number of years married
3 things it can do:
    1) Cheer joyfully
    2) Reminiscent about youth
    3) Sleep
 */

/*
3)
VideoGame
5 properties:
    1) What is the recommended age
    2) How is the game graded on the internet
    3) Average duration till completion
    4) Main character is male
    5) release year
3 things it can do:
    1) interact with console
    2) load new level
    3) gets scratched 
 */

/*
4)
Jogger
5 properties:
    1) Heartrate of the jogger
    2) Size feet of the jogger
    3) Average distance per week in kilometers of the jogger
    4) Average running speed in kilometers per hour of the jogger
    5) Age of the jogger
3 things it can do:
    1) Increase pace
    2) Drink water
    3) Take a deep breath
 */

/*
5)
String
5 properties:
    1) String pitch in Hz
    2) Thickness of the string
    3) Age of the string
    4) Material density
    5) String length
3 things it can do:
    1) Vibrate
    2) Snap
    3) Detune
 */

/*
6)
OutputSignal
5 properties:
    1) Number of Decibels
    2) Wattage supplied for output
    3) Frequency range
    4) Amplitude voltage signal
    5) Percentage of volume going to tweeter
3 things it can do:
    1) Increase
    2) Decrease
    3) Distort
 */

/*
7)
Fretboard
5 properties:
    1) Height of fretboard
    2) Length of fretboard
    3) Number of frets
    4) mm distance till strings
    5) has a coating
3 things it can do:
    1) Touch string
    2) Touch human finger
    3) Breaks
 */

/*
8)
Amplifier
5 properties:
    1) Wattage of amplifier
    2) Treble gain knob level
    3) Bass gain knob level
    4) Mid gain knob level
    5) Volume knob gain
3 things it can do:
    1) Produce sound
    2) Increase treble 
    3) Reduce volume
 */

/*
9)
Pickup
5 properties:
    1) Voltage
    2) Magnet strength
    3) Distance till string
    4) Height of single coil
    5) Year of production
3 things it can do:
    1) Detect string vibration
    2) Transport voltage to amplifier
    3) Increase detection sensitivity
 */

/*
10)
ElectricGuitar
5 properties:
    1) String
    2) OutputSignal
    3) Fretboard
    4) Amplifier
    5) Pickup
3 things it can do:
    1) Produce sound
    2) Increase volume
    3) Consume power
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}

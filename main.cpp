/*
Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to reinforce the syntax habits that C++ requires.  What you create in this project will be used as the basis of Project 5 in the course.   

1) write 10 user-defined types in plain english
   - This step will involve several checkpoints before it is complete.

Checkpoint 1:
    Fill in #1 - 4 with a random UDT in plain english
    These 4 UDTs do not need to be related.
    For each plain-english UDT, write out 3 things it can do, and 5 traits or properties.

************************
    Commit after you complete this step so i can review before you proceed
    Ping me in Slack to review this step.
    Wait for me to review before proceeding to the next Checkpoint
************************

Checkpoint 2:
    For the 10th UDT, come up with an object that is made of 5 smaller parts.
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

************************
    Commit after you complete this step so i can review before you proceed
    Ping me in Slack to review this step.
    Wait for me to review before proceeding to the next Checkpoint
************************

Checkpoint 3: 

    Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, until the smallest object is made of up only C++ primitives. 

    These 5 things can be broken down into their own sub-objects and properties. 

    For example: Display
    A Display has the following 5 traits or properties:
        pixels
        amount of power consumed.
        brightness.
        width
        height

    the Display's brightness can be represented with a Primitive, such as a double. 
    The amount of power consumed can also be represented with a Primitive.
    The 'pixels' must be represented with an array of Pixel instances.  Arrays have not been discussed and can't be used in this project.
    Instead, we can use an Integer primitive to describe the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed
        Brightness

    Notice that I did not write "has a display" or "Has memory" or "has a cpu"  
    Writing 'has a ___" checks whether or not your object *has the ability to do something*.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    In C++ terms, this means to I want you to avoid bool (has a) as a member variable type.
    Instead, prefer the other primitive types when you get to step 2)

************************
    Commit after you complete this step so i can review before you proceed
    Ping me in Slack to review this step.
    Wait for me to review before proceeding with step 2.
************************
  
 2) define your struct for each of your 10 types. 
    - Copy your 3 actions & 5 traits into your struct body.
    - comment them out.
    - I recommend compiling after finishing each one and making sure it compiles without errors or warnings before moving on to writing the next UDT.
 
 3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
 4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions in part2 for these functions
    - you'll call each of these functions in part3
 
 5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs at least 2 member functions.
    - these nested classes are not considered one of your 10 UDTs.
 
 6) your 10th UDTs should only use 5 of your other UDTs for its member variable types.   
    - No primitives allowed!
 
 7) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 example:  

//1) write out, in plain-english, 5 traits and 3 things it can do.
Car Wash   
5 properties:
    1) vacuum cleaners
    2) eco-friendly cleaning supplies
    3) stores the amount of water used per week.
    4) stores amount of profit made per week
    5) number of cars serviced per day

3 things it can do:
    1) wash and wax car
    2) charge customer
    3) detail the car interior
 */
struct CarWash //2)        
{
    //2) has vacuum cleaners
    int numVacuumCleaners = 3; //3) member variables with relevant data types.
    //2) has eco-friendly cleaning supplies
    int numEcoFriendlyCleaningSupplies = 20; //3) member variables with relevant data types.
    //2) stores the amount of water used per week.
    float waterUsedPerWeek = 200.f; //3) member variables with relevant data types.
    //2) stores amount of profit made per week
    float profitPerWeek = 495.95f; //3) member variables with relevant data types.
    //2) number of cars serviced per day
    int numberOfCarsServiced = 10; //3) member variables with relevant data types.
    
    //5) make 2 of the 10 user-defined types have a nested class. 
    struct Car   
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);   
    };

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) wash and wax car
    void washAndWaxCar( Car car );
    //2) charge customer
    float chargeCustomer();
    //2) detail the car interior
    void detailInterior( Car car );
    
               
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};

/*
1)
WheatherStation
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
Videogame
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
Strings
5 properties:
    1) Open E string pitch in Hz
    2) Thickness of the highest string
    3) Thickness of the lowest string
    4) Material density
    5) String length
3 things it can do:
    1) Vibrate
    2) Snap
    3) Detune
 */

/*
6)
Volume
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
SingleCoil
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
    1) Strings
    2) Volume
    3) Fretboard
    4) Amplifier
    5) SingleCoil
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

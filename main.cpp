/*
 Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
 User-Defined Types

 Create a branch named Part1
 
 1) write 10 user-defined types, each with a random number of member variables
    try to make the member variables have names that are related to the user-defined type.
 
 2) give the member variables relevant data types
 
 3) add a couple member functions.  
    make the function parameter list for those member functions use some of your User-Defined Types
 
 4) make 2 of the 10 user-defined types be nested class
 
 5) One of your UDTs should only use UDTs for its member variable types.   
     No primitives allowed!
 
 6) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 example:
 */
struct CarWash            //1) a U.D.T. with a random number of member variables
{
    int numSponges = 3;
    double amountOfSoapUsedPerCar = 2.6; //2) relevant data types
    unsigned int numCarsProcessed = 0;
    
    struct Car                             //4) nested class
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        //2) relevant data types
    };
    
    void washAndWaxCar( Car car );         //3) member function with a user-defined type as the parameter.  The user-defined type parameter happens to be the nested class.
    
    Car myCar;  //5) a member variable whose type is a UDT.
};


/*
 1) 
 */
struct Party
{
    int numberOfInvitedPeople = 55;
    double budgetAvailable = 350;
    
    struct Wheather
    {
        bool sunnyWheather = true;
        unsigned int windSpeed = 15; // miles/hour
    };

    Wheather partyWheather;
};

/*
 2)
 */
struct House
{
    unsigned int numberOfRooms = 6;
    bool openKitchen = true;

    struct Family
    {
        unsigned int numberOfKids = 3;
        bool parentsDivorced = false;
        unsigned int kidsAtHighschool = 2;
    };

    void cleanTheHouse(bool useDetergents = true, int hourLimit = 8);

    Family houseInhabitants;
};

/*
 3)
 */
struct Runner
{
    float topSpeed = 11.5f;
    unsigned int numberOfTrainingsPerWeek = 4;
    unsigned int averageTrackLength = 6850;
    bool male = true;
};

/*
 4)
 */
struct BassGuitar
{
    int numberOfStrings = 5;
    bool standardTuning = true;
    unsigned int ageInYears = 15;
    double purchaseValue = 1500;
    void replaceStrings(unsigned int stringsBroken = 4);
};

/*
 5)
 */
struct Hospital
{
    unsigned int surfaceAreaHospital = 1800;
    int numberOfDoctors = 58;
    float percentageFemaleEmployees = 64.15f;
    bool privateClinic = false;
};

/*
 6)
 */
struct Lumberjack
{
    unsigned int hoursWorked = 8;
    int treesCutPerHour = 16;

    float profitMade(float treeKiloPrice = 14.53f, double weightOfTrees = 1250.24);
};

/*
 7)
 */
struct Clock
{
    bool displaysTimeDigital = false;
    float powerConsumptionVolts = 4.3f;
    unsigned int ageOfClockInYears = 87; 
};

/*
 8)
 */
struct Zoo
{
    unsigned int numberOfSpecies = 318;
    float ticketPrice = 32.50f;
    unsigned int averageNumberOfVisitorsPerDay = 4802;
    
    void feedAnimals(int numberOfTimesPerDay = 4);
};

/*
 9) 
 */
 struct Youtube
 {
    unsigned int newVideosPostedThisMonth = 830259;
    double revenueFromAdds = 6801000291.15;
    bool serverMaintanence = false;
    
    void scanForCopyrightMaterial(int unscannedVideos = 15029, bool scanForVideoAndMusicCopyrightViolation = true);
 };

/*
 10) 
 */
struct Wedding
{
    Party::Wheather weddingWheater;
    Party weddingParty;
    BassGuitar guitarOfBassPlayerBand;
};

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}

//Question6
#include <iostream>
//show the new libraries use . Chrono is part of the c++ date and time utilities.
//unistd.h is the name of the header file that provides access to the POSIX operating system API
#include <chrono>
#include <unistd.h>
//define the different colour codes 
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW "\033[33m"
#define RESET  "\033[0m"

using namespace std;
using namespace std::chrono;

enum Lights
{
    red,
    green,
    yellow,
    yellow2
};

void showlight(Lights color)
//start switch case
{
    switch (color)
    {
        //red light
    case red:
        cout<< RED << "STOP" << endl;
        break;
        //yellow light
    case yellow:
        cout<< YELLOW << "GET READY TO GO" << endl;
        break;
        //green light
    case green:
        cout<< GREEN << "GO" << endl;
        break;
         case yellow2:
        cout << YELLOW << "GET READY TO STOP" << endl;
        break;
    default:
        cout <<RESET<< "Invalid Color" << endl;
        break;
    }
}
int main()
{// Set the time the program will run
    Lights color=red;
    auto end_time = system_clock::now() + seconds(30);
      while (system_clock::now() < end_time) {
        showlight(color);
        //set the time for delay after each colour
        sleep(10);
        switch (color) {
            //red light
            case red:
                color = yellow;
                break;
                //yellow  light
            case yellow:
                color =green;
                break;
                //green light
            case green:
                color =yellow2;
                break;
                case yellow2:
                color =red;
                break;
            default:
                break;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;
float KmtoMiles(int km)
{
    float miles = 0.621 * km;
    return miles;
}
void CelciustoFareinheit()
{
    int C, F;
    cout << "Enter temperature in Celsius: ";
    cin >> C;
    F = (C * 9 / 5) + 32;
    cout << "The temperature in Fahrenheit is: " << F << endl;
}
void SecondstoHoursandMinutes()
{
    int sec, hours, minutes, seconds;
    cout << "Enter time in seconds: ";
    cin >> sec;
    
    hours = sec / 3600;
    minutes = (sec % 3600) / 60;
    seconds = sec % 60;

    cout << "Time: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
}
int main()
{
    int km, conversion;
    
    cout << "--- CONVERSIONS MENU ---" << endl;
    cout << "1. Convert kilometers to miles" << endl;
    cout << "2. Convert Celsius to Fahrenheit" << endl;
    cout << "3. Convert seconds into hours, minutes, and seconds" << endl;
    cout << "Enter your choice: ";
    cin >> conversion;

    switch (conversion)
    {
        case 1:
            cout << "Enter distance in kilometers: ";
            cin >> km;
            cout << "The distance in miles is: " << KmtoMiles(km) << endl;
            break;

        case 2:
            CelciustoFareinheit();
            break;

        case 3:
            SecondstoHoursandMinutes();
            break;

        default:
            cout << "Invalid choice! Please enter a valid option." << endl;
    }

    return 0;
}

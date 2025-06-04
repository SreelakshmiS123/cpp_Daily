//Sensor Calibration (Using std::array)
#include<iostream>
#include<array>
using namespace std;
int main()
{
    std::array<std::array<float, 5>, 3> sensor_readings = {
    std::array<float, 5>{20.0, 21.0, 22.0, 20.5, 19.8},  // Sensor 1
    std::array<float, 5>{30.0, 30.2, 29.8, 30.1, 30.3},  // Sensor 2
    std::array<float, 5>{25.0, 26.0, 24.0, 25.5, 26.2}   // Sensor 3
    };
    
}
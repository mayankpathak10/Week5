/**
 * @file    main.cpp
 * @author  Mayank Pathak
 * @version 1.0
 * @copyright GNU Public License
 * 
 * @section DESCRIPTION
 * 
 * The main file to run the program for valgrind exercise.
 * @dependencies: AnalogSensor.cpp, AnalogSensor.hpp
 */

#include <iostream>
#include <AnalogSensor.hpp>

int main() {
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator = true;
    if (terminator) {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}

/**
 * @file    AnalogSensor.cpp
 * @author  Mayank Pathak
 * @version 1.0
 * @copyright GNU Public License
 * 
 * @section DESCRIPTION
 * 
 * A library file to define the functions required for the main file.
 */

#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>
#include <memory>

/*
 * @brief     Some Task.
 * @param[in] Unsigned int samples
 * @return    Void (Constructor)
 */
AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples) {
}

/*
 * @brief     Some Task.
 * @param[in] None
 * @return    None (Destructor)
 */
AnalogSensor::~AnalogSensor() {
}

/*
 * @brief     To show Output.
 * @param[in] None
 * @return    int : results
 */
int AnalogSensor::Read() {
    // auto readings = std::make_unique<std::vector<int>>(mSamples, 10);

    std::vector<int> *readings = new std::vector<int>(mSamples, 10);

    double result = std::accumulate(readings->begin(), readings->end(), 0.0)
                     / readings->size();
    delete readings;
    readings = NULL;

    return result;
}



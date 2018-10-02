

#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>
#include <memory>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples) {
}

AnalogSensor::~AnalogSensor() {  // Destructor

}

int AnalogSensor::Read() {
    // auto readings = std::make_unique<std::vector<int>>(mSamples, 10);

    std::vector<int> *readings = new std::vector<int>(mSamples, 10);

    double result = std::accumulate( readings->begin(), readings->end(), 0.0 ) / readings->size();
    delete readings;
    readings = NULL;
    
    return result;
}



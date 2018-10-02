/**
 * @file    AnalogSensor.hpp
 * @author  Mayank Pathak
 * @version 1.0
 * @copyright GNU Public License
 * 
 * @section DESCRIPTION
 * 
 * A header file to define the class and methods used by
 * main file.
 */


#pragma once

#ifndef INCLUDE_LIB_HPP_
#define INCLUDE_LIB_HPP_

#include <iostream>

class AnalogSensor {
 public:
    explicit AnalogSensor(unsigned int samples);
    ~AnalogSensor();
    int Read();
 private:
    unsigned int mSamples;
};

#endif  // INCLUDE_LIB_HPP_


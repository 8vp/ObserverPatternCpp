//
//  main.cpp
//  Observer_Pattern_Cpp
//
//  Created by Balu Pillai on 23/11/2020.
//  Copyright © 2020 Balu Pillai. All rights reserved.
//

#include <iostream>
#include <iostream>
#include "WeatherData.hpp"
#include "Client.hpp"


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    WeatherData weatherStation;
    Client one(1), two(2), three(3);

    float temp, humidity, pressure;

    weatherStation.registerObserver(&one);
    weatherStation.registerObserver(&two);
    weatherStation.registerObserver(&three);

    std::cout << "Enter Temperature, Humidity, Pressure (seperated by spaces) << ";
    std::cin >> temp >> humidity >> pressure;

    weatherStation.setState(temp,humidity,pressure);

    weatherStation.removeObserver(&two);

    std::cout << "\n\nEnter Temperature, Humidity, Pressure (seperated by spaces) << ";
    std::cin >> temp >> humidity >> pressure;

    weatherStation.setState(temp,humidity,pressure);

    return 0;
    return 0;
}

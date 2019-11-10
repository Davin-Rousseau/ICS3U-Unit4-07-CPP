// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Nov 2019
// This program uses a loop and an if statement
//   It is also the famous Fizz-Buzz problem

#include <iostream>

main() {
    // this function is the the famous Fizz-Buzz problem

    int minNum = 1000;
    int maxNum = 2000;
    int loop = 0;

    for (loop = minNum; loop < 2001; loop++) {
        if (loop % 5 == 0) {
            std::cout << loop << std::endl;
        } else {
            std::cout << loop << ", " << "";
        }
    }
}

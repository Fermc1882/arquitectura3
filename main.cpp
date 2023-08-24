/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include <iostream>


// Blinking rate in milliseconds
#define BLINKING_RATE     500ms
BusOut pines(D8,D7,D6,D5,D4,D3,D2);
UnbufferedSerial serial(USBTX, USBRX, 9600);
using namespace std;


int main()
{
    while(true){
        int numero;
        std::cout << "introduzca el numero ";
        std::cin >> numero;

        if(numero==0){
            pines.write(63);
        } else if (numero==1){
            pines.write(6);
        } else if (numero==2){
            pines.write(91);
        } else if (numero==3){
            pines.write(79);
        } else if (numero==4){
            pines.write(102);
        } else if (numero==5){
            pines.write(109);
        } else if (numero==6){
            pines.write(125);
        } else if (numero==7){
            pines.write(7);
        } else if (numero==8){
            pines.write(127);
        } else if (numero==9){0
            pines.write(111);
        }
    }





    
}

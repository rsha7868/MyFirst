//
//  Runner.cpp
//  MyFirst
//
//  Created by Sharp, Ryan on 1/23/18.
//  Copyright © 2018 Sharp, Ryan. All rights reserved.
//
#include "Controller.hpp"
int main()
{
    Controller app;
    app.start();
    
    Controller * appPointer = new Controller();
    appPointer->start();
    
    return 0;
}

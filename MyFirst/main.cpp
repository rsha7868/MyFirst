//
//  main.cpp
//  MyFirst
//
//  Created by Sharp, Ryan on 1/23/18.
//  Copyright © 2018 Sharp, Ryan. All rights reserved.
//

#include <iostream>

using namespace std;


int main()
{
    // insert code here...
    cout << "Hello, World!" << endl;
    string input;
    cin >> input;
    getline(cin, input);
    cout << "You said: " << input << endl;
    return 0;
}

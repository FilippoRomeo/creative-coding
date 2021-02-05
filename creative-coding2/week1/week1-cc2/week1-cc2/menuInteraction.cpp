//
//  menuInteraction.cpp
//  week1-cc2
//
//  Created by Filippo Romeo on 04/02/2021.
//

#include <iostream>
#include "menuInteraction.hpp"
#include "operations.hpp"

using namespace std;

operations operation;

int menuInteract::selection(int x){
    switch (int y = x) {
        case 1:
        {
            cout << "Addition selected"<< endl;
            cout << "Add two numbers"<< endl;
            cout << "Select the first number"<< endl;
            cin >> x;
            cout << "Select second number"<< endl;
            cin >> y;
            
            float n = operation.add(x, y);
            
            cout << n << endl;
        }
        case 2:
        {
            cout << "Subtraction selected"<< endl;
            cout << "Subtract two numbers"<< endl;
            cout << "Select the first number"<< endl;
            cin >> x;
            cout << "Select second number"<< endl;
            cin >> y;
            
            float n = operation.sub(x, y);
            
            cout << n << endl;
            
            break;
        }
        case 3:
        {
            cout << "Multiplication selected"<< endl;
            cout << "Multiply two numbers"<< endl;
            cout << "Select the first number"<< endl;
            cin >> x;
            cout << "Select second number"<< endl;
            cin >> y;
            
            float n = operation.mult(x, y);
            
            cout << n << endl;
            
            break;
        }
        case 4:
        {
            cout << "Division selected"<< endl;
            cout << "Divide two numbers"<< endl;
            cout << "Select the first number"<< endl;
            cin >> x;
            cout << "Select second number"<< endl;
            cin >> y;
            
            float n = operation.add(x, y);
            
            cout << n << endl;
            
            break;
        }
        case 5:
        {
            cout << "Square selected"<< endl;
            cout << "Select the first number"<< endl;
            cin >> x;
            
            float n = operation.sqr(x);
            
            cout << n << endl;
            
            break;
        }
        default:
            break;
    }
    return 0;
};

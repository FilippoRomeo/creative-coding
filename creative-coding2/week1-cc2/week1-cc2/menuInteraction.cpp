//
//  menuInteraction.cpp
//  week1-cc2
//
//  Created by Filippo Romeo on 04/02/2021.
//

#include <iostream>
#include "menuInteraction.hpp"
#include "operations.hpp"
#include <sstream>

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
            ostringstream number_floated;
            number_floated << n;
            string s(number_floated.str());
            
            cout << " ___________________________________"<< endl;
            cout << "|                               *   |"<< endl;
            cout << "|       **                          |"<< endl;
            cout << "|                                   |"<< endl;
            cout << "|               "+s+"     *            |"<< endl;
            cout << "|      *                            |"<< endl;
            cout << "|                           *       |"<< endl;
            cout << "|        **                         |"<< endl;
            cout << " -----------------------------------"<< endl;
            
            
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
            ostringstream number_floated;
            number_floated << n;
            string s(number_floated.str());
            
            cout << " ___________________________________"<< endl;
            cout << "|                               *   |"<< endl;
            cout << "|       **                          |"<< endl;
            cout << "|                                   |"<< endl;
            cout << "|               "+s+"     *            |"<< endl;
            cout << "|      *                            |"<< endl;
            cout << "|                           *       |"<< endl;
            cout << "|        **                         |"<< endl;
            cout << " -----------------------------------"<< endl;
            
            
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
            
            ostringstream number_floated;
            number_floated << n;
            string s(number_floated.str());
            
            cout << " ___________________________________"<< endl;
            cout << "|                               *   |"<< endl;
            cout << "|       **                          |"<< endl;
            cout << "|                                   |"<< endl;
            cout << "|               "+s+"     *            |"<< endl;
            cout << "|      *                            |"<< endl;
            cout << "|                           *       |"<< endl;
            cout << "|        **                         |"<< endl;
            cout << " -----------------------------------"<< endl;
            
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
            ostringstream number_floated;
            number_floated << n;
            string s(number_floated.str());
            
            cout << " ___________________________________"<< endl;
            cout << "|                               *   |"<< endl;
            cout << "|       **                          |"<< endl;
            cout << "|                                   |"<< endl;
            cout << "|               "+s+"     *            |"<< endl;
            cout << "|      *                            |"<< endl;
            cout << "|                           *       |"<< endl;
            cout << "|        **                         |"<< endl;
            cout << " -----------------------------------"<< endl;
            
            
        }
        case 5:
        {
            cout << "Square selected"<< endl;
            cout << "Select the first number"<< endl;
            cin >> x;
            
            float n = operation.sqr(x);
            
            ostringstream number_floated;
            number_floated << n;
            string s(number_floated.str());
            
            cout << " ___________________________________"<< endl;
            cout << "|                               *   |"<< endl;
            cout << "|       **                          |"<< endl;
            cout << "|                                   |"<< endl;
            cout << "|               "+s+"     *            |"<< endl;
            cout << "|      *                            |"<< endl;
            cout << "|                           *       |"<< endl;
            cout << "|        **                         |"<< endl;
            cout << " -----------------------------------"<< endl;
           
            
          
        }
        default:
            if (x == -1){
                cout << " ___________________________________"<< endl;
                cout << "|   '                           *   |"<< endl;
                cout << "|       **                          |"<< endl;
                cout << "|                        •          |"<< endl;
                cout << "|           Program closed  *       |"<< endl;
                cout << "|      *                            |"<< endl;
                cout << "|            <3  BYE <3   *         |"<< endl;
                cout << "|        **     °                   |"<< endl;
                cout << " -----------------------------------"<< endl;
                break;
            }
    }
    return 0;
};

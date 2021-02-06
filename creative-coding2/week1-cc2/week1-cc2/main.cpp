//
//  main.cpp
//  week1-cc2
//
//  Created by Filippo Romeo on 04/02/2021.
//

#include <iostream>
#include "operations.hpp"
#include "menuInteraction.hpp"

using namespace std;

menuInteract selected;

int main(int argc, const char * argv[]) {
    
    int selection = 0;

    while (!selection || selection > 5 || selection<-1) {
        cout << "What do you need to do?" << endl;
        cout << "Select: " << endl;
        cout << "1: addition" << endl;
        cout << "2: subtraction" << endl;
        cout << "3: to multiply" << endl;
        cout << "4: to divide" << endl;
        cout << "5: to sqare" << endl;
        cout << "*********************" << endl;
        cout << "                     " << endl;
        cout << "-1 to end the program" << endl;
        cout << "                     " << endl;
        cout << "*********************" << endl;
        
        cin >> selection;
        
        if(selection > 5 || selection<-1){
            cout << "Sorry the number selected is out of the range" << endl;
        }else if(!int(selection)){
            cout << "Sorry the value is not a number"<< endl;
        }
    }
    selected.selection(selection);
}

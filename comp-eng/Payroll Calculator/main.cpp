#include <iostream>

using namespace std;

void taxes(int income){
    if (income < 500){
        
    }
}

int main(){
    char worker;
    double wage, sales, hours, wnum, bnum, tnum, workerhours = 40, managerhours = 35;
    cout << "Payroll Calculator:\nType a one of the following letters followed by pressing enter\nManager salary = m\nHourly worker salary = h\nCommision worker salary = c\nPieceworker salary = p\n\n";
    
    while(worker != 'q'){
        
        cin >> worker;
        
        switch(worker){
            case 'm':
                cout << "What is this manager's weekly wage?\n";
                cin >> wage;
                cout << "Hours?\n\n";
                cin >> hours;
                if (hours > managerhours) hours = 35;
                wage = wage * (managerhours/ hours);
                cout << "\nThe manager's wage is:" << wage << "$\n";
                break;
            case 'h':
                cout << "What is this worker's wage?\n";
                cin >> wage;
                cout << "Hours?\n\n";
                cin >> hours;
                if (hours > workerhours) wage = wage * 40 + ((wage * 1.5) * (hours - 40));
                else wage = wage * hours;
                cout << "The worker's wage is: " << wage << "$\n";
                break;
            case 'c':
                cout << "What was this employee's gross sales for this week?\n";
                cin >> sales;
                wage = 250 + (sales * .057);
                cout << "The salesman's wage is: " << wage << "$\n"; 
                break;
            case 'p':
                cout << "Widgets assembled?: ";
                cin >> wnum;
                cout << "\nBall bearings assembled?: ";
                cin >> bnum;
                cout << "\nTranfer racks assembled?: ";
                cin >> tnum;
                wage = (wnum * 1.5) + (bnum * 2) + (tnum + 2.5);
                cout << "The pieceworker's wage is: " << wage << "$\n";
                break;
            default:
                cout << "Incorrect input, enter q if you want to quit: ";
                break;
        }
    }
}

#include <iostream>

using namespace std;

void taxes(double income){
    double a, b, c, d;
    if (income < 500){
        a = income * .08;
        b = income * .025;
        c = income * .04;
        d = income - (a + b + c);
        cout << "\nGross pay: " << income << "\nFed tax: " << a << "\nState tax: " << b << "\nSoc. security: " << c << "\nNet income: " << d;
    }
    else if ((income <= 500) && (income < 1000)){
        a = income * .12;
        b = income * .025;
        c = income * .06;
        d = income - (a + b + c);
        cout << "\nGross pay: " << income << "\nFed tax: " << a << "\nState tax: " << b << "\nSoc. security: " << c << "\nNet income: " << d;
    }
    else if ((income <= 1000) && (income < 2000)){
        a = income * .15;
        b = income * .025;
        c = income * .08;
        d = income - (a + b + c);
        cout << "\nGross pay: " << income << "\nFed tax: " << a << "\nState tax: " << b << "\nSoc. security: " << c << "\nNet income: " << d;
    }
    else{
        a = income * .020;
        b = income * .025;
        c = income * .010;
        d = income - (a + b + c);
        cout << "\nGross pay: " << income << "\nFed tax: " << a << "\nState tax: " << b << "\nSoc. security: " << c << "\nNet income: " << d;
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
                taxes(wage);
                break;
            case 'h':
                cout << "What is this worker's wage?\n";
                cin >> wage;
                cout << "Hours?\n\n";
                cin >> hours;
                if (hours > workerhours) wage = wage * 40 + ((wage * 1.5) * (hours - 40));
                else wage = wage * hours;
                taxes(wage);
                break;
            case 'c':
                cout << "What was this employee's gross sales for this week?\n";
                cin >> sales;
                wage = 250 + (sales * .057);
                taxes(wage); 
                break;
            case 'p':
                cout << "Widgets assembled?: ";
                cin >> wnum;
                cout << "\nBall bearings assembled?: ";
                cin >> bnum;
                cout << "\nTranfer racks assembled?: ";
                cin >> tnum;
                wage = (wnum * 1.5) + (bnum * 2) + (tnum + 2.5);
                taxes(wage);
                break;
            default:
                cout << "Incorrect input, enter q if you want to quit: ";
                break;
        }
    }
    return 0;
}

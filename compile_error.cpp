// Code for Project 1
// Report survey results

#include <iostream>
using namespace std;   // pp. 38-39 in Savitch 6/e explains this line

int main()
{
    int numberSurveyed;
    int numKeep;
    int numRefund;
    
                                                                /* first compile error omitted
                                                                   latter quotation mark (ln 15) */
    cout << "How many diesel Volkswagen owners were surveyed? ;
    cin >> numberSurveyed;
    cout << "How many of them say they will take a payment and keep their car? ";
    cin >> numKeep;
    cout << "How many of them say they will return their car for a refund? ";
    cin >> numRefund;
    
    double pctKeep = 100.0 * numKeep / numberSurveyed;
    double %Refund = 100.0 * numRefund / numberSurveyed;        // started identifier with a symbol, not a letter
    
    cout.setf(ios::fixed);   // see pp. 32-33 in Savitch 6/e
    cout.precision(1);
    
    cout << endl;
    cout << pctKeep << "% say they will keep their car." << endl;
    cout << %Refund << "% say they will demand a refund." << endl;
    
    if (numKeep > numRefund)
        cout << "More people will keep their car than demand a refund." << endl;
    else
        cout << "More people will demand a refund than keep their car." << endl;
}
// WAP for multiple catch statements to handle 
// various types of exceptions for 3 different
// values of a variable w.r.t int,char,double  throws.



#include <iostream>
using namespace std;

template <class T>
void checkValue(T val) {
    if (val == 1) {
        throw 200;   
    } 
    else if (val == 2) {
        throw 'C';   
    } 
    else if (val == 3) {
        throw 4.5;  
    } 
    else {
        cout << "No exception thrown. Value: " << val << endl;
    }
}

int main() {
    int val;
    cout << "Enter a value (1, 2, or 3 to trigger exceptions): ";
    cin >> val;

    try {
        checkValue(val);
    } 
    catch (int e) {  
        cout << "Caught an integer exception: " << e << endl;
    } 
    catch (char e) {  
        cout << "Caught a character exception: " << e << endl;
    } 
    catch (double e) {  
        cout << "Caught a double exception: " << e << endl;
    } 
    catch (...) {  
        cout << "Caught an unknown exception!" << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

class Counter {
private:
    static int count;

public:
    Counter() {
        count++;
        cout << "Object created. Total objects: " << count << endl;
    }

    ~Counter() {
        cout << "Object destroyed. Remaining objects: " << --count << endl;
    }

    static void showCount() {
        cout << "Current object count: " << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter obj1, obj2;
    Counter::showCount();

    {
        Counter obj3, obj4;
        Counter::showCount();
    } 

    Counter::showCount();

    return 0;
}

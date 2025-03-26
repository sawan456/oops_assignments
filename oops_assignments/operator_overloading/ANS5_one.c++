#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    int size;
    char *buffer;

public:

void operator =(const String &);
void display();
   
    String(const char *str) {
        size = strlen(str);
        buffer = new char[size + 1];
        strcpy(buffer, str);
    }
   
};

void String::operator =(const String & s) {
    size = s.size;
	if(s.size != 0){
	   delete [] buffer;
	   buffer = new char[s.size+1];
 	   strcpy(buffer,s.buffer);
	}
	else
		buffer = NULL;

}

void String::display() {
    cout << "String: " << buffer << endl;
}



int main() {
    String s1("Hello");
    String s2("World");

    s1=s2;

    s1.display();
    s2.display();

    return 0;
}

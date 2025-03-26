#include<iostream>
#include<cstring>
using namespace std;

class String{

    char c[100];

    public:

    String(const char* s){

        strcpy(c,s);
    }


    bool operator ==(const String&);

};


bool String::operator ==( const String &s1){

    return strcmp(c,s1.c)==0;

}



int main(){


    String s1("Hello"), s2("Hello"), s3("World");

    cout<<((s1 == s2) ? "Equal\n" : "Not Equal\n");
    cout<<((s1 == s3) ? "Equal\n" : "Not Equal\n");

    return 0;



}
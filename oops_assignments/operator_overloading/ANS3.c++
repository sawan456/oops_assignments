#include <iostream>
using namespace std;
class complex
{
    private:
    int real;//instance variable
    int img;
    public :
   

    complex();
    complex(int ,int );
 
    void setdata();
    void display();
 


    bool operator ==(const complex&);
    
    complex operator +(const complex&);
    complex operator +(int);
    void operator++();
     void operator++(int);
     void operator--();
     void operator--(int);

     friend ostream& operator <<( ostream&,const complex&);
};


complex::complex() //defalt
{
    real=0;
    img=0;
}


complex::complex(int r,int i)
{
    real=r;
    img=i;
}


    void complex::setdata(){
        real=10;
        img=20;
    }

    void complex::display()
    {
        cout<<this->real<<"+ i"<<this->img<<endl;
    }


// == equal to
    bool complex::operator ==( const complex &c){

        return (real == c.real && img == c.img);
    
    }


    // + to add 2 obj
 complex complex::operator +(const complex& s)
 {
     complex t;
     t.real=real+s.real;
     t.img=img+s.img;
     return t;
 }

//to add obj + int
  complex complex::operator +(int s)
 {
     complex t;
     t.real=real+s;
     t.img=img+s;
     return t;
 }
 
ostream& operator <<( ostream &o,const complex& c)
 {
     o<<c.real<<endl;
     o<<c.img<<endl;
     return o;
     
 }


 // ++ = pre 
 void complex::operator++()
 {
     real++;
     img++;
 }

 //++= post
 void complex::operator++(int)
 {
     real++;
     img++;
 }

 // -- pre 

 void complex::operator--()
 {
     real--;
     img--;
 }

 //--= post

 void complex::operator--(int)
 {
     real--;
     img--;
 }


int main()
{
  complex c1(5,5), c2(1,1);
  complex c3=c1+c2;

  complex c4(1,1), c5(2,2),c6(1,1), c7(3,3);
c3.display();

++c3;
c3.display();

c2++;
c2.display();

c1=c3+5;
c1.display();


cout<<((c4==c6)?"Equal\n" : "Notequal");
cout<<((c5==c7)?"Equal\n" : "Not equal");


    return 0;
}

#include<iostream>

using namespace std;

class Complex{
    int real , img ;

    public:
    Complex(int r = 0 ; int i = 0) : real{r},img{i}{}

    Complex operator+(complex c){
        return Complex(real + c.real , img + c.img);
    }

    void show(){
        cout<<real<<" "<<img;
    }
}

int main(){
    Complex c1{5,10}, c2{10,20},c3;
    c3=c1 + c2;
    c1.show();

return 0;
}
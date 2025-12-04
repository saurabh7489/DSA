#include<iostream>
using namespace std;
class Complex {
    private:
    double real, imag;
    public:
    Complex(){
        real=0;
        imag=0;

    }
    Complex(double r,double i){
        real=r;
        imag=i;
    }
    Complex add(Complex obj){
        Complex ans;
        ans.real=real+obj.real;
        ans.imag =imag+obj.imag;
        return ans;
    }
    void print(){
        cout<<real<<"+"<<imag<<"i\n";
    };
    int main()
    {
        Complex
    }

}

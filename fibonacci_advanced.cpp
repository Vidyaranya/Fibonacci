#include <iostream>
#include <cmath>

using namespace std;

class Fibonacci{
public:
    int get_even_sum(int);
    bool validate_input(int);
private:
     int even_sum(int);
};


// Check whether the entered index is valid
bool  Fibonacci::validate_input(int n){
    if (n < 1) {
        cout << "Please enter a value greater than 0 \n";
        return false;
    }
    return true;
}


int  Fibonacci::get_even_sum(int n){
    return even_sum(n);
}


// calculate the sum of the even fibonacci numbers in the 
// first n terms of the series. The run time complexity of the
// below implementation is O(1)
int  Fibonacci::even_sum(int n){
    int number_index = (n/3);
    float phi = (1 + sqrt(5)) / 2;
    float psi = (1 - sqrt(5)) / 2;
    float phi3 = pow(phi, 3);
    float psi3 = pow(psi, 3);
    return int((1 / sqrt(5)) * (
        phi3 * ((1 - pow(phi3, number_index)) / (1 - phi3)) -
        psi3 * ((1 - pow(psi3, number_index)) / (1 - psi3))
    ));
}


int main()
{
    cout << "Enter number 'n' for which you want to find even_sum: ";
    int n;
    cin  >> n;
    Fibonacci fibonacci;
     if (fibonacci.validate_input(n)) {
        cout << fibonacci.get_even_sum(n) << endl;
    }
    return 0;
}

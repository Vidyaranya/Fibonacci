#include <iostream>

using namespace std;

class Fibonacci{
public:
    int a, b, c, sum;
    void get_even_sum(int);
    bool validate_input(int);
private:
     int even_sum(int);
};


void  Fibonacci::get_even_sum(int n){
    cout << even_sum(n) << endl;
}


// Check whether the entered index is valid
bool  Fibonacci::validate_input(int n){
    if (n < 1) {
        cout << "Please enter a value greater than 0 \n";
        return false;
    }
    return true;
}


// calculate the sum of the even fibonacci numbers in the 
// first n terms of the series. The run time complexity of the
// below implementation is O(n)
int  Fibonacci::even_sum(int n){
    // Number of even fibonacci numbers with index <= n
    int number_index = (n/3);
    a = 2; b = 8;
    sum = 10;

    if (number_index < 1) {
        return 0;
    } else if (number_index < 2) {
        return 2;
    } else if (number_index < 3) {
        return 10;
    }

    for (int i = 0; i < number_index - 2; i++) {
        cout << "af";
        c = 4 * b + a;
        sum += c;
        a = b;
        b = c;
    }
    return sum;
}


int main()
{
    cout << "Enter number 'n' for which you want to find even_sum: ";
    int n;
    cin  >> n;
    Fibonacci fibonacci;
    if (fibonacci.validate_input(n)) {
        fibonacci.get_even_sum(n);
    }
    return 0;
}

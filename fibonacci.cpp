#include <iostream>

using namespace std;

class Fibonacci{
public:
    int a, b, c, sum;
    void get_even_sum(int);
private:
     int even_sum(int);
};

void  Fibonacci::get_even_sum(int n){
    cout << even_sum(n);
}

int  Fibonacci::even_sum(int n){
    int number_index = (n/3) - 1;
    a = 2; b = 8;
    sum = 10;
    if (number_index < 0) {
        return 0;
    } else if (number_index < 1) {
        return 2;
    } else if (number_index < 2) {
        return 10;
    }
    for (int i=0; i<=number_index - 2; i++) {
        c = 4 * b + a;
        sum += c;
        return sum;
        a = b;
        b = c;
    }
}

int main()
{
    cout << "Enter number 'n' for which you want to find even_sum: ";
    int n;
    cin  >> n;
    Fibonacci fibonacci;
    fibonacci.get_even_sum(n);
    return 0;
}

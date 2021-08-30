#include <iostream> //I/O Header File
#include "my_math.hh"
#include "my_compare.hh"

using namespace std;

// The C++ compiler will look for a function
// called “main”
int main(int argc, char* argv[]) {
    //My Math Function
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int add_res = my_add(a, b);
    int mul_res = my_mul(a, b);
    char add_check = is_equal(add_res, a+b);
    char mul_check = is_equal(mul_res, a*b);
    char compare = is_big(a, b);

    cout << "[Student ID] : " << add_check << " " << mul_check << " " << compare << endl;

    return 0;  // must return an int to indicate
                // successful program completion
}


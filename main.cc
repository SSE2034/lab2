#include <iostream> //I/O Header File
#include "my_compare.hh"

using namespace std;


// Insert yout student ID
#define STUDENT_ID 2000000


/**
 *
 * Warning: Don't modify code below !!
 *
 */
int main(int argc, char* argv[]) {

    int num_arr[3];
    
    for(int i=0; i<argc-1; i++)
        num_arr[i] = atoi(argv[i+1]);

    int biggest_num = getBiggestNum(num_arr);
    char compare = isDuplicate(biggest_num, num_arr);

    cout << STUDENT_ID << ": " << "The Biggest Number is " << biggest_num  \
         << " and Duplicate number existence " << compare << endl;

    return 0;
}


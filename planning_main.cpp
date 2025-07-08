#include <iostream>
#include "process.h"
using std::cout;
using std::endl;    

int main() {

    cout << "Planning start" << endl;
    Process process;
    process.planProcess();
    cout << "Planning end." << endl;

    return 0;
}
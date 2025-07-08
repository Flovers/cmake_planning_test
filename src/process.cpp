#include <iostream>
#include "process.h"

using std::cout, std::endl;
void Process::planProcess()
{
    cout << "Planning process started." << endl;
    my_map.mapInfo();
    cout << "Planning process completed." << endl;
}

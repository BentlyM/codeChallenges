#include <Testing.h>
#include <iostream>
using namespace std;


int main(){
    Test test;
    test.run();

    Test *testPointer;
    testPointer = &test;
    testPointer->run();

    // If we get here, all tests passed!

    cout << "All tests passed!" << endl;

    return 0;
}
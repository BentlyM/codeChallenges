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

    std::cout << "All tests passed!" << std::endl;

    return 0;
}
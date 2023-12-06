#include <iostream>
using namespace std;

int main(){
    const int dim1 = 2, dim2 = 2, dim3 = 3;

    int arr[dim1][dim2][dim3] = {
        {
        {1,2,3},
        {4,5,6}
        },
        {
            {7,8,9},
            {10,11,12}
        }
        };

    cout << "array output is: " << arr[1][0][2] << "\n";

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

vector<int> resize(vector<int>& Arr){
    vector<int> ans = Arr;

    for(int j = 0; j < Arr.size(); j++){
            ans.push_back(Arr[j]);
    }
    return ans;
}

int main(){
    vector<int> myArr = {1,2,1};
    
    vector<int> newArray = resize(myArr);
    for(int increment = 0; increment < newArray.size(); increment++){
        cout << newArray[increment] << " ";
    }
    cout << endl;
}
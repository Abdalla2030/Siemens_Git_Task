#include <iostream>
#include <vector>
using namespace std;


int getMin(vector <int> numbers){
    int mn = INT_MAX ;
    for(int i = 0 ;i<numbers.size();i++){
        mn = min(mn,numbers[i]);
    }
    return mn ;
}


int main(){
    vector <int> numbers = {1,2,3,4,5,6,7,8,9,10};
    cout<<getMin(numbers)<<endl;

    return 0;
}
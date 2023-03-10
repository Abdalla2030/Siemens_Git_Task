#include <iostream>
#include <vector>
using namespace std;

int  getSum(vector <int> numbers){
    int sum = 0 ;
    for(int i = 0 ;i<numbers.size();i++){
        sum += numbers[i];
    }
    return sum ;
}

double getAverage(vector <int> numbers){
    int sum = 0 ;
    double avg = 0 ;
    for(int i = 0 ;i<numbers.size();i++){
        sum += numbers[i];
    }
    avg =(double) sum / numbers.size();
    return avg ;
}

int getMin(vector <int> numbers){
    int mn = INT_MAX ;
    for(int i = 0 ;i<numbers.size();i++){
        mn = min(mn,numbers[i]);
    }
    return mn ;
}


int main(){
    vector <int> numbers = {1,2,3,4,5,6,7,8,9,10};
    cout<<getSum(numbers)<<endl;
    cout<<getAverage(numbers)<<endl;
    cout<<getMin(numbers)<<endl;
    return 0;
}
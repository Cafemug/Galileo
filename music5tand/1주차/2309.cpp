#include <iostream>
#include <algorithm>
#include <vector>

#define TOTAL 9

using namespace std;

int main(){
    int total_height = 0, target = 0, input;
    vector<int> dwarves;

    // input data and calculate the total heights.
    while(cin>>input){
        dwarves.push_back(input);
        total_height += input;
    }
    target = total_height - 100;

    //Find out two dwarves whose sum of heights is same as the target value.
    for(int i = 0; i<TOTAL; i++){
        for(int j = 0; j<TOTAL; j++){
            if(i==j){
                break;
            }if(dwarves[i]+dwarves[j] == target){
                dwarves.erase(dwarves.begin()+i);
                dwarves.erase(dwarves.begin()+j);
                break;
            }
        }
    }

    // sort
    sort(dwarves.begin(),dwarves.end());

    // print out
    for(int k = 0; k<TOTAL-2; k++){
        cout<<dwarves[k]<<endl;
    }

    return 0;    
}
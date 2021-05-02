#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;

void sortEqually(int array[], int array_size){
    int groupA, groupB, sum, counter;
    sum = 0;
    //sort the array (The last element is the biggest)
    sort(array, array + array_size);

    //find the sum
    for(int i = 0; i < array_size; i++){
        sum += array[i];
    }

    groupB = 0;
    while(true){
        groupA = sum - groupB;
        if(groupA - groupB > abs((groupA - array[counter + 1]) - (groupB + array[counter + 1]))){
            groupB += array[counter];
            counter++;
        }else{
            break;
        }
    }

//    //sorts into Two groups A and B
//    for(int i = array_size - 1; i/2 > 0; i--){
//        if(abs(groupB + array[i] - groupA) < abs(groupA + array[i] - groupB)){
//            groupB += array[i];
//        }else{
//            groupA += array[i];
//        }
//    }
    cout << "groupA: " << sum - groupB << "groupB: " << groupB;
}

int main() {
    //create array of size INPUT
    cout << "number of stones: ";
    int number_of_stones;
    cin >> number_of_stones;
    int stone_array[number_of_stones];

    // fill the array
    for(int i = 0; i < number_of_stones; i++){
        cout << "Enter the weight of the stone: ";
        cin >> stone_array[i];
    }

    //sort the stones
    sortEqually(stone_array, number_of_stones);
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void wormsJourney(const int shelf[]){
    int start, end, answer;
    cout << "Enter the start and end points respectively" << endl;
    cin >> start >> end;

    for(int i = start - 1; i < end; i++){
        answer += shelf[i];
    }
    cout << "The journey was " << answer << " pages long and it was totally worth it!";
}

int main() {
    //create array of size INPUT
    cout << "number of volumes: ";
    int number_of_volumes;
    cin >> number_of_volumes;
    int shelf[number_of_volumes];

    // fill the array
    for(int i = 0; i < number_of_volumes; i++){
        cout << "Enter number of pages in the book: ";
        cin >> shelf[i];
    }
    // sort the array
    sort(shelf, shelf + number_of_volumes);
    //calculate answer
    wormsJourney(shelf);




    return 0;
}

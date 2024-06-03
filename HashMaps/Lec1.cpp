#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int hashmap[10] = {0,0,0,0,0,0,0,0,0,0};   // use this to take input from user
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i = 0;i <10;i++){  // use this to calculate frequency of every element
        hashmap[arr[i]]++; 
    }

    for(int i=0;i<10;i++){  // use to show output
        cout<< i << ":"<<hashmap[i]<<endl;
    }

}
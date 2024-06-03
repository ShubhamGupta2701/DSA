#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int hashmap[10] = {0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i = 0;i <10;i++){
        hashmap[arr[i]]++; 
    }

    for(int i=0;i<10;i++){
        cout<< i << ":"<<hashmap[i]<<endl;
    }

}
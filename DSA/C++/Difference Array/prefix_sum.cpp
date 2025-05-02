#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter size of the array :";
    cin>>num;

    int nums[num];
     cout<<"Enter numbers of the array:";
    // To read a value to array
    for(int i=0;i<num;i++){
        cin>>nums[i];
    }

    // To calculate Prefix sum
    int sum=0;
    for(int j=1;j<num;j++){

        nums[j] = nums[j-1] + nums[j];
        
    }

    // To show prefix sum array

    for(int i=0;i<num;i++){
        cout<<nums[i]<<"\t";
    }

}


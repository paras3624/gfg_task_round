#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[7] = {1,2,3,4,5,6};                             //Declaring array of size 7
    int index, num, i;
    cout<<"Enter the new number: ";
    cin>>num;                                           //User input for new number
    cout<<"Enter the index for new number: ";
    cin>>index;                                         //User input for index for new number

    cout<<"Array before adding new number: ";            
    for(i=0; i<6; i++){                                 //Printing array before adding new number
        cout<<arr[i]<<" ";
    }

    for(i=5; i>=index; i--){                            //Shifting elements index by 1 to right
        arr[i+1] = arr[i];
    }
    arr[index] = num;                                   //Adding the new number to the specified index

    cout<<endl<<"Array after adding new number: ";      //Printing array after adding new number
    for(i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
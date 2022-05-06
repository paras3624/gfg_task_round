//Buy and sell stock once to maximize profit
//Input the cost of stock for each day for n days
//Print the maximum profit obtained after selling the stock

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j, profit = 0;                    //Initialize profit to 0
    cout<<"Enter the number of days: ";
    cin>>n;                                     //User input the number of days
    int arr[n];                                 //Declaring array of size n

    cout<<endl<<"Enter the price of stock each day: "<<endl;    //User input the prices for each day
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    for(i=0; i<n-1; i++){                       //Iterating i from 0th index to n-2 (arr[i] -> buying price)
        for(j=i+1; j<n; j++){                   //Iterating j from (i+1)th index to n-1 (arr[j] -> selling price)
            if(profit<arr[j]-arr[i]){           //If profit is more than (buying price - selling price)
                profit = arr[j]-arr[i];         //Store the new profit value to variable 'profit'
            }
        }
    }

    cout<<endl<<"The maximum profit is: "<<profit<<endl;        //Print the maximum profit obtained
    return 0;
}
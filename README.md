# gfg_task_round
<h2>Mandotory Task</h2>
<h3>Problem:</h3> 
Buy and sell stock once to maximize profit
<h3>Language:</h3>
C++
<h3>Code:</h3>

```
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j, profit = 0;                                  //Initialize profit to 0
    cout<<"Enter the number of days: ";
    cin>>n;                                                   //User input the number of days
    int arr[n];                                               //Declaring array of size n

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
```

<h3>Code Explaination:</h3>

1. Declaring variables of data type interger, n for nuumber of days(array length), i and j for iterating through array, initializing profit variable to 0 to store our maximum profit.<br>
2. Taking the value of n from user.<br>
3. Declaring an array of integer type with length n.<br>
4. Using for loop to input the values i.e cost of stock for each day, in array.<br>
5. Using for loop to iterate from 0th index to n-2 index i.e considering arr[i] as the buying price.
6. Using nested loop to iterate from i+1 index to n-1 index i.e considering arr[j] as the selling price.
7. If profit is less than the new profit obtained by arr[j] - arr[i] (If profit is more than the new profit obtained, the loop interates to next index).
8. Store the new profit value to variable "profit".
9. Print the maximum profit achieved by buying and selling the stock.

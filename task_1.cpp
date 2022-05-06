#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[] = "A string";                  //Declaring string using character array
    char *p = s;                            //Declaring pointer variable and storing base address of s[]
    
    cout<<s[0]<<" "<<*p<<" "<<*(p+3)<<endl; //Printing the first line of output
    p += 2;                                 //Incrementing pointer by 2. It points to address of 's' of s[]
    
    cout<<*p<<" "<<*(p+2)<<" "<<*(p+5)<<endl; //Printing the second line of output
    return 0;
}
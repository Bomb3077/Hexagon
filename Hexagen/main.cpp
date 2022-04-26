//
//  main.cpp
//  Hexagen
//
//  Created by Benjamin Chang on 2022-04-26.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int length;

    cout << "length" <<endl;

    cin >> length;

    char symbol;

    cout << "symbol" <<endl;

    cin >> symbol;

    for(int i=0; i<length; i++){

    for (int a=i; a<length; a++)

    {

        cout << " " ;
    }

    for(int b = length+2*i; b>0; b--)

    {

    cout<<symbol;

    }

    cout<<endl;

    }

    for (int j=length-2; j>0; j--){
    for(int c=j; c<length;c++)

    {

        cout << " " ;
    }

    for(int d=length+2*j; d>0; d--)

    {

    cout<<symbol;

    }

    cout<<endl;

    }
}

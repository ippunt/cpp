//next line if for profecors script
// /home/jdarling2/cpp/jdarling2_lab13.cpp

#include <bits/stdc++.h>
#include "yrtd.h"
#include "ydtr.h"

using namespace std;



int main()
{
    cout<<"Welcome to the Roman to deciaml and decimal to Roman program"<<endl;
    cout<<"You will get the opportunity to do one conversion of each!"<<endl;
    string janky;
    RomanToD RTD;
    std::cout <<"Please give me a Roman Numeral to translate to integer "<<endl;
    std::cout <<"1 is I, 5 is V, 10 is X, 50 is L, 100 is C, 500 is D, 1000 is M "<<endl;
    RTD.setRoman();
    janky = RTD.getRoman();
    cout<<"Your decimal number for your Roman Numeral is "<<RTD.romanToDecimal(janky)<<endl;

//DTR
    decimalToRoman DTR;
    std::cout <<"Please give me a number to be translated to Roman Numerals"<<endl;
    DTR.setNumber();
    DTR.printRoman(DTR.getNumber());

    std::cout <<endl;
    return 0;

}

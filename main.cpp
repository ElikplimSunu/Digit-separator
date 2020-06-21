#include <iostream>
#include <sstream>

using namespace std;


    //Function to add the comma to the entered number
    string addComma(string numberEntered){
   const int numberSize = numberEntered.size();

   //if comma cannot be added then the number should be printed as it is
    if(numberSize < 4)
    {
        return numberEntered;
    }
    //else it should add the comma when the number has more than 3 digits
    else if(numberSize > 3){

        int inserter = 0;

        int i = numberSize % 3;

    if(i == 0)
    {
        i = 3;
    }
    for(; i < (numberSize + inserter); i = i + 4)
    {
        numberEntered.insert(i, ",");
        inserter++;
    }
        }

    return numberEntered;

            }

    //Function to convert the integer input into string for easy manipulation
    string convertToString(unsigned long long int integerInput){

    stringstream ss;
    ss << integerInput;
    string numberEntered;
    ss >> numberEntered;

    return addComma(numberEntered);
    }

int main()
{
    unsigned long long int integerInput;

    cin >> integerInput;


    cout << convertToString(integerInput);


        return 0;
}

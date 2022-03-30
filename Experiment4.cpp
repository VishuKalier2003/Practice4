/*Develop a String to read and arrange it in alphabetical order...*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;         // Entering a string for displaying in alphabetical
    cout << "Enter a string : ";
    cin >> str;
    char ch;       // Char variable for character popping
    for(int i = 0; i < str.length()-1; i++)     // Bubble sort technique for Comparisons
    {
        for(int j = 0; j < str.length()-1; j++)
        {
            if(str[j] > str[j+1])   // If the former is greater than the latter
            {
                ch = str[j];         // Interchanging the values of the characters
                str[j] = str[j+1];
                str[j+1] = ch;
            }
        }
    }
    cout << "The Arranged String is : " << str << endl;   // Displaying the string in alphabetical order
    return 0;  // End of the Program
}
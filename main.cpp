#include <iostream>
#include <string>
using namespace std;
//ask the question and print
int main(){
  string input;
  cout << "Type you sentence: ";
  //request input
  cin >> input;

//set a function to see if string is reversed 
  if (input == string(input.rbegin(),input.rend())) 
//print answers
cout << input << "Yes your sentence is a Palindrome!" ;
  else 
  
cout << input << "No your sentence is not a Palindrome!" ;
return 0;
}


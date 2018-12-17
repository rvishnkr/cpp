/** @file palindrome.c
 *  @brief Check if an input word is a palindrome 
 *
 *  @author ravi
 *  @bug No known bugs.
 */
#include <string>
#include <iostream>

int  main(){
  std::string input;

  std::cout << "Please enter a string: ";
  std::cin >> input;

 /* This constructor of string takes a beginning and ending iterator 
  * and creates the string from the characters between those two iterators.
  * Since rbegin() is the end of the string and incrementing it goes 
  * backwards through the string.
  */ 
  if (input == std::string(input.rbegin(), input.rend())) {
      std::cout << input << " is a palindrome\n";
  }
  else{
    std::cout << input << " is not a palindrome\n";
  }
}

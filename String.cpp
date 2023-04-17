//Example
//Create a variable of type string and assign it a value:

string greeting = "Hello";

//Example:

#include <iostream>
#include <string>
using namespace std;

int main() {
  string greeting = "Hello";
  cout << greeting;
  return 0;
}


// String Concatenation:

//Example:

#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string firstName = "John ";
  string lastName = "Doe";
  string fullName = firstName + lastName;
  cout << fullName;
  return 0;
}

//Example2:

#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string firstName = "John";
  string lastName = "Doe";
  string fullName = firstName + " " + lastName;
  cout << fullName;
  return 0;
}


//Append: you can also concatenate strings with the append() function:

#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string firstName = "John ";
  string lastName = "Doe";
  string fullName = firstName.append(lastName);
  cout << fullName;
  return 0;
}



//WARNING!

//C++ uses the + operator for both addition and concatenation.

//Numbers are added. Strings are concatenated.

Example
int x = 10;
int y = 20;
int z = x + y;      // z will be 30 (an integer)

Example
string x = "10";
string y = "20";
string z = x + y;   // z will be 1020 (a string)

//String Length:

To get the length of a string, use the length() function:

//Example
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.length();

//Example
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.size();


//Access String:

#include <iostream>
#include <string>
using namespace std;

int main() {
  string myString = "Hello";
  cout << myString[0];
  return 0;
}

// Change String Characters:

#include <iostream>
#include <string>
using namespace std;

int main() {
  string myString = "Hello";
  myString[0] = 'J';
  cout << myString;
  return 0;
}


// User Input Stirng :
//Example

string firstName;
cout << "Type your first name: ";
cin >> firstName; // get user input from the keyboard
cout << "Your name is: " << firstName;

// Type your first name: John
// Your name is: John

//Example:

#include <iostream>
#include <string>
using namespace std;

int main() {
  string fullName;
  cout << "Type your full name: ";
  getline (cin, fullName);
  cout << "Your name is: " << fullName;
  return 0;
}


//Omitting Namespace:
You might see some C++ programs that runs without the standard namespace library. 
The using namespace std line can be omitted and replaced with the std keyword, 
followed by the :: operator for string (and cout) objects:

#include <iostream>
#include <string>

int main() {
  std::string greeting = "Hello";
  std::cout << greeting;
  return 0;
}
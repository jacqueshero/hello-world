#include <iostream> //this includes basic input/output libraries
using namespace std; //defining this here means we can omit the scope operator "std::" below.

//the main function is the entry point to all programs, this particular one returns an integer.
int main() {
//std::cout
//"<<" = append to cout buffer.
//"\n" = new line.
//std::endl; flushes the output buffer to the screen.

cout << "hello world.. impressive!\n" << endl;
cin.get(); //waits for any keypress to..
return 0; //return control back to the operating system 
}

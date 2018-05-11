//============================================================================
// Name        : HelloWorld.cpp
// Author      : Anthony-Phillip Cornejo
// Version     : 0.432.14.1241.001
// Copyright   : E-Sports Superstar Northern
// Description : MMMMM DAE WRITE TO TEXT FILE lionDAE
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int writeFile (string input)
{
  cout << "Writing To File \n";
  ofstream myfile;
  myfile.open ("/Users/APC/Downloads/example.txt");
  myfile << input;
  myfile.close();
  cout << "Writing Complete. \n";
  return 0;
}

int main()
{
	bool whileContinue = true;
	string input = "";
	string option;
	while(whileContinue) {
		cout << "Please enter a string: ";
		getline (cin, input);
		writeFile(input);

		cout<< "Would You Like To Rewrite To The File? Y/N ";
		getline(cin, option);

		if(option == "Y") {
			cout << "Resetting Program \n";
		} else if(option == "N") {
			cout << "Shutting Down";
			whileContinue = false;
		} else {
			cout << "INVALID OPTION, SHUTTING DOWN \n";
			whileContinue = false;
		}
	}
}

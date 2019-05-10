#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void races(){
    ifstream inFile;
    string line;
    inFile.open("race.txt");

    if (inFile.fail())
    {
        cout << "Could not read file";
    }
    while (!inFile.eof())
    {
	cout << line;
        /*noOfTeams++;

        string id, name, coach;

        getline(inFile, id);

        getline(inFile, name);

        getline(inFile, coach);

        if (inFile.eof()) break;

        //addTeam(id, name, coach);
	    */
    }
    inFile.close();
}

char displayMenu(){
	char opt;
	string userInput;
	cout << "-------------------------\n";
	cout << "|      Welcome to       |\n";
    cout << "|   Church Hill downs   |\n";
	cout << "|                       |\n";
	cout << "-------------------------\n";
	cout << "|        MENU           |\n";
	cout << "|	                |\n";
	cout << "|1. ADD       MONEY     |\n";
	cout << "|2. DISPLAY   FUNDS     |\n";
	cout << "|3. REMOVE    FUNDS     |\n";
	cout << "|4. SHOW      RACES     |\n";
	cout << "|5. MAKE      BETS      |\n";
	cout << "|6. SCAN      BETS      |\n";
	cout << "|7. WITHDRAWL FUNDS     |\n";
    cout << "-------------------------\n";
	cout << "Enter menu option: ";
	//if (cin.peek() == '\n') cin.ignore();
    	getline(cin, userInput);
	opt = userInput[0];
        while (opt !='1' && opt !='2' && opt !='3' && opt !='4' && opt !='5' && opt !='6' && opt !='7' && opt !='x') 
        {
            cout << "Invalid entry, enter 1,2,3,4,5,6,7 or X!\n";
            cout << "Enter Menu Option ===> ";
            if (cin.peek() == '\n') cin.ignore();
            getline(cin, userInput);
	    opt = userInput[0];
        }
	return opt;
}//displayMenu()

int main(){
    string menu;
    char opt;
    while (opt != 'x') {
        opt = displayMenu();
        switch (opt) {
            case '1': cout << "OPTION 1\n"; break;

            case '2': cout << "OPTION 2\n"; break;

            case '3': cout << "OPTION 3\n"; break;
            
	    	case '4': races(); break;

            case '5': cout << "OPTION 5\n"; break;
			
	    	case '6': cout << "OPTION 6\n"; break;
	
	    	case '7': cout << "OPTION 7\n"; break;
        }
    }
	system("pause");
	return 0;
}

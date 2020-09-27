//Jahnava Alyssa Baltz
//COP2000.0M1
// This program display's appropriate airlines based on certain preferences of the user.

 #include <iostream>
 #include<string>


 int main()
 {
	 using std::cout;
	 using std::endl;
	 using namespace std;

	  string choice1;
	  string choice2;
	  string choice3;

	  string airline1 = "Trans American Airlines";  
	  string airline2 = "Atlantic International Airlines";
	  string airline3 = "South Pacific Airlines";
	  string airline4 = "Windsor Airlines";
	  string airline5 = "Oceanic Airlines";
	  string airline6 = "Belarus Airways";

	  //intro statement
	  cout << "Welcome to the Airline Selector Program." << endl << endl;
	  cout << "Please answer the following questions and we will help select the best airline(s) for you." << endl << endl;


	//requesting input from user
	  cout << "Would you like first class availability? (yes or no): ";
	  cin >> choice1;

	  if (choice1 != "yes" && choice1 != "no")
	  {
		  cout << "This is an invalid answer, please try again: ";
		  cin >> choice1;
	  }

	  cout << "Would you like to select your seat? (yes or no):  ";
	  cin >> choice2;

	  if (choice2 != "yes" && choice2 != "no")
	  {
		  cout << "This is an invalid answer, please try again: ";
		  cin >> choice2;
	  }

	  cout << "Would you like frequent flyer miles? (yes or no): ";
	  cin >> choice3;


	  if (choice3 != "yes" && choice3 != "no")
	  {
		  cout << "This is an invalid answer, please try again: ";
		  cin >> choice3;
	  }

	  //answers based on user input
	  cout << endl << endl;
	  cout << "Based on your answers, the following are the best airlines for you: ";
	  cout << "\n\n\n";
	  
		
	  
	  // Trans American Airlines 
	  if (choice1 == "yes" && choice2 == "yes" && choice3 == "yes")
		  cout << airline1 << endl << endl;

	  //Atlantic International Airlines
	  else if (choice1 == "no" && choice2 == "no" && choice3 == "no")
		  cout << airline2 << endl << endl;

	  //South Pacific Airlines
	  else if (choice1 == "yes" && choice2 == "no" && choice3 == "yes")
		  cout << airline3 << endl << endl;

	  //Windsor Airlines
	  else if (choice1 == "no" && choice2 == "yes" && choice3 == "no")
		  cout << airline4 << endl << endl;

	  //Oceanic Airlines
	  else if (choice1 == "yes" && choice2 == "no" && choice3 == "no")
		  cout << airline5 << endl << endl;

	  //Belarus Airways
	  else if (choice1 == "no" && choice2 == "no" && choice3 == "yes")
		  cout << airline6 << endl << endl;

	  else {
		  cout << "None of the airlines specifically meet your preferences, please try again." << endl << endl << endl << endl;
	  } 
	

	system("pause"); 
	return 0;

	 }
#include <iostream>
#include <vector>
using namespace std;



int main() {
  string Milk;
  string Chicken;
  string Eggs;
  string Sugar;
  string Pasta;
  
  vector<string>shoppingList;
  string userChoice= "";
  


  do{
    cout<< "Please choose an option below\n\n";
    cout<< "A.Add an item to the shopping list." << endl;
    cout<< "B.Display shopping list"<<endl;
    cout<< "X. End program"<<endl<<endl;
    
 cin>>userChoice;

    if(userChoice == "A" || userChoice == "a")
    {
      string item;
      cout << "What would you like to add to the shopping list?"<< endl;
      cin>>item;
      shoppingList.push_back(item);
      system("clear");
    }
    else if(userChoice == "B" || userChoice == "b")
    {
      cout<<endl<< "Shopping List" <<endl;

       for(int i = 0; i < shoppingList.size(); i++)
  
	{
		cout << shoppingList[i] << endl;
        
     	} cout<<endl;}
    else if(userChoice == "X" || userChoice == "x")
    {cout << "Exit chosen";}
    else
    {
      cout << "Invalid input. Please Try again" << endl;
    }



  }while(userChoice != "X" && userChoice != "x");

  cout<<". Thank you for using the program"<<endl;

  return 0;
} 
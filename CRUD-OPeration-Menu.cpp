#include <iostream>
#include <vector>
#include <string>

//Structure of an Item.
struct Item {
	int id;
	string name;
	double price;
	
	//Display Item details.
	void display () const {
	cout << "ID: " << id << ", Name: " << name << ", Price: $" << price << endl;
	
	}
};

//Function prototypes
void createItem(vector<Item>& items);
void readItems(const vector<Item>& items);
void updateItem(vector<Item>& items);
void deleteItem(vector<Item>& items);

int main() {
	vector<Item> items; // Vector to store items
	int choice;			// Variable to store user's menu choice
	
	do {
		//Display Menu options
		cout << "\n--- CRUD Operations Menu ---\n";
        cout << "1. Create Item\n";  // Option to create a new item
        cout << "2. Read Items\n";  // Option to read and display items
        cout << "3. Update Item\n";  // Option to update an item
        cout << "4. Delete Item\n";  // Option to delete an item
        cout << "5. Exit\n";         // Option to exit the program
        cout << "Enter your choice: ";
        cin >> choice;  	// Get the user's choice
        
        // Execute the corresponding action based on the choice
        switch (choice) {
        	case 1:
        		createItem(items);	 // Call createItem to add a new item
        		break;
        	case 2:
        		readItems(items);	// Call readItems to display all items
        		break;
        	case 3:
        		updateItem(items);	// Call updateItem to modify an existing item
        		break;
        	case 4:
        		deleteItem(items);	// Call deleteItem to remove an item
        		break;
        	case 5:
        		cout << "Exiting Program.\n";	// Exit message
        		break;
        	default:
        		cout <<"Invalid choice. Please try again!.\n";	// Handle invalid input
        	
		}
	}
}

// Create a new item
void createItem(vector<Item>& items) {
	Item newItem;	// Temporary variable to hold the new item
	
	cout << "\nEnter Item ID: ";
	cin >> newItem.id;	//Input item ID
	cin.ignore();	//Clear input buffer to avoid issues with getline
	cout << "\nEnter Item Name: ";
	getline(cin, newItem.name);	// Input item name
}

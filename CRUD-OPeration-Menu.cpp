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

//Funtion prototypes
void createItem(vector<Item>& items);
void readItems(const vector<Item>& items);
void updateItem(vector<Item>& items);
void deleteItem(vector<Item>& items);

int main() {
	vector<Item> items; // Vector to store items
	int choice;			// Variable to store user's menu choice
	
	
}

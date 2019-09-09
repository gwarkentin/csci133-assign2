#include <iostream>

using namespace std;

class VendingMachine {
	//for futureness make initial inventory a variable rather than
	//hard coded, particularly for the refill function
	int initInv = 10;
	int sodas = initInv;
	
	//also made price variable rather than hard coded
	float price = 1.25;

	public:
	int getInventoryCount (){return sodas;}; //function returns stock
	float purchaseSoda (float); //function overloaded later since it's large
	void refill (){sodas = initInv;}; //funtion resets stock to initial value
};

/*
//This was my initial function for the purchasing which I think is better
//it's more self contained than the assignment since it checks
//stock before selling and change can be 0 with succesful sale 
//All the same I will do to spec after this comment 

//function to check input money from customer and returns change if enough
//otherwise, returns -1 if no stock and -2 if not enough money
float VendingMachine::purchaseSoda (float paid) {
	// check if more money input than price per soda
	if (paid >= price)
	{
		//if so, checks inventory. If sodas in stock reduce inventory
		//and return the change amount
		if (sodas >= 1)
		{
			sodas--; 
			return paid - price;
		}
		//otherwise return -1 if not enough stock
		else
		{
			return -1;
		}
	}
	//if not enough money then return -2;
	else
	{
		return -2;
	}
}
*/

// function for VendingMachine class to check if enough money enterred
// if so reduce stock and return change, otherwise return 0
float VendingMachine::purchaseSoda (float paid){
	if (paid >= price)
	{
		sodas--;
		return paid - price;
	}
	else
	{
		return 0;
	}
}

//some tests to make sure it's working properly. They all did
int main(){
	/*
	VendingMachine vender;
	cout << vender.getInventoryCount() << endl;
	cout << vender.purchaseSoda(2.40) << endl;
	cout << vender.getInventoryCount() << endl;
	cout << vender.purchaseSoda(0.30) << endl;
	cout << vender.getInventoryCount() << endl;
	vender.refill();	
	cout << vender.getInventoryCount() << endl;
	*/
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	                  //PROGRAM 01
	                
//	double num1,num2;
//	char operator_;
//	cout<<"---------Simple Calculator--------"<<endl;
//	cout<<"Enter first number:";
//	cin>>num1;
//	cout<<"Enter second number:";
//	cin>>num2;
//	cout<<"Enter the operator(+,-,*,/):";
//	cin>>operator_;
//	switch(operator_){
//		case'+':
//			cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
//			break;
//		case'-':
//			cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
//			break;
//		case'*':
//			cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
//			break;
//		case'/':
//			if(num2!=0)
//			cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
//			else
//			cout<<"Error:Division by zero!"<<endl;
//			break;
//		default:
//			cout<<"Error:Invalid operator!"<<endl;
//			break;
//	}

                          //PROGRAM 02
                          
//    int day;
//	cout<<"Enter day of the week(1-7): ";
//	cin>>day;
//	switch(day){
//		case 1:
//			cout<<"Monday"<<endl;
//			break;
//		case 2:
//			cout<<"Tuesday"<<endl;
//			break;
//		case 3:
//			cout<<"Wednesday"<<endl;
//			break;
//		case 4:
//			cout<<"Thursday"<<endl;
//			break;
//		case 5:
//			cout<<"Friday"<<endl;
//			break;
//		case 6:
//			cout<<"Saturday"<<endl;
//			break;
//		case 7:
//			cout<<"Sunday"<<endl;
//			break;
//		default:
//			cout<<"Error:Invalid Day!"<<endl;
//			break;	
//	} 

                               //PROGRAM 03
                               
                               
	const double PI=3.14159;						   
	int choice;
	double radius,length,width,base,height;
	cout<<"-----------Shape Area Calculator-----------"<<endl;
	cout<<"1.Circle"<<endl;
	cout<<"2.Rectangle "<<endl;
	cout<<"3.Triangle"<<endl;
	cout<<"Enter your choice(1-3):"<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"Enter circle radius:";
			cin>>radius;
			cout<<" Circle Area:"<<PI*radius*radius<<endl;
			break;
		case 2:
		    cout<<"Enter rectangle length:";
		    cin>>length;
			cout<<"Enter triangle width:";
			cin>>width;
		    cout<<" Rectangle Area:"<<length*width<<endl;
			break;
		case 3:
			cout<<"Enter triangle base:";
			cin>>base;
			cout<<"Enter triangle height:";
			cin>>height;
			cout<<"Triangle Area:"<<0.5*base*height<<endl;
			break;
		default:
		    cout<<"Error:Invalid choice!"<<endl;
		    break;
		}
	}
	                       //PROGRAM 04
	            
//    double amount, convertedAmount;
//    int choice;
//
//    // Exchange rates (example rates; update with real-time values)
//    const double USD_TO_PKR = 280.0;  // 1 USD = 280 PKR
//    const double USD_TO_INR = 83.0;   // 1 USD = 83 INR
//    const double USD_TO_EURO = 0.92;  // 1 USD = 0.92 EUR
//
//    // User input
//    cout << "Currency Converter: USD to PKR, INR, or Euro\n";
//    cout << "Enter the amount in USD: ";
//    cin >> amount;
//
//    cout << "Choose conversion option:\n";
//    cout << "1. USD to PKR\n";
//    cout << "2. USD to INR\n";
//    cout << "3. USD to Euro\n";
//    cout << "Enter your choice (1-3): ";
//    cin >> choice;
//
//    // Switch statement for currency conversion
//    switch (choice) {
//        case 1:
//            convertedAmount = amount * USD_TO_PKR;
//            cout << amount << " USD is equal to " << convertedAmount << " PKR.\n";
//            break;
//        case 2:
//            convertedAmount = amount * USD_TO_INR;
//            cout << amount << " USD is equal to " << convertedAmount << " INR.\n";
//            break;
//        case 3:
//            convertedAmount = amount * USD_TO_EURO;
//            cout << amount << " USD is equal to " << convertedAmount << " Euros.\n";
//            break;
//        default:
//        cout << "Invalid choice! Please select between 1-3.\n";  
//    }
//     return 0;
// }
    
   
                      //program 05
   
// Function to calculate discount
//double applyDiscount(double total) {
//    if (total > 500) {
//        return total * 0.8; // 20% discount
//    } else if (total >= 100) {
//        return total * 0.9; // 10% discount
//    }
//    return total; // No discount
//}
//
//int main() {
//    int categoryChoice, itemChoice, quantity;
//    double totalPrice = 0.0;
//
//    cout << "Welcome to the Shopping System!\n";
//
//    while (true) {
//        // Main menu: Categories
//        cout << "\nSelect a category (Enter the number):\n";
//        cout << "1. Electronics\n2. Clothing\n3. Groceries\n4. Finish Shopping\n";
//        cout << "Choice: ";
//        cin >> categoryChoice;
//
//        if (categoryChoice == 4) break; // Finish shopping
//
//        switch (categoryChoice) {
//            case 1: // Electronics
//                cout << "\nElectronics Items:\n";
//                cout << "1. Laptop ($1000)\n2. Smartphone ($700)\n3. Headphones ($150)\n";
//                cout << "Select an item (Enter the number): ";
//                cin >> itemChoice;
//
//                switch (itemChoice) {
//                    case 1:
//                        cout << "Enter quantity for Laptop: ";
//                        cin >> quantity;
//                        totalPrice += 1000 * quantity;
//                        cout << "Laptop added to cart.\n";
//                        break;
//                    case 2:
//                        cout << "Enter quantity for Smartphone: ";
//                        cin >> quantity;
//                        totalPrice += 700 * quantity;
//                        cout << "Smartphone added to cart.\n";
//                        break;
//                    case 3:
//                        cout << "Enter quantity for Headphones: ";
//                        cin >> quantity;
//                        totalPrice += 150 * quantity;
//                        cout << "Headphones added to cart.\n";
//                        break;
//                    default:
//                        cout << "Invalid choice. Try again.\n";
//                }
//                break;
//
//            case 2: // Clothing
//                cout << "\nClothing Items:\n";
//                cout << "1. Jacket ($120)\n2. T-shirt ($40)\n3. Jeans ($60)\n";
//                cout << "Select an item (Enter the number): ";
//                cin >> itemChoice;
//
//                switch (itemChoice) {
//                    case 1:
//                        cout << "Enter quantity for Jacket: ";
//                        cin >> quantity;
//                        totalPrice += 120 * quantity;
//                        cout << "Jacket added to cart.\n";
//                        break;
//                    case 2:
//                        cout << "Enter quantity for T-shirt: ";
//                        cin >> quantity;
//                        totalPrice += 40 * quantity;
//                        cout << "T-shirt added to cart.\n";
//                        break;
//                    case 3:
//                        cout << "Enter quantity for Jeans: ";
//                        cin >> quantity;
//                        totalPrice += 60 * quantity;
//                        cout << "Jeans added to cart.\n";
//                        break;
//                    default:
//                        cout << "Invalid choice. Try again.\n";
//                }
//                break;
//
//            case 3: // Groceries
//                cout << "\nGrocery Items:\n";
//                cout << "1. Milk (1 Liter) ($2)\n2. Bread (1 Loaf) ($3)\n3. Eggs (1 Dozen) ($5)\n";
//                cout << "Select an item (Enter the number): ";
//                cin >> itemChoice;
//
//                switch (itemChoice) {
//                    case 1:
//                        cout << "Enter quantity for Milk: ";
//                        cin >> quantity;
//                        totalPrice += 2 * quantity;
//                        cout << "Milk added to cart.\n";
//                        break;
//                    case 2:
//                        cout << "Enter quantity for Bread: ";
//                        cin >> quantity;
//                        totalPrice += 3 * quantity;
//                        cout << "Bread added to cart.\n";
//                        break;
//                    case 3:
//                        cout << "Enter quantity for Eggs: ";
//                        cin >> quantity;
//                        totalPrice += 5 * quantity;
//                        cout << "Eggs added to cart.\n";
//                        break;
//                    default:
//                        cout << "Invalid choice. Try again.\n";
//                }
//                break;
//
//            default:
//                cout << "Invalid category choice. Try again.\n";
//        }
//    }
//
//    // Display final invoice
//    cout << "\n------- Invoice -------\n";
//    cout << "Total before discount: $" << fixed << setprecision(2) << totalPrice << endl;
//
//    double discountedPrice = applyDiscount(totalPrice);
//    double discountAmount = totalPrice - discountedPrice;
//
//    if (discountAmount > 0) {
//        cout << "Discount applied: -$" << fixed << setprecision(2) << discountAmount << endl;
//    } else {
//        cout << "No discount applied.\n";
//    }
//
//    cout << "Final Total: $" << fixed << setprecision(2) << discountedPrice << endl;
//    cout << "Thank you for shopping!\n";    
//}
//	return 0;	                  
//}

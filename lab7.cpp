#include <iostream>
using namespace std;
// float calculateBill(int item, int quantity) { //problem 1
//     switch(item) {
//         case 1: return 10.0 * quantity;  // Pizza: $10
//         case 2: return 8.0 * quantity;   // Burger: $8
//         case 3: return 5.0 * quantity;   // Salad: $5
//         default: return 0.0;
//     }
// }
// int main() {
//     int choice, quantity;
//     float total = 0.0;
//     char continueOrder;
//     do {
//         // Display menu
//         cout << "\nMenu:\n";
//         cout << "1. Pizza - $10\n";
//         cout << "2. Burger - $8\n";
//         cout << "3. Salad - $5\n";
//         cout << "Enter your choice (1-3): ";
//         cin >> choice;
//         if (choice >= 1 && choice <= 3) {
//             cout << "Enter quantity: ";
//             cin >> quantity;
//             float itemCost = calculateBill(choice, quantity);
//             total += itemCost;
//             switch(choice) {
//                 case 1:
//                     cout << "Ordered: " << quantity << " Pizza(s)\n";
//                 break;
//                 case 2:
//                     cout << "Ordered: " << quantity << " Burger(s)\n";
//                 break;
//                 case 3:
//                     cout << "Ordered: " << quantity << " Salad(s)\n";
//                 break;
//             }
//         } else {
//             cout << "Invalid choice!\n";
//         }
//         cout << "Do you want to order more? (y/n): ";
//         cin >> continueOrder;
//     } while (continueOrder == 'y' || continueOrder == 'Y');
//     cout << "\nTotal Bill: $" << total << endl;
//     return 0;
// }
//problem 2
// float calcFee(int hours) {
//    if (hours <= 2 && hours >=0) {
//       return 0;
//    }
//    else if (hours <= 5 && hours >=3)  {
//       hours = hours - 2;
//       return hours*2;
//    }
//    else {
//       hours = hours - 5;
//       return 6+(hours*5);
//    }
// }
// int main() {
//    int hours,people;
//    float total=0.0;
//    cout<<"Please enter number of people: \n";
//    cin>>people;
//    int i=1;
//    while(people>0) {
//       cout<<"Please enter number of hours: \n";
//       cin>>hours;
//       total+=calcFee(hours);
//       cout<<i<<" person's fee is :"<<total<<endl;
//       people--;
//       i+=1;
//    }
// }
//problem 3
// int Bank(int balance,int amount,int choice) {
//     switch (choice) {
//         case 1: return balance+amount;
//         case 2: return balance-amount;
//         case 3: return balance;
//     }
// }
// int main() {
//     int balance=500,choice,amount;
//     do {
//         cout<<"\nMenu:\n";
//         cout<<"1. Deposit\n";
//         cout<<"2. Withdraw\n";
//         cout<<"3. Check Balance\n";
//         cout<<"4. Exit\n";
//         cout<<"Enter your choice: ";
//         cin>>choice;
//         if(choice >= 1 && choice <= 2) {
//             cout<<"Enter amount ";
//             cin>>amount;
//             if (amount<=balance&&choice == 1) {
//                 cout<<"Balance: "<<Bank(balance,amount,choice);
//                 balance+=amount;
//             }
//             else if (amount<=balance && choice == 2) {
//                 cout<<"Balance: "<<Bank(balance,amount,choice);
//                 balance-=amount;
//             }
//         }
//         else if (choice == 3) {
//             cout<<"Balance: "<<Bank(balance,amount,choice);
//         }
//         else if (choice > 4 || choice < 1) {
//             cout<<"Invalid Input";
//         }
//     }while(choice != 4);
//     cout<<"Exiting the program\n";
//     return 0;
// }
//problem 4
// int Tickets(int movie,int people) {
//     switch (movie) {
//         case 1: return 8*people;
//         case 2: return 10*people;
//         case 3: return 12*people;
//         default: return 0;
//     }
// }
// int main() {
//     int choice,number,sum=0;
//     char continueOrder;
//     do {
//         cout<<"\n Menu \n ";
//         cout<<"For Movie A select 1, price is 8 \n";
//         cout<<"For Movie B select 2, price is 10 \n";
//         cout<<"For Movie C select 3, price is 12 \n";
//         cout<<"Enter your movie choice: ";
//         cin>>choice;
//         if (choice >= 1 && choice <= 3) {
//             cout<<"Enter number of tickets: \n";
//             cin>>number;
//             sum += Tickets(choice,number);
//         }
//         else {
//             cout<<"Wrong Choice\n";
//         }
//         cout<<sum<<endl;
//         cout<<"Do you want to continue?(y/n):";
//         cin>>continueOrder;
//     }while(continueOrder == 'y' || continueOrder == 'Y');
// }
// problem 5
// int train(int cost, int type) {
//     switch (type) {
//         case 1:return 15*cost;
//         case 2:return 20*cost;
//         case 3:return 25*cost;
//         default:return 0;
//     }
// }
// int main() {
//     int amount,choice,sum=0;
//     char contOrder;
//     do {
//         cout<<"\n Menu \n ";
//         cout<<"For City X select 1, price is 15 \n";
//         cout<<"For City Y select 2, price is 20 \n";
//         cout<<"For City Z select 3, price is 25 \n";
//         cout<<"Enter your destination choice: ";
//         cin>>choice;
//         if (choice >=1 && choice <=3) {
//             cout<<"Enter amount of tickets: ";
//             cin>>amount;
//             sum+=train(amount,choice);
//         }else {
//             cout<<"Wrong choice!\n";
//         }
//         cout<<sum<<endl;
//         cout<<"Do you want to continue?(y/n):";
//         cin>>contOrder;
//     }while(contOrder=='y'||contOrder=='Y');
//     return 0;
// }

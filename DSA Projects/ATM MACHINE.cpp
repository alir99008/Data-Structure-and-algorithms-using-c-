
//******ATM MACHINE PROGRAM******

#include<iostream>
using namespace std;
void printstar(char ch , int n); //PRINTSTAR IS FOR PRINTING STARTS:
//CH IS USED TO STORE CHARACTERS :
// N IS THE NO OF CHARACTERS TO BE DISPLAYED
double balance1;
int main() {

	cout<<"\n\t\t    ========================================="<< endl;
	cout<<"\t\t    ========================================="<< endl;
	cout<<"\t\t          ||   WELCOME TO OUR PROJECT   ||"<< endl;
	cout<<"\t\t    ========================================="<< endl;
	cout<<"\t\t    ========================================\n\n"<< endl;
	printstar('*',80); // used to print starts
	int password;
	int pincode ;
	cout<<"      ENTER  PASSWORD FOR ZULFIQAR ALI     \n";
	cout<<"      ENTER  PASSWORD FOR MUHAMMAD ALI    \n";
	cout<<"      ENTER  PASSWORD FOR SAJID ALI      \n";
	printstar('&',80);
	for(int i=1; i<=10; i++) { //THIS FOR LOOP IS USED TO ENTER THE PINCODE 9 IN CASE OF WRONG PINDCODE:
		if(i==2 || i==3 || i==4 || i==5 || i==6 || i==7 || i==8 || i==9 || i==10) {
			cout<<"\n\nWELCOME AGAIN  \n\t\t\t\tMAIN PAGE \n";
		}
		cout<<"PLEASE ENTER THE PINCODE\n";
		cin>>pincode;
		system("cls");
		if(pincode == 1234) {
			cout<<"\n\t WELCOME HAFIZ SAFFIULLAH \n";
			for (int i=0; i<3; i++) { //THIS FOR LOOP IS FOR ENTERING PASSWORD 2 TIMES IN CASE OF WRONG PASSWORD CARD WILL BE CAPTURED
				cout <<"\tENTER PASSWORD:\n";
				cin>>password;
				double balance = 100000; //BALACE IN THIS BANK ACCCOUNT
				balance1=balance;
				if (password==5555) {
					for(int i=1; i<=10; i++) { //THIS FOR LOOP IS USED TO WITHDRAW AND DEPOSITE AMOUNT 9 times
						double withdraw, deposit;
						int option;
						cout<<"\n";
						if(i==1) {
							cout<<"\t\t *** Choose a Transaction ***\n\n";
						}
						printstar('%',80); // this will print % 80 times
						cout<<"     MAIN SCREEN    \n";
						cout<<"[1] Inquire Balance \n";
						cout<<"[2] Withdraw \n";
						cout<<"[3] Deposit \n";
						cout<<"[4] Quit \n";
						cout<<"\n";
						cout<<"Enter Option:";
						cin>>option;
						switch(option) { // USING SWITCH STATEMENT FOR OPTIONS
							case 1: // CASE 1 FOR INQUIRY OF BALANCE
								cout<<"\n[[[% BALANCE INQUIRY %]]]\n";
								cout<<"\n Your current balance is RS "<< balance1<< endl;
								continue;
							case 2: //CASE 2 IS FOR WITHDRAW
								cout<<"\n[[[% WITHDRAW %]]]\n";
								cout<<"Enter amount in Rupees: ";
								cin>>withdraw;
								balance1 = balance1 - withdraw; // USING THIS FORMULA TO GIVE THE REMAINING AMOUNT AFTER WITHDRAWING
								cout<<"You withdrew RS: "<< withdraw<< endl;
								cout<<"Your remaining balance is RS: "<< balance1<< endl;
								continue;
							case 3: //CASE 3 IN FOR DEPOSITING MONEY
								cout<<"\n[[[% DEPOSIT %]]]\n";
								cout<<"Enter amount in RS: ";
								cin>>deposit;
								balance1 = balance1 + deposit; //THIS FORMULA WILL GIVE THE TOTAL AMOUNT AFTER DEPOSITING
								cout<<"You deposited RS: "<< deposit<< endl;
								cout<<"Your new balance is RS: "<< balance1<< endl;
								continue;
							case 4: //CASE 4 IS FOR EXITING THE SYSTEM
								cout<<"\n***[[[% EXIT MODE %]]]***\n";
								system("cls"); //THIS IS USED TO CLEAR SCREEN
								break;
							default:
								cout<<"\n That is an invalid option Plz enter correct option: \n";
						}
						break;
					}
					break;
				} else if(i==2) {
					cout<<"\nCard is captured\n";
				} else
					cout<<"Pls try again!!!\n";
			}
		}
		if(pincode == 2222) {
			cout<<"\n WELCOME IRTAZA RASOOL KHAN \n";
			for (int i=0; i<3; i++) { //THIS FOR LOOP IS FOR ENTERING PASSWORD 2 TIMES IN CASE OF WRONG PASSWORD CARD WILL BE CAPTURED
				cout <<"ENTER PASSWORD:\n";
				cin>>password;
				double balance = 10000; //BALACE IN THIS BANK ACCCOUNT
				balance1=balance;
				if (password==6666) {
					for(int i=1; i<=10; i++) { //THIS FOR LOOP IS USED TO WITHDRAW AND DEPOSITE AMOUNT 9 times
						double withdraw, deposit;
						int option;
						cout<<"\n";
						if(i==1) {
							cout<<"Choose a Transaction:\n";
							cout<<"\n";
						}
						printstar('%',80); // this will print % 80 times
						cout<<"     MAIN SCREEN    \n";
						cout<<"[1] Inquire Balance \n";
						cout<<"[2] Withdraw \n";
						cout<<"[3] Deposit \n";
						cout<<"[4] Quit \n";
						cout<<"\n";
						cout<<"Enter Option:";
						cin>>option;

						switch(option) { // USING SWITCH STATEMENT FOR OPTIONS
							case 1: // CASE 1 FOR INQUIRY OF BALANCE
								cout<<"\n[[[% BALANCE INQUIRY %]]]\n";
								cout<<"\n Your current balance is RS: "<< balance1<< endl;
								continue;
							case 2: //CASE 2 IS FOR WITHDRAW
								cout<<"\n[[[% WITHDRAW %]]]\n";
								cout<<"Enter amount RS: ";
								cin>>withdraw;
								balance1 = balance1 - withdraw; // USING THIS FORMULA TO GIVE THE REMAINING AMOUNT AFTER WITHDRAWING
								cout<<"You withdrew RS: "<< withdraw<< endl;
								cout<<"Your remaining balance is RS: "<< balance1<< endl;
								continue;
							case 3: //CASE 3 IN FOR DEPOSITING MONEY
								cout<<"\n[[[% DEPOSIT %]]]\n";
								cout<<"Enter amount RS: ";
								cin>>deposit;
								balance1 = balance1 + deposit;  //THIS FORMULA WILL GIVE THE TOTAL AMOUNT AFTER DEPOSITING
								cout<<"You deposited RS"<< deposit<< endl;
								cout<<"Your new balance is RS: "<< balance1<< endl;
								continue;
							case 4: //CASE 4 IS FOR EXITING THE SYSTEM
								cout<<"\n***[[[EXIT MODE]]]***\n";
								break;
							default:
								cout<<"\n That is an invalid option Plz enter correct option:\n";
								continue;
						}
						break;
					}
					break;
				}
				if(i==2) {
					cout<<"\nCard is captured\n";
				} else
					cout<<"Pls try again!!!\n";
			}
		} else if(pincode == 3333) {
			cout<<"\n Wellcome SARMAD \n";
			for (int i=0; i<3; i++) { //THIS FOR LOOP IS FOR ENTERING PASSWORD 2 TIMES IN CASE OF WRONG PASSWORD CARD WILL BE CAPTURED
				cout <<"PLEASE ENTER PASSWORD:\n";
				cin>>password;
				double balance = 30000; //BALACE IN THIS BANK ACCCOUNT
				balance1=balance;
				if (password==7777) {
					for(int i=1; i<=10; i++) { //THIS FOR LOOP IS USED TO WITHDRAW AND DEPOSITE AMOUNT 9 times
						double withdraw, deposit;
						int option;
						cout<<"\n";
						if(i==1) {
							cout<<"Choose a Transaction:\n";
							cout<<"\n";
						}
						printstar('%',80); // this will print % 80 times
						cout<<"     MAIN SCREEN    \n";
						cout<<"[1] Inquire Balance \n";
						cout<<"[2] Withdraw \n";
						cout<<"[3] Deposit \n";
						cout<<"[4] Quit \n";
						cout<<"\n";
						cout<<"Enter Option:";
						cin>>option;
						switch(option) { // USING SWITCH STATEMENT FOR OPTIONS
							case 1: // CASE 1 FOR INQUIRY OF BALANCE
								cout<<"\n[[[% BALANCE INQUIRY %]]]\n";
								cout<<"\n Your current balance is RS: "<< balance1<< endl;
								continue;
							case 2: //CASE 2 IS FOR WITHDRAW
								cout<<"\n[[[% WITHDRAW %]]]\n";
								cout<<"Enter amount RS: ";
								cin>>withdraw;
								balance1 = balance1 - withdraw; // USING THIS FORMULA TO GIVE THE REMAINING AMOUNT AFTER WITHDRAWING
								cout<<"You withdrew RS: "<< withdraw<< endl;
								cout<<"Your remaining balance is RS: "<< balance1<< endl;
								continue;
							case 3: //CASE 3 IS FOR DEPOSITING MONEY
								cout<<"\n[[[% DEPOSIT %]]]\n";
								cout<<"Enter amount RS: ";
								cin>>deposit;
								balance1 = balance1 + deposit;  //THIS FORMULA WILL GIVE THE TOTAL AMOUNT AFTER DEPOSITING
								cout<<"You deposited RS"<< deposit<< endl;
								cout<<"Your new balance is RS: "<< balance1<< endl;
								continue;
							case 4: //CASE 4 IS FOR EXITING THE SYSTEM
								cout<<"\n***[[[EXIT MODE]]]***\n";
								break;
							default:
								cout<<"\n That is an invalid option Plz enter correct option:\n";
								continue;
						}
						break;
					}
					if(i==2) {
						cout<<"\nCard is captured\n";
					} else
						cout<<"Pls try again!!!\n";
				}
			}
		}
	}
}
void printstar(char ch , int n) {
	for(int i=1; i<=n; i++) {
		cout<< ch;
	}
	cout<<"\n";
}

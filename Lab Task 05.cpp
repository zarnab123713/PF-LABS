#include<iostream>
using namespace std;
int main()
{
	                     //PROGRAM 01
//	int n;
//	cout<<"\nEnter a number:";
//	cin>>n;
//	if(n>0)
//	cout<<"\nNumber is positive.";

                         //PROGRAM 02
//    int n;
//	cout<<"\n Enter a number:";
//	cin>>n;
//	if(n%2==0)
//	cout<<"\n Number is Even.";
	              
				          //PROGRAM 03
//	  int n1,n2,n3;
//	  cout<<"\nEnter first number:";
//	  cin>>n1;
//	  cout<<"\nEnter second number:";
//	  cin>>n2;
//	  cout<<"\nEnter third number:";
//	  cin>>n3;
//	  if(n1>n2&&n1>n3)
//	  cout<<"\nFirst number is the largest number.";
//	  if(n2>n3&&n2>n1)
//	  cout<<"\nSecond number is the largest number.";
//	  if(n3>n2&&n3>n1)
//	  cout<<"\nThird number is the largest number.";

      
	                       //PROGRAM 04
//	int marks;
//	cout<<"\nEnter the marks(out of 100):";
//	cin>>marks;
//	if(marks>=90)
//	cout<<"Your grade is 'A+''.";
//	if(marks>=80&&marks<=89)
//	cout<<"Your grade is 'A'.";
//	if(marks>=70&&marks<=79)
//	cout<<"Your grade is 'B'.";
//	if(marks>=60&&marks<=69)
//	cout<<"Your grade is 'C'.";
//	if(marks<60)
//	cout<<"You are Fail.So your grade is 'F'.";

                              //PROGRAM 05
                              
//    char  Color;
//	cout<<"        Traffic Signal System    ";
//	cout<<"\nEnter the color of traffic signal(R/G/Y):";
//	cin>>Color;
//	if(Color=='R'||Color=='r')
//	cout<<"\nRed=STOP";
//	if(Color=='G'||Color=='g')
//	cout<<"\nGreen=GO";
//	if(Color=='Y'||Color=='y')
//	cout<<"\nYELLOW=SLOW DOWN"; 
//	if(Color!='R'&&Color!='r'&&Color!='G'&&Color!='g'&&Color!='Y'&&Color!='y')
//	cout<<"Invalid Input.Please enter R,G, or Y."<<endl;
//

                             //PROGRAM 06
   char grade;
   int year_of_service;
   double basic_salaray=0.0,bonous=0.0,gross_salaray,tax=0.0,net_salaray;
   cout<<"Enter the grade of the employee(A,B,C):";
   cin>>grade;
   cout<<"Enter the years of service:";
   cin>>year_of_service;
   if(grade=='A'||grade=='a'){
   	basic_salaray=50000;
   }
   if(grade=='B'||grade=='b'){
   	basic_salaray=30000;
   }
   if(grade=='C'||grade=='c'){
   	basic_salaray=20000;
   }
   if(basic_salaray==0){
   	cout<<"Invalid grade entered!"<<endl;
   }   
   return 1;
   if(year_of_service>=10){
   	bonous=0.10*basic_salaray;
   }
   if(year_of_service>=5&&year_of_service<=9){
   	bonous=0.05*basic_salaray;
   }
   if(year_of_service<5){
   	bonous=0.0;
   }
   gross_salaray=basic_salaray+bonous;
   if(gross_salaray>40000){
   	tax=0.20*gross_salaray;
   }
   if(gross_salaray>=30000&&gross_salaray<=40000){
   	tax=0.10*gross_salaray;
   }
   if(gross_salaray<30000){
   	tax=0.0;
   }
   net_salaray=gross_salaray-tax;
   cout<<"\n---------Salaray Details---------"<<endl;
   cout<<"Basic Salaray:$"<<basic_salaray<<endl;
   cout<<"Bonous:$"<<bonous<<endl;
   cout<<"Gross Salaray:$"<<gross_salaray<<endl;
   cout<<"Tax Deducted:$"<<tax<<endl;
   cout<<"Net Salaray:$"<<net_salaray<<endl;
   
                            
		                       //PROGRAM  07
							   
//    double balance;
//	cout<<"Enter your account balance:$ ";
//	cin>>balance;
//	double withdrawalAmount;
//	cout<<"Enter your amount you want to withdrawalAmount:$";
//	cin>>withdrawalAmount;
//	if(withdrawalAmount<=balance){
//		balance-=withdrawalAmount;
//		cout<<"Withdrawal Successful!  Your ramaining balance is:$"<<balance<<endl;
//	}else{
//		cout<<"Insufficient balance."<<endl;
//	}
		
		
		                   //PROGRAM 08
						   
//	double salaray;
//	int yearsofExperience;
//	cout<<"Enter your salaray:";
//	cin>>salaray;
//	cout<<"Enter your year of work experience:";
//	cin>>yearsofExperience;
//	if(salaray>=25000)
//	cout<<"Your ara eligible for the loan."<<endl;
//	else if(salaray<25000&&yearsofExperience>5){
//		cout<<"Your are eligible for the loan due to your experience."<<endl;
//	}else{
//		cout<<"You are not eligible for the loan."<<endl;
//	}

                     					   					   					  					   					         
	return 0;
}

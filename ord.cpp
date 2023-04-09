#include <iostream>
#include <iomanip>


using namespace std;


int main()
{
char choice='Y';

int order = 1;

int num1=0, num2=0, num3=0, num4=0, num5=0;
int num_customers;
int flag=0;
const double UnitPrice1= 100, UnitPrice2= 180,UnitPrice3= 200, UnitPrice4= 210, UnitPrice5= 50;
double AmountofSale1=0, AmountofSale2=0, AmountofSale3=0, AmountofSale4=0, AmountofSale5=0;


cout<<":::::::::::::::::::MENU:::::::::::::::::::\n\n"
     <<"\n Item[1] Potato Chilly		            Rs.100 <===\n"
     <<"\n Item[2] Paneer Butter Masala 		    Rs.180 <===\n"
	 <<"\n Item[3] Butter Chicken	                    Rs.200 <===\n"
	 <<"\n Item[4] Chicken Tikka Masala		    Rs.210 <===\n"
	 <<"\n Item[5] Butter Naan		            Rs.50  <===\n";
	 

         
         
while (order != flag)
{
cout<<"\nFrom The List Of Food Items, What Would You Like?(Enter 0 to end your order):\n";
cin>>order;
switch(order)
			{
                
                case 0:
                break;
                
				case 1:
                     
                cout<<"\nHow Many Potato Chilly Would You Like To Order:\n";
                               cin>>num1;
                
                AmountofSale1 = UnitPrice1 * num1;
                break;
                
                
          
                 
				case 2: 
                cout<<"\nHow Many Paneer Butter Masala Would You Like To Order:\n";
				               cin>>num2;
               
                AmountofSale2= UnitPrice2 * num2;
                break;
                
                
                case 3: 
                cout<<"\nHow Many Butter Chicken Would You Like To Order:\n";
                                  cin>>num3;
                
                AmountofSale3= UnitPrice3 * num3;
                break;
                
                
                 
                case 4: 
                cout<<"\nHow Many Chicken Tikka Masala Would You Like To Order:\n";
                                cin>>num4;
                
                AmountofSale4= UnitPrice4 * num4;
                break;
                
                
                
                case 5: 
                cout<<"\nHow Many Butter Naan You Like To Order:\n";
                                cin>>num5;
                                
                
                AmountofSale5= UnitPrice5 * num5; 
                break;
                
                
                default: cout<<"Please Choose A Valid Item From Our List\n";
                }
                

{       

cout<<"You Have Ordered:\n\n";
cout<<"===========================================================\n";

cout<<left<<setw(15)<<"ITEM"<<right<<setw(15)<<"QUANTITY"<<right<<setw(20)<<"UNIT PRICE"<<right<<setw(25)<<"AMOUNT OF SALE\n";

cout<<"===========================================================";

cout<<"\nPotato Chilly:\t"<<right<<setw(10)<< num1 <<setw(19)<<right<< UnitPrice1 <<setw(20) <<right<< AmountofSale1<<endl;

cout<<"\nPaneer Butter Masala:\t"<<right<<setw(2)<< num2 <<setw(19)<<right<< UnitPrice2 <<setw(20) <<right<< AmountofSale2<<endl<<endl;

cout<<"\nButter Chicken:\t"<<right<<setw(10)<< num3 <<setw(19)<<right<< UnitPrice3 <<setw(20) <<right<< AmountofSale3<<endl<<endl;

cout<<"\nChicken Butter Masala:\t"<<right<<setw(2)<< num4 <<setw(19)<<right<< UnitPrice4 <<setw(20) <<right<< AmountofSale4<<endl<<endl;

cout<<"\nButter Naan:\t"<<right<<setw(10)<< num5 <<setw(19)<<right<< UnitPrice5 <<setw(20) <<right<< AmountofSale5<<endl<<endl;
}
              }
double Bill = AmountofSale1 + AmountofSale2 + AmountofSale3 + AmountofSale4 + AmountofSale5;
cout << "Total Bill: Rs." << Bill << endl << endl; 
system("PAUSE");
return 0;
}

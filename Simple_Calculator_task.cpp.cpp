
/*										<-------------[[TASK------02]]------------->
								---------------**---------------**-----------------**-----------------
														SIMPLE CALCULATOR
								---------------**---------------**-----------------**-----------------
Develop a calculator program that performs basic arithmetic operations such as addition, subtraction, multiplication, and division. 
Allow the user to input two numbers and choose an operation to perform.*/

#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

class Simple_Calculator{
	private:
    int number_1;
    int number_2;
    char operation;
	public:
    void Input();
    void Perform_Arithmetic_Operation();
    void Output();
};

void Simple_Calculator::Input() {							//Function to get input from user
    cout<<"\t\t\t\t\tEnter First number: "; cin>>number_1;
    cout<<"\t\t\t\t\tEnter Operator which you want to perform ('+' ,'-', '*', '/'): "; cin>>operation;
    cout<<"\t\t\t\t\tEnter Second number: "; cin>>number_2;
}
void Simple_Calculator::Perform_Arithmetic_Operation() {			//Function to perform operation and display result 
    switch(operation){
        case '+': cout<<"\t\t\t\t\tAddition ("<<number_1<<" + "<<number_2<<") is: "<<number_1+number_2<<endl<<endl;break;
        case '-': cout<<"\t\t\t\t\tSubtraction ("<<number_1<<" - "<<number_2<<") is: "<<number_1-number_2<<endl<<endl;break;
        case '*': cout<<"\t\t\t\t\tMultiplication ("<<number_1<<" * "<<number_2<<") is: "<<number_1*number_2<<endl<<endl;break;
        case '/': cout<<"\t\t\t\t\tDivision ("<<number_1<<" / "<<number_2<<") is: "<<(float)number_1/number_2<<endl<<endl;break;
        default: cout<<"\t\t\t\t\tInvalid Operator"<<endl<<endl;
    }
}
void Simple_Calculator::Output(){				
    char key;
    do {
        Input();
        Perform_Arithmetic_Operation();
        cout<<"Do you want to continue? --))> press (y/n):";
        cin>>key;
        cout<<endl<<endl;
    } while(key == 'y');
    
    cout<<"\n\t\t\t\t\t\t\t\t\t\t(----THE END <<.......>>> Thank You)";
}
void Intro(){								// Intro function to display first_page of Introduction.

	cout<<"\n\n\n\t\t\t\t\t\t                        CALCULATOR                  "<<endl;
    cout<<"\t\t\t\t============================================================================================"<<endl;
	cout<<"\t\t\t\t\t--------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t->\t            WELCOME TO SIMPLE CALCULATOR SYSTEM                "<<endl;
    cout<<"\t\t\t\t\t->\t            MADE BY -> AHSAN ALI (ID==CS11WX154872)                 "<<endl;
    cout<<"\t\t\t\t\t->\t             PRESENTED TO CODSOFT                                 "<<endl;
     cout<<"\t\t\t\t============================================================================================"<<endl;
    cout<<"\t\t\t\t\t__________________________________________________________________________"<<endl;
    cout<<"Press any key to start the system......!";
    getch();
    system("cls");
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t-------***-----------Calculator-------***-----------\n\n";
}

int main(){
    system ("color B0");
    Intro();
    Simple_Calculator calc;
    calc.Output();
    return 0;
}

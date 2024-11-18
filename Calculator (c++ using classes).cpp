 /*
#include <iostream>
using namespace std;

class Calculator{
    public:

    float myNum1;
    float myNum2;

    int operation;
    char choice;

    void menu();


};

    void menu(){

        cout <<"Operations Menu.\n";
        cout <<"1. Addition\n";
        cout <<"2. Subtraction\n";
        cout <<"3. Multiplication\n";
        cout <<"4. Division\n\n";
        cout <<"5. Quit Program\n";


        char choice;
        do {

    Calculator menu;
        cout <<"Go to menu: ";
        cin >>choice;
        } while (choice != 'q' && choice != 'Q');



    Calculator.operation;

        cout <<"Enter the number of your operation to be done: ";
        cin >>opeartion;


    Calculator Numbers;

        cout <<"Enter a number: ";
        cin >>Numbers.myNum1;
        cout <<"Enter another number: ";
        cin >>Numbers.myNum2;




        switch(operation.myOperation){
        case '1':
            cout <<Numbers.myNum1 + Numbers.myNum2;
            break;
        case '2':
            cout <<Numbers.myNum1 - Numbers.myNum2;
            break;
        case '4':
            cout <<Numbers.myNum1 / Numbers.myNum2;
            break;
        case '3':
            cout <<Numbers.myNum1 * Numbers.myNum2;
            break;
        case 'q';
        case 'Q';
        default:
            cout <<"Incorrect operator";
        }

    }


int main(){

Calculator operation;

    int choice;
    Calculator menu;
    do{
        cout <<"Go to menu: ";
        cin >>Calculator::menu;
    }while(operation.choice=='y' || operation.choice =='Y');

}



/*    Calculator Numbers;
    Calculator sign;

    cout <<"Enter a number: ";
    cin >>Numbers.myNum1;
    cout <<"Enter another number: ";
    cin >>Numbers.myNum2;

    cout <<"\n" <<"Enter a Math opearator: ";
    cin >>sign.myOperator;

    switch(sign.myOperator){
        case '+':
            cout <<Numbers.myNum1 + Numbers.myNum2;
            break;
        case '-':
            cout <<Numbers.myNum1 - Numbers.myNum2;
            break;
        case '/':
            cout <<Numbers.myNum1 / Numbers.myNum2;
            break;
        case '*':
            cout <<Numbers.myNum1 * Numbers.myNum2;
            break;
        default:
            cout <<"Incorrect operator";
        }




}
*/


/*#include <iostream>
using namespace std;

class Calculator{
    public:

        float myNum1;
        float myNum2;
        int operation;

    void menu(){


            cout << "\n\nOperations Menu.\n";
            cout << "1. Addition\n";
            cout << "2. Subtraction\n";
            cout << "3. Multiplication\n";
            cout << "4. Division\n";
            cout << "5. Quit Program\n\n";
            cout << "Enter the number of your operation to be done: ";

            cin >> operation;


            cout <<"Enter a number: ";
            cin >>myNum1;
            cout <<"Enter another number: ";
            cin >>myNum2;

            switch(operation){
                case 1:
                    cout <<"Result is: " <<myNum1 + myNum2;
                    break;
                case 2:
                    cout <<"Result: " << myNum1 - myNum2;
                    break;
                case 3:
                    cout <<"Result: " << myNum1 * myNum2;
                    break;
                case 4:
                    cout << "Result: " << myNum1 / myNum2;
                    break;
                //case 5:return choice;
                default:
                    cout <<"Incorrect operator\n";
            }
    }
};

int main(){
    Calculator operations;
    operations.menu();

    /*do{
        operations.menu();
    }while (choice=='y' || choice=='Y')
    *\
    return 0;
}
*/


/*
#include <iostream>
using namespace std;

class Calculator{
    public:

    float myNum1;
    float myNum2;

    int operation;


    void Addition(){
        cout <<"Result is: ";
        cout <<myNum1 + myNum2;
    }

    void Subtraction(){
        cout <<"Result is: ";
        cout <<myNum1 - myNum2;
    }

     void Division(){
        cout <<"Result is: ";
        cout <<myNum1 / myNum2;
     }

     void Multiplication(){
        cout <<"Result is: ";
        cout <<myNum1 * myNum2;
     }


};

int main(){

Calculator myOperation;

int operation;

    cout << "\n\n\nOperations Menu.\n\n";

    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Repeat Program\n";
    cout << "6. Quit program\n\n";


    cout << "Enter the number of your operation to be done: ";
    cin >>operation;


    cout <<"Enter your first number: ";
    cin >>myOperation.myNum1;
    cout <<"Enter your second number: ";
    cin >>myOperation.myNum2;
    cout <<"\n";


    do{
    switch (operation){
        case 1:
            myOperation.Addition();
            break;
        case 2:
            myOperation.Subtraction();
            break;
        case 3:
            myOperation.Multiplication();
            break;
        case 4:
            myOperation.Division();
            break;
        case 5:
            return main();
            break;

        default:
            cout <<"Incorrect operator";
    }
    }while(operation=5);

return 0;
}
*/




#include <iostream>
using namespace std;

class Calculator{
    public:

        float myNum1;
        float myNum2;

        int choice;


    float Addition(){
        cout <<"The sum of your numbers is: ";
        return myNum1 + myNum2;
    }
    float Subtraction(){
        cout <<"The difference of your numbers is: ";
        return myNum1 - myNum2;
    }
     float Division (){
         if(myNum1==0 || myNum2==0){
            cout<<"\nError: Division by zero is undefined!";
         }else{
        cout <<"The quotient of your numbers is: ";
        return myNum1 / myNum2;
         }
    }
    float Multiplication (){
        cout <<"The product of your numbers is: ";
        return myNum1 * myNum2;
    }
};


int main(){
  Calculator myOperations;


  do{
    cout <<" \n\n\nOperations Menu\n\n";

    cout <<"1. Addition\n";
    cout <<"2. Subtraction\n";
    cout <<"3. Division\n";
    cout <<"4. Multiplication\n";
    cout <<"5. Quit operations\n\n";

    cout <<"Make your choice: ";
    cin >>myOperations.choice;

            if(myOperations.choice==5){
                return 0;
            }else{

            cout <<"\nEnter your first number: ";
            cin >>myOperations.myNum1;
            cout <<"Enter your second number: ";
            cin >>myOperations.myNum2;




    switch(myOperations.choice){
        case 1:
            cout <<myOperations.Addition ();
            break;
        case 2:
            cout <<myOperations.Subtraction();
            break;
        case 3:
            cout <<myOperations.Division();
            break;
        case 4:
            cout <<myOperations.Multiplication();
            break;
        default:
            cout <<"Invalid operation";
            break;
    }
    }



    }while(1);


return 0;
}









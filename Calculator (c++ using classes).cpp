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









Q=1
/*
#include <iostream>
using namespace std;
void isPrime(int n) {
   int i, flag = 0;
   for(i=2; i<=n/2; ++i) {
      if(n%i==0) {
         flag=1;
         break;
      }
   }
   if (flag==0)
   cout<<n<<" is a prime number"<<endl;
   else
   cout<<n<<" is not a prime number"<<endl;
}
int main() {
   isPrime(17);
   isPrime(20);
   return 0;
}
*/
Q=2
/*

// CPP program to largest and smallest digit of a number
#include <bits/stdc++.h>
using namespace std;
 
// Function to the largest and smallest digit of a number
void Digits(int n)
{
    int largest = 0;
    int smallest = 9;
 
    while (n) {
        int r = n % 10;
 
        // Find the largest digit
        largest = max(r, largest);
 
        // Find the smallest digit
        smallest = min(r, smallest);
 
        n = n / 10;
    }
    cout << largest << " " << smallest;
}
 
// Driver code
int main()
{
    int n = 2346;
 
    // Function call
    Digits(n);
 
    return 0;
}*/
Q=3
/*
// CPP program to illustrate
// power function
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    double x = 6.1, y = 4.8;
 
    // Storing the answer in result.
    double result = pow(x, y);
 
    // printing the result upto 2
    // decimal place
    cout << fixed << setprecision(2) << result << endl;
 
    return 0;
}*/
Q=4
/*
#include
using namespace std;
 
// Function to print the Pascal's Triangle
void print_pascal(int row_num){
 
    // Loop to print each row
    for(int n = 1; n <= row_num; n++){
 
        // Loop to print spaces for triangular display
        for(int r = 1; r < row_num-n+1; r++)
            cout<<"  ";
 
        // Loop to print values using the Combinations formula
        int val = 1;
        for(int r = 1; r <= n; r++){
            cout<<val<<"   ";
             
            val = val * (n - r)/r;
        }
        cout<<endl;
    }
}
 
int main(){
 
    int row_num = 8;
    print_pascal(row_num);
 
    return 1;
}
*/
Q=5
/*
#include <bits/stdc++.h>
using namespace std;
 
// A utility function that returns true if x is perfect
// square
bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s * s == x);
}
 
// Returns true if n is a Fibonacci Number, else false
bool isFibonacci(int n)
{
    // n is Fibonacci if one of 5*n*n + 4 or 5*n*n - 4 or
    // both is a perfect square
    return isPerfectSquare(5 * n * n + 4)
           || isPerfectSquare(5 * n * n - 4);
}
 
// A utility function to test above functions
int main()
{
    for (int i = 1; i <= 10; i++)
        isFibonacci(i)
            ? cout << i << " is a Fibonacci Number \n"
            : cout << i << " is a not Fibonacci Number \n";
    return 0;
}*/
Q=6
/*
#include<iostream>
using namespace std;
void swap (int &num1, int &num2) //&num1 and &bnum2 are Reference variables
{
        int temp;
        temp=num1;
        num1=num2;
        num2=temp;
}
int main()
{
        int a=5,b=10;
        cout<<"\n Before swapping"<<"\n A = "<<a<<"\n B = "<<b<<endl;
        swap(a,b);
        cout<<"\n After swapping"<<"\n A = "<<a<<"\n B = "<<b<<endl;
        return 0;
}*/
Q=7
/*
#include <iostream>
using namespace std;
 
// A function with default arguments,
// it can be called with
// 2 arguments or 3 arguments or 4 arguments.
int sum(int x, int y, int z = 0, int w = 0) //assigning default values to z,w as 0
{
    return (x + y + z + w);
}
 
// Driver Code
int main()
{
    // Statement 1
    cout << sum(10, 15) << endl;
   
    // Statement 2
    cout << sum(10, 15, 25) << endl;
   
    // Statement 3
    cout << sum(10, 15, 25, 30) << endl;
    return 0;
}*/
Q=8
/*
#include<iostream>
#include<cstdlib>
using namespace std;

float area(float r)
{
        return(3.14 * r * r);
}
float area(float b,float h)
{
        return(0.5 * b * h);
}
float area(float l,float b)
{
        return (l * b);
}
int main()
{
        float b,h,r,l;
        int ch;

        do
        {
                cout<<"\n\n *****Menu***** \n";
                cout<<"\n 1. Area of Circle";
                cout<<"\n 2. Area of Triangle";
                cout<<"\n 3. Area of Rectangle";
                cout<<"\n 4. Exit";
                cout<<"\n\n Enter Your Choice : ";
                cin>>ch;
                switch(ch)
                {
                        case 1:
                        {
                                cout<<"\n Enter the Radius of Circle : ";
                                cin>>r;
                                cout<<"\n Area of Circle : "<<area(r);
                                break;
                        }
                        case 2:
                        {
                                cout<<"\n Enter the Base & Height of Triangle : ";
                                cin>>b>>h;
                                cout<<"\n Area of Triangle : "<<area(b,h);
                                break;
                        }
                        case 3:
                        {
                                cout<<"\n Enter the Length & Bredth of Rectangle : ";
                                cin>>l>>b;
                                cout<<"\n Area of Rectangle : "<<area(l,b);
                                break;
                        }
                        case 4:
                                exit(0);
                        default:
                                cout<<"\n Invalid Choice... ";
                }
        }while(ch!=4);
        return 0;
}*/

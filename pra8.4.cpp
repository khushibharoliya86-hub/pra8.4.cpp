//partical 8.4
#include<iostream>
using namespace std;
//display 1 to n fun defination
void displayNum(int N)
{
    if(N==0)
    {
        return ;
    }
    displayNum(N-1);
    cout<<N<<"  ";
}
//display n to 1 fun defination
void displayNumber(int N)
{
    if(N==0)
    {
        return ;
    }
    cout<<N<<"  ";
    displayNumber(N-1);
}

//reverse number
int reverseNum(int num,int rev=0){

if(num==0){
    return rev;
}

return reverseNum(num/10,(rev*10)+(num%10));

}
//sum of digit
int sumOfDigit(int num){
if(num==0)
    return 0;
return(num%10)+sumOfDigit(num/10);
}

//decimal to binary
void binary(int decimalNum){
if(decimalNum==0)
    return ;
binary(decimalNum/2);
cout<<decimalNum%2;
}

int main()
{
    int N,num,decimalNum;
    //PART A-ECURSIVE TRAVERSAL...................
    cout<<"Enter Num:";
    cin>>N;
    //display 1 to n fun call
    displayNum(N);
    cout<<endl;

    //display n to 1 fun call
    displayNumber(N);
    cout<<endl;

    //PART B-RECURSIVE NUMBER PROCESSING
    cout<<"Enter Number for reversed:";
    cin>>num;
    cout<<"Reverse Num:"<<reverseNum(num);
    cout<<endl;
    cout<<"Sum Of Digit:"<<sumOfDigit(num);
    cout<<endl;

    //PART C-RECURSIVE NUMBER CONVERSION
    cout<<"Enter Decimal number:";
    cin>>decimalNum;
    cout<<"Binary Number of  "<<decimalNum<<": ";
    binary(decimalNum);
    cout<<endl<<endl;

    //PART D-COMPARATIVE ANALYSIS
    cout<<"-------Comparative Analysis-----------\n\n";
    cout<<"->> Programe readability:\n";
    cout<<"    *Recursive:  Can be harder than iterative.because in this have genaral case and base case.\n";
    cout<<"    *Iterative:  Straight forward and sequential.Any one can reading code easily because of the Loop Structure.\n\n";
    cout<<"->> Executiion flow:\n";
    cout<<"    *Recursive:   High Memory usage\n";
    cout<<"    *Iterative:   Comparison to recursion low memory usage\n\n";
    cout<<"->> Number of Function Call:\n";
    cout<<"    *Recursive:    n function call\n";
    cout<<"    *Iterative:    Only one function Require\n\n";
    cout<<"->> Ease of implementation\n";
    cout<<"    *Recursive:     Easy to Write\n";
    cout<<"    *Iterative:     Easy to Debug\n\n";
    cout<<"--------------------------------------------\n";


    return 0;
}



#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
/*                
int a=20;
cout<<a; // gives 20

how does the compiler know that num has 20 value?
Actually, this is where the symbol table comes. Compier just know that there is an address where 20 is stored, 
It is the symbol table that maps the name "a" with the adress holding the value "20" 


Always initilize a pointer with null value to avoid garbage value

https://www.geeksforgeeks.org/symbol-table-compiler/
*/


/*
int num = 5; //suppose address is 100
int *p=&num;

cout<<num<<endl;    // prints 5
cout<<*p<<endl;     // prints 5
cout<<p<<endl;      // prints 100

//https://www.geeksforgeeks.org/pointers-in-c-and-c-set-1-introduction-arithmetic-and-array/

cout<<sizeof(p)<<endl; //4
cout<<sizeof(*p)<<endl;  //4 , it may depend upon compiler it may be seen 8 bytes in 64 bit system
*/

/*
int b=10;
int *ptrb=&b;

//Pass by value , makes a 2nd copy
int c=b;
cout<<"before incrementing : "<<c<<endl;  //10
c++;
cout<<"After incrementing : "<<c<<endl;   //10


//pass by reference
cout<<"before incrementing : "<<*ptrb<<endl;  //10
(*ptrb)++;
cout<<"After incrementing : "<<*ptrb<<endl;   //11


//copying a pointer
int a=10;
int *ptra=&a;
int *ptrb=ptra;

//pointr arithmatic
cout<<"1st pointer  "<<ptra<<endl; //10
cout<<"2nd pointer  "<<*ptrb<<endl;  //10
//https://www.geeksforgeeks.org/pointers-in-c-and-c-set-1-introduction-arithmetic-and-array/
cout<<"1st pointer  "<<(*ptra)++<<endl; //10
cout<<"2nd pointer  "<<*ptrb<<endl; //11

//Array
int a[10]={4,3,7,2,8,3,7,10,11};

cout<<"addres of array :"<<a<<endl; //address
cout<<"addres of array :"<<&a[0]<<endl;


cout<<"fiest element of array :"<<*a<<endl;//4
cout<<"value :"<<*a + 2 <<endl; // 6
cout<<"value :"<<*(a+2)<<endl;  // 7
cout<<"value :"<<*(a+1)<<endl;  //3

cout<<"value at 2nd index:"<<a[2]<<endl;  //7
cout<<"value at 2nd index:"<<*(a+2)<<endl;  //7

//      arr[i]=  *(arr + i)
//if we write i[arr] = *(i + arr)
cout<<"value at 3rd index:"<<3[a]<<endl;  //2
cout<<"value at 3rd index:"<<*(3+a)<<endl;  //2

//              Differences of pointer
int a[10];
int *p=&a[0];
cout<<"value :"<<sizeof(a)<<endl;  //40
cout<<"value :"<<sizeof(p)<<endl;  //4 or 8  this is address, pointer size aybe 8 depends uppn compiler
cout<<"value :"<<sizeof(*p)<<endl;  //4 , value present at the address


*/
  int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";


    cout << arr << endl;
    //attention here
    cout << ch << endl;
    
    char *c = &ch[0];
    //prints entire string
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;

    cout << p << endl;
return 0;

}

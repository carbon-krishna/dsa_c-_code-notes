#include <iostream>
#include <cstring> // header file for char arrays inbuilt fxn
#include<string>
using namespace std;

// strlen --> get string length 
// strcmp -->  Compare two strings (function)
// strchr -->  Locate first occurrence of character in string (function)
// strrchr --> Locate last occurrence of character in string (function)
// strspn -->  Get span of character set in string (function)
// strcat -->  concatenate strings

void Replace_by_X(char arr[], int size){
    for(int i=0;i<size;i++){
        if(arr[i]==' '){
            arr[i] = 'X';
        }
    }
}

void ConvertLCtoUC(char arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i] >= 'a' && arr[i] <= 'z'){
            arr[i] = arr[i] - 'a' + 'A' ;
        }
        // if lowercase convert to uppercase
        // if already a uppercase then ignore
    }
}

void ConvertUCtoLC(char arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i] >= 'A' && arr[i] <= 'Z'){
            arr[i] = arr[i] - 'A' + 'a' ;
        }
        // if uppercase convert to lowercase
        // if already a lowercase then ignore
    }
}

void reverseArray(char arr[],int size){
    int s=0;
    int e=strlen(arr)-1; // main yaha galti karta main e=size-1 karta; size toh 50 ho saktha jo size paas kare hum

    // strlen tells the array size befor null point
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

bool CheckPalindrome(char arr[],int size){
    int s=0;
    int e=strlen(arr)-1; // 2pointer approach
    while(s<=e){
        if(arr[s] != arr[e]) return false;
        if(arr[s] = arr[e]){
            s++;
            e--;
        }
    }
    return true;
}

int getLength(char arr[],int size){
    int count = 0;
    while(arr[count] != '\0'){
        count++;
    }
    return count;
}

int main(){
    // char arr[6];
    // cin >> arr; another way to take input
    // arr[0] = 'K';
    // arr[1] = 'R';
    // arr[2] = 'I';
    // arr[3] = 'S';
    // arr[4] = ' ';
    // for(int i=0;i<4;i++){
    //     cout<<arr[i];
    // }
    // int val = (int) arr[4] ;
    // cout<<val<<endl; // ascii value of space 
    // int value = (int) arr[5] ;
    // cout<< value; // ascii value of null character or terminating character

    // char arr[5] = "yoYO"; // multiple character double quote
    // cin>>arr;
    // char array[4];
    // array[0] = 'Y'; // single character single quote
    // char arr[50];
    // cin.getline(arr,50); // you can store char like LOVE_BABBAR
    // cout<<arr; // by default delimeter is enter
    // cin.getline(arr,size,delimeter) you can select delimeter /n , /t , or any custom letter
    // char arr[100];
    // cin>>arr;
    // // cin.getline(arr,100,'X');
    // // cout<<arr<<endl;
    // // golden rule when pass an array in fxn uska size bhi paas karo saath mein
    // cout<<" length of arr :- " << getLength(arr,100)<<endl;
    // cout<<strlen(arr)<<endl;

    // char arr[50];
    // cin.getline(arr,50);
    // Replace_by_X(arr,50);
    // cout<<arr<<endl;

    // char arr[50];
    // cout<<"ENTER the Value :";
    // cin.getline(arr,50);

    // ConvertLCtoUC(arr,50);

    // cout<<"output : " <<arr<<endl;

    // cout<<"ENTER the Value :";
    // cin.getline(arr,50);

    // ConvertUCtoLC(arr,50);

    // cout<<"output : " <<arr<<endl;

    // bool ans = CheckPalindrome(arr,50);
    // cout<<ans;
     
    string s;
    // string name = "babbar";
    // string FullName = "LOVE BABBAR";
    // cout<<name<<endl;
    // cout<<FullName<<endl;
    // cin>>s; // same problem as before in char array

    // getline(cin,s);
    // cout<<"output: "<<s<<endl;
    // cout<<"length: "<<s.length()<<endl;
    // s.push_back('X');
    // cout<<"output: "<<s<<endl;
    // cout<<"length: "<<s.length()<<endl;
    // cout<<s;

    // string name = "abcdefghij";
    // cout

    // return 0;
}
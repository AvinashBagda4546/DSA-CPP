// #include <iostream>

// using namespace std;

// int main() {
//     int a = 0;
//     cout<< sizeof(int);
//     float x = 0.1;
//     cout << sizeof(float);
//     double y = 10;
//     cout << sizeof(double);
//     char z = 2;
//     cout << sizeof(char) ;
//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main() {
//     int n1, n2, n3;
//     cout << "Enter three numbers: ";
//     cin >> n1 >> n2 >> n3;
//     if(n1>=n2 && n1>=n3){
//         cout << n1 << " is the largest number";
//     }
//     else if(n2>=n1 && n2>=n3){
//         cout << n2 << " is the largest number";
//     }
//     else{
//         cout << n3 << " is the largest number";
//     }
// }

// #include <iostream>

// using namespace std;

// int main() {
//     int a = 100;
//     int b = 20;
//     int c = 30;

//     int choose;

//     cout << "choose coofe" << endl;
//     cout << "1. a" << endl;
//     cout << "2. b" << endl;
//     cout << "3. c" << endl;

//     cin >> choose;

//    int totalprice = 0;
//     float GST = 0.18;
//     switch(choose){
//         case 1:
//             cout << a << endl;
//              totalprice=a*(1+GST);
//             break;
//         case 2:
//             cout << b << endl;
//              totalprice=b*(1+GST);
//             break;
//         case 3:
//             cout << c << endl;
//              totalprice=c*(1+GST);
//             break;
//         default:
//             cout << "error" << endl;
//             break;
//     }

//     cout<<"total price with GST :"<<totalprice<<endl;

// }

// =========================================
// #include <iostream>
// using namespace std;
// int main(){
//     int NumberOfItem;
// cout<<"Enter the number of Coffy that you want to add: ";
// cin>>NumberOfItem;
//     string ArrofItems [NumberOfItem] ;
//     int ArrofPrice [NumberOfItem];

//     for (int i = 0; i < NumberOfItem; i++)
//     {
//         cout<<"Enter Your "<<i+1<<" Coffy Name ";
//         cin>>ArrofItems[i];
//         cout<<"Enter Your "<<ArrofItems[i]<<" Coffy price";
//         cin>>ArrofPrice[i];
//     }
//     int ChoseOption;

//     for (int i = 0; i < NumberOfItem; i++)
//     {
//         cout<<i+1<< ArrofItems[i]<<endl;
//     }
//     cout<<"Chooes the Coffy: ";
//     cin>>ChoseOption;
// float GST = (ArrofPrice[ChoseOption]*18)/100;

//     cout<<"The Price Of The"<<ArrofItems[ChoseOption-1]<< " is "<<(ArrofPrice[ChoseOption-1])+GST;

// }

// -----------------+++++++++++++++++++++++++++++++++++

// #include <iostream>
// using namespace std;

// bool isprime(int n){
//     for(int i=2;i<n; i++){
//         if(n%i==0){
//             return false;
//             }
//     }
//     return true;
// }
// int main (){
//     int n;
//     cin>>n;

//     if(isprime(n)){
//         cout<<"it is a prime number"<<endl;
//     }
//     else{
//         cout<<"it is a not prime number"<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int length;
//     cout<<"Enter the length of Array : ";
//         cin>>length;
//     while(length<5){
//              cout<<"Enter the length of Array ( Above 5 ): ";
//              cin>>length;
//     }
//     int arr[length]={};
//     for(int i=0;i<length;i++){
//         cin>>arr[i];
//     }
//     int last=length-1;
//     cout<<"the values is "<<endl;
//     for(int i=0;i<length/2+1;i++){
//         cout<<arr[i]<<endl;
//         cout<<arr[last]<<endl;
//         last--;
//     }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){

//   int arr[8]={10,20,30,40,50,60,70,80};
//   int size=8;
//   int start = 0;
//   int end=size-1;

//   while(true){
//     if(start>end){
//       break;

//     }else{
//       cout<<arr[start];
//       cout<<arr[end]<<endl;
//       start++;
//       end--;
//       }
// }

// }

#include <iostream>
#include <vector>
using namespace std;

int findUniquevalue(vector<int>values){
  int num = 0;
  for(int i= 0; i < values.size();i++){
    num = num^values[i];
  }
  return num ;
}

int main()
{

  vector<int>values = {1, 1, 5, 4, 4};
  int UniqueVal = findUniquevalue(values);
    
    cout<<"Unique value"<<UniqueVal<<endl;
}

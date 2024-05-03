// #include <iostream>
// using namespace std;

//  int main()
//  {
//     float hindi, english, maths, gk, sst, totalMarks;
//     cout << "Enter your Hindi marks : ";
//     cin >> hindi;

//     cout << "Enter your English marks : ";
//     cin >> english;

//     cout << "Enter your Maths marks : ";
//     cin>>maths;
     
//     cout << "Enter your GK marks : ";
//     cin >> gk;

//     cout << "Enter your SST marks : ";
//     cin >> sst;
//     totalMarks = hindi + english + maths + gk + sst;

//     cout << "Your Total Marks is : " << totalMarks << endl;

//     float pers = (totalMarks / 500) * 100;

//     cout << "Your Total Percentage is : "<<pers;
// }




// #include <iostream>
// using namespace std;
// int main() {
//     float arr[6]={};
//     cout << "Enter your science marks : ";
//     cin >>arr[0];

//     cout << "Enter your sst marks : ";
//     cin >> arr[1];

//     cout << "Enter your sanskrit marks : ";
//     cin>>arr[2];
     
//     cout << "Enter your computer marks : ";
//     cin >> arr[3];

//     cout << "Enter your english marks : ";
//     cin >> arr[4];
    
//     float totalMarks = arr[0] + arr[1] + arr[2]+ arr[3]+arr[4];

//     cout << "Your Total Marks is : " << totalMarks << endl;
//      float pers = (totalMarks / 500) * 100;

//     cout << "Your Total Percentage is : " << pers << endl;



// }
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter your mark";
    cin>>a;
    if(a>=90 && a<=100){
        cout<<"A";
    }
    else if(a>=80 && a<=89){
        cout<<"B";
    }
    else if(a>=70 && a<=79){
        cout<<"C";
    }
    else if(a>=60 && a<=69){
        cout<<"D";
    }
    else if(a>=50 && a<=59){
        cout<<"E";
    }
    else{
        cout<<"F";
    }
    return 0;
}
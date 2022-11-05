#include <iostream>
using namespace std;

int main()
{
  //there can be at most 10 problems in each computer. -> 10
  // Input starts with an integer T (≤ 25), denoting the number of test cases.

    int T,n; // n is input number
    int zero =0;
    cin >> T;
    for(int i=1;i<=T;i++){
         cin>>n;

           if(n<10){
             cout<<zero<<" "<<n<<endl;
           }
           else{
              cout<<n-10<<" "<<n-(n-10)<<endl;
           }

    }


    return 0;
}

#include<iostream>
using namespace std;
int printarray(int arr[],int n, int i ){
    if(i>=n){
    return 0;
    }
     cout<< arr[i]<<" ->";
     printarray(arr,n,++i);

}
int main(){
    int arr[4]={10,20,30,40};
    int n=4;
    int i=0;
    printarray(arr,n,i);
}


#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[3]={10,60,0};
    int n=3;
    int i=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];

        }
    }
    cout<<"maximum element is"<<maxi<<endl;


}

#include<iostream>

using namespace std;
bool checkkey(int str,int i,int n,char key){
    if(i>=n){
        // base case
        return false;
    }
    if(str[i] == key)
        return true;

    
    bool ans=checkkey(str,i+1,n,key);
    return ans;
}
int main(){
    string str="esharawat";
    int n=str.length();
    char key='r';
    int i=0;
   bool ans=checkkey(str,i,n,key);
    cout<<"answer is"<< ans<<endl;

}

#include <iostream>
#include<vector>
using namespace std;

void printDigits(int n) {
        //base case
        cout << "Prining value of n "  << n << endl;
        if(n == 0 ) {
                return ;
        }

        //baaaki recursion sambhal lega
        printDigits( n / 10);

        //1 case main solve karunga
        int digit = n % 10;
        cout << digit << " ";
}

int main() {

        //HW
        int n = 0647;
        cout << n << endl;
        if(n == 0)
                cout << 0 << endl;
        
        printDigits(n);
}
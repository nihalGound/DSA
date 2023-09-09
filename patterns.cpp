#include<iostream>
using namespace std;
int main() {
 int n;
 cin>>n;

    //heart shape
    cout<<"\nHeart Shape : \n";
    for(int i=0; i<n/3; i++){
        //1st space
        for(int j=0; j<(n/3)-i-1; j++){
            cout<<" ";
        }
        //1st pyramid
        for(int j=0; j<(n/2)+(2*i); j++){
            cout<<"*";
        }
        //2nd space
        for(int j=0; j<(n/2)-(2*i); j++){
            cout<<" ";
        }
        //2nd pyramid
        for(int j=0; j<(n/2)+(2*i); j++){
            cout<<"*";
        }
        //3rd space
        for(int j=0; j<(n/3)-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    //lower part
    for(int i=0; i<n; i++){
        for(int j=0; j<(2*n)-i-1; j++){
            if(j<i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }


    cout<<"\npalindrome equilateral triangle :\n";
    for(int i=0; i<n; i++){
        int num =1;
        for(int j=0; j<n+i; j++){
            if(j<n-i-1){
                cout<<" ";
            }
            else{
                cout<<num;
                j>=n-1?num--:num++;
            }
        }
        cout<<endl;
    }

    cout<<"\nhollow inverted numeric half pyramid : \n";

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(i==0){
                cout<<j+1;
            }
            else{
                if(j==0 || j==n-i-1){
                    cout<<j+i+1;
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }

    cout<<"\nfacny pattern :\n";

    for(int i=0; i<2*n-1; i++){
        int condtn = i<n?i+1:2*n-i;
        for(int j=0; j<condtn; j++){
            int value = i;
            i>=n?value = 2*n-i-1:value++;
            if(j==condtn-1){
                cout<<value;
            }
            else{
                cout<<value<<"*";
            }
        }
        cout<<endl;
    }

    cout<<"\nlipid solid full diamond:\n";
    for(int i=0; i<n/2; i++){
        for(int j=0; j<n; j++){
                if(j>(n/2)-i-1 && j<(n/2)+i){
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }
        }
        cout<<endl;
    }
    for(int i=0; i<n/2; i++){
        for(int j=0; j<n; j++){
            if(j>i && j<n-i-1){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    cout<<"\nfancy pattern 2 \n: ";
    //fancy pattern 2
    int num =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<++num;
            if(j!=i){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    int start = num - n+1;
    for(int i=0;i<n; i++){
        int k=start;
        for(int j=0; j<n-i;j++){
            cout<<k++;
            if(j!=n-i-1){
                cout<<"*";
            }
        }
        start =start -(n-i-1);
        cout<<endl;
    }

    cout<<"\nfancy pattern 1 \n:";
    //fancy pattern 1
    for(int i=0; i<n; i++){
        int atIndex = 8-i;
        int num = i+1;
        int count = num;
        for(int j=0; j<17;j++){
            if(j==atIndex && count-->0){
                cout<<num;
                atIndex = atIndex+2;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    cout<<"\nfloyed triangle:\n";
    int num1 =1;
    for(int i=0;i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<num1++<<" ";
        }
        cout<<endl;
    }

    cout<<"\nbutterfly pattern :\n";
    for(int i=0; i<2*n; i++){
        for(int j=0; j<2*n;j++){
            //growing phase
            if(i<n){
                if(j>i && j<2*n-i-1){
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }
            }
            // shrinking phase
            else{
                if(j>2*n-i-1 && j<i){
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }
            }
        }
        cout<<endl;
    }


    cout<<"\nmultiply symbol :\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<2*n-i-1;j++){
            if((j<i)||(j>i && j<2*n-i-2)){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<n+i; j++){
            if((j<n-i-1)||(j>n-i-1 && j<n+i-1)){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    
    cout<<"\naddition symbol :\n";
      for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j==n/2 || i==n/2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
      }

    cout<<"\nleft half solid diamond :\n";
    for(int i=0; i<n ;i++){
        for(int j=0; j<n; j++){
            if(j<n-i-1){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<n; j++){
            if(j<i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    cout<<"\nright half solid diamond :\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<2*n-i-1;j++){
            if(j<i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    cout<<"\nhour glass :\n";
    for(int i=1; i<n; i++){
        for(int j=0; j<n+i; j++){
            if(j<n-i-1){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    cout<<"\nHollow inverted full pyramid :\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<2*n-i-1;j++){
            if(i==0){
                cout<<"*";
            }
            else if((j<i||(j>i && j<2*n-i-2))){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    cout<<"\nHollow full pyramid :\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n+i; j++){
            if(i==n-1){
                cout<<"*";
            }
            else if((j<n-i-1)||(j>n-i-1 && j<n+i-1)){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }    
        cout<<endl;    
    }


    cout<<"\nfull inverted solid pyramid :\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<2*n-i-1;j++){
            if(j<i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    cout<<"\nfull solid pyramid :\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n+i; j++){
            if(j<n-i-1){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

return 0;
}
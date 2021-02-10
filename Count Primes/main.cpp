#include <iostream>
using namespace std;
bool IsPrime(int n){
    if(n==2)return true;
    if(n<2||n%2==0)return false;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0)
            return false;
    }



    return true;
}

int countPrimes(int n) {

    int num=0;
    if(n<=2)return num;
    else{
        num=1;

        for(int i=3;i<n;i+=2){

            if(IsPrime(i))
                num++;

        }

    }
    return num;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

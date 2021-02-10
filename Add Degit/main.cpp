#include <iostream>
using namespace std;
int addDigits(int num) {

    while(num>9){
        int newnum=0;
        while (num>0){
            newnum+=num%10;
            num/=10;
        }
        num=newnum;
    }
    return num;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

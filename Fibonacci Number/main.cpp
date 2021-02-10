#include <iostream>
using namespace std;
int fib(int N) {
    if(N<=1)
        return N;


    return fib(N-1)+fib(N-2);

}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

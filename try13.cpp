#include <iostream>
#include <string>
class sample {
    private:
       int x;
       static const int w = 55;
    public:
       friend void fun();
};


void fun()
{

    std::cout << sample::w;
}
int main(){
    fun();
    return 0;
}
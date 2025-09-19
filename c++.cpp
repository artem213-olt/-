#include <iostream>
#include <langinfo.h>
#include <string>
#include <stack>
int main() {
   
    std::vector<std::string>List = {"a","b","c"};

    std::stack<int> stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    int top = stack.top();
    stack.pop();

    std::cout << top << std::endl;
    std::cout << stack.size()<< std::endl;

    return 0;


}
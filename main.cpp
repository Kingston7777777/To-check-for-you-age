#include <iostream>

int main(){
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "You are an adult";
    }
    else if(age < 0){
        std::cout << "You don't exist";
    }
    else{
        std::cout << "You are not old enough young one";
    }

    return 0;
}

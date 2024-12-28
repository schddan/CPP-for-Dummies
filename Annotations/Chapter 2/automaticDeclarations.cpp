int main() {
    auto iVariable = 1;
    auto dVariable = 2.0;
    auto cVariable = 'a';
    //auto keyword is used to automatically declare the type of a variable.
    //It was implemented in C++11. Before, it had another meaning. Old code may not compile if it uses auto.

    int iVariable2 = 1;
    decltype(iVariable2) iVariable3 = 2;
    //decltype keyword is used to declare a variable with the same type as another variable.
}
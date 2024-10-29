#include <iostream>
#include <cmath>

int main(){

    char a;
    double temp;


    std::cout << "Enter temparture format (F or C): \n";
    std::cin >> a;

    std::cout << "Enter temparture: \n";
    std::cin >> temp;

    char b = toupper(a);


    

    switch (b)
    {
    case ('C'): 
        
        temp = (temp * 9/5) + 32;

        std::cout << "The temparture is " << temp << " degrees F.\n";
        break;
    
    case ('F'):
        
        temp = (temp - 32) * 5/9;
    
        std::cout << "The temparture is " << temp << " degrees C.\n";
    
       break;
    
    default:
        std::cout << "Invalid character! \n";
        break;
    }




    return 0;
}
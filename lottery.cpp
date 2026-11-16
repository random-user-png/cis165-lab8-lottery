#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int winningDigits[5];
    int player[5];
    std::srand(std::time(0));
    for(int i = 0; i < 5; i++)
    {
        winningDigits[i] = std::rand()%10;
    }

    for(int i = 0; i < 5; i++)
    {
        std::cout<<"Enter a value between 0 and 9. ";
        std::cin>>player[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (winningDigits[i] == player[i])
        {
            std::cout<<"Match: "<<winningDigits[i]<<" (index: "<<i<<")"<<std::endl;
        }
    }
    
    std::cout<<"Winning digits: ";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<winningDigits[i]<<" ";
    }
    std::cout<<"\nYour guesses: ";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<player[i]<<" ";
    }

    return 0;
}
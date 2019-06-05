#include <iostream>

class Phonebook{
    private: std::string firstName;
    private: std::string lastName;
    private: std::string nickName;
    private: std::string login;
    private: std::string postalAddress;
    private: std::string emailAddress;
    private: int phoneNumber;
    private: int birthdayDate;
    private: std::string favoriteMeal;
    private: std::string underwearColor;
    private: std::string darkestSecret;

    public: void addContacts(){
        std::cout << "Enter first name: ";
        std::cin >>firstName;
        std::cout << "Enter last name: ";
        std::cin >>lastName;
        std::cout << "Enter your nickname: ";
        std::cin >>nickName;
        std::cout << "Enter your login: ";
        std::cin >>login;
        std::cout << "Enter your address: ";
        std::cin >>postalAddress;
        std::cout << "Enter your email: ";
        std::cin >>emailAddress;
        std::cout << "Enter your phone number: ";
        std::cin >>phoneNumber;
        std::cout << "Enter your birthday date: ";
        std::cin >>birthdayDate;
        std::cout << "Enter your favorite meal: ";
        std::cin >>favoriteMeal;
        std::cout << "Enter color of your underwear: ";
        std::cin >>underwearColor;
        std::cout << "Enter your darkest secret: ";
        std::cin >>darkestSecret;
    }

    public: void display(int index){
        std::cout << ++index << "  |  ";
        std::cout << firstName << "  |  ";
        std::cout << lastName << "  |  ";
        std::cout << nickName << std::endl;
    }

    public: void welcome(){
        std::cout << "Type ADD to add contact" <<std::endl;
        std::cout << "Type SEARCH to search the phonebook" <<std::endl;
        std::cout << "Type EXIT to end the program" <<std::endl;
    }
};

int main(){

    std::string input;
    int limit = 0;
    Phonebook num[8];
    Phonebook getMsg;

    while(1)
    {
        std::cout <<std::endl;
        getMsg.welcome();
        std::cout <<std::endl;
        std::cin >>input;
        if((input == "ADD" || input == "add") && limit < 8)
        {
            num[limit].addContacts();
            ++limit;
        }
        else if(input == "SEARCH" || input == "search")
        {
            for(int i = 0; i < limit; i++)
            {
                num[i].display(i);
            }
            std::cout << "Enter index of the desired entry: ";
            int index;
            std::cin >>index;
            index--;
            std::cout <<std::endl;
            num[index].display(index);
        }
        else if (limit >= 8)
        {
            std::cout << std::endl;
            std::cout << "Phonebook is full run SEARCH or EXIT" <<std::endl;
        }
        else if(input == "EXIT" || input == "exit")
        {
            exit(1);
        }
    }
    return 0;
}



// first name, last name, nickname,
// login, postal address, email address, phone number, birthday date, favorite
// meal, underwear color and darkest secret.
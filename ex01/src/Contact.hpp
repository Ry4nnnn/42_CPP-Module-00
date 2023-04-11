#include <cctype>
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

class   Contact {
    public:
        Contact();
        ~Contact();
        void    add_contact(std::string firstname,
                            std::string lastname,
                            std::string nickname,
                            std::string phonenumber,
                            std::string darkestsecret);
        int     is_empty();
        std::string     get_firstname(void);
        std::string     get_lastname(void);
        std::string     get_nickname(void);
        std::string     get_phonenumber(void);
        std::string     get_darkestsecret(void);
    private:
        std::string _firstname;
        std::string _lastname;
        std::string _nickname;
        std::string _phonenumber;
        std::string _darkestsecret;
};
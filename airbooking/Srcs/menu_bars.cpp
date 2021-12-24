#include "../Includes/include.hpp"

// void    check_requests()
// {

// }

// void    ft_login()
// {
//     char    username[8];
//     char    pass[8];
//     normal();
//     system("clear");
//     std::cout<<"\n\n\n\t\t\t\t\t\tLog in as ADMIN\n";
//     std::cout<<"\t\t\t\t\tUsername : ";
//     std::cin>>username;
//     std::cout<<"\n\t\t\t\t\tPassword : ";
//     std::cin>>pass;
//     if (username != "admin" || pass != "admin")
//     {
//         std::cout<<"\nIncorrect username or password"; 
//         ft_login();    
//     }
//     helps->loged = true;
// }

void    ft_register(t_helps *helps)
{
    normal();
    system("clear");
    print_logs();
    // if (helps->>loged != true)
    // {
        std::string output;
        // std::ofstream myfile;
        // myfile.open ("../Files/requests.txt");
        std::cout<<"\n\n\t\t\t\t\t\t_________________________________________________\n";
        std::cout<<"\t\t\t\t\t\t\033[1;34m\t LET'T LOG YOUR FLIGHT\033[0m\n";
        std::cout<<"\t\t\t\t\t\t\t \033[1;33mYOUR NAME\033[0m\n";
        // std::cout<<"\t\t\t\t\t\t\t \n";
        std::cin>>helps->name;
        std::cout<<"\t\t\t\t\t\t\t \033[1;33mYOUR SURENAME\033[0m\n";
        std::cin>>helps->surename;
        std::cout<<"\t\t\t\t\t\t\t \033[1;33m WHERE TO?\n";
        std::cin>>helps->where;
        std::cout<<"\t\t\t\t\t\t\t \033[1;33m PLEASE INPUT THE TIME(hh:mm)\033[0m\n";
        std::ifstream readFile("../Files/available.txt");
        bool print = false;
        while (getline(readFile, output))
        {
            for (int i = 0; output[i] != '\t'; ++i)
            {
                if (output[i] == helps->from[0])
                {
                    for (int j = 0; helps->where[j] != '\0'; ++j)
                    {
                        if (output[i] != helps->where[j])
                            print = false;
                        else
                            print = true;
                    }
                }
            }
            if (print == true)
                std::cout<<output<<"\n";
        }
        std::cin>>helps->time;
    // }
    // else
    // {
    //     check_requests(helps->;    
    // }
}
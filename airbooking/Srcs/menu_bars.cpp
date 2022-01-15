#include "../Includes/include.hpp"

void    ft_flights()
{
    std::string output;
    std::cout<<"\n\n\n\t\t\t\t\t\t\t\tFlights for today\n";
    std::ifstream readFile("../Files/available.txt");
    while (getline(readFile, output))
    {
        std::cout<<output;
    }
    readFile.close();
}

void    ft_register(t_helps *helps)
{
    char    name[10];
    char    surename[20];
    char    where[15];
    char    time[10];
    normal();
    system("clear");
    print_logs();
    std::string output;
    std::ofstream myfile;
    myfile.open ("../Files/requests.txt");
    std::cout<<"\n\n\t\t\t\t\t\t_________________________________________________\n";
    std::cout<<"\t\t\t\t\t\t\033[1;34m\t REGISTRE YOUR INFORMATION\033[0m\n";
    std::cout<<"\t\t\t\t\t\t\t \033[1;33mYOUR NAME\033[0m\n";
    std::cout<<"\t\t\t\t\t\t\t ";
    std::cin>>name;
    std::cout<<"\t\t\t\t\t\t\t \033[1;33mYOUR SURENAME\033[0m\n";
    std::cout<<"\t\t\t\t\t\t\t ";
    std::cin>>surename;
    std::cout<<"\t\t\t\t\t\t\t\033[1;33m WHERE TO?\033[0m\n";
    std::cout<<"\t\t\t\t\t\t\t ";
    std::cin>>where;
    std::cout<<"\t\t\t\t\t\t\t \033[1;33mPLEASE INPUT THE TIME(hh:mm)\033[0m\n";
    std::cout<<"\t\t\t\t\t\t\t ";
    std::cin>>time;
    std::cout<<"\t\t\t\t\t\t\t \033[1;33mCHECK YOUR INFORMASHION AND PRESS ENTER\033[0m";
    myfile<<name<<" "<<surename<<" "<<where<<" "<<time<<":";
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
    std::cin>>time;
}
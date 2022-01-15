#include "../Includes/include.hpp"

// void	constructor(t_helps *helps)
// {
// 	helps->name = nullptr;
// 	helps->surename = NULL;
// 	helps->time = NULL;
// 	helps->where = NULL;
// }

void    starting_menu(t_helps *helps)
{
    const int   ENTER = 10;
	const int   ESQ = 81;
	const int	PREV = 27;
	const int	esq = 113;
	const int   DOWN = 66;
	const int   UP = 65;	
    const int   menu_size = 5;
    short int   menu_point=1;
    bool        menu_on = true;

    system("clear");
    switch_menu(menu_point);
    cbreak();
    while (menu_on == true)
    {
        int key;
        key = keypress();
        switch(key)
		{	
			case DOWN:
			{
				++menu_point;
				if (menu_point == menu_size + 1)
				{
					menu_point = 1;
				}
				switch_menu(menu_point);
				break;
			}

			case UP:
			{
				--menu_point;
				if (menu_point == 0 || menu_point == -1)
				{
					menu_point = 5;
				}
				switch_menu(menu_point);
				break;
			}

			case ENTER:
			{ 
				if (menu_point == 1)
				{
					menu_point = 0;
                    system("clear");
					ft_register(helps);
                    // std::cout<<"New bookin menu\n";
					break;
				}

				if (menu_point == 2)   
				{
					system("clear");			
					// ft_login(helps);
                    break;
				}  

				if (menu_point == 3)
				{
                    system("clear");
                    ft_flights();
					break;
				}

				if (menu_point == 4)
				{
					system("clear");
					print_about();
					break;
				}

				if (menu_point == 5) 
				{
					std::cout<<"Exiting\n";
					sleep(1);
					system("clear");
					menu_on = false;
					break;
				}
			}
			
			case ESQ:
			case esq:
			{
				std::cout<<"Exiting...\n";
				sleep(1);
				system("clear");
				menu_on = false;
				normal();
				return ;
			}
		}
	}	
	normal();
}

int main()
{
	t_helps *helps;
	// constructor(*helps);
    starting_menu(helps);
	return (0);
}
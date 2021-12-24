#include "../Includes/include.hpp"

void switch_menu(short int menu_point)
{
	switch(menu_point)
	{
		case 1:				
		{
			system("clear");
			print_menu();
			std :: cout << "\033[1;34m\n\n\n\n\t\t\t\t\t\t\tREGISTER\033[0m\n";
			std :: cout << "\t\t\t\t\t\t\tSIGN IN\n" << "\t\t\t\t\t\t\tFLIGHTS\n" << "\t\t\t\t\t\t\tABOUT\n" << "\t\t\t\t\t\t\tEXIT\n";
			break;
		}
		

		case 2:	
		{
			system("clear");
			print_menu();
			std :: cout << "\n\n\n\n\t\t\t\t\t\t\tREGISTER\n" << "\t\t\t\t\t\t\t\033[1;34mSIGN IN\033[0m\n" << "\t\t\t\t\t\t\tFLIGHTS\n";
			std :: cout << "\t\t\t\t\t\t\tABOUT\n" << "\t\t\t\t\t\t\tEXIT\n";
			break;
		}

		case 3:
		{
			system("clear");
			print_menu();
			std :: cout << "\n\n\n\n\t\t\t\t\t\t\tREGISTER\n" << "\t\t\t\t\t\t\tSIGN IN\n" << "\t\t\t\t\t\t\t\033[1;34mFLIGHTS\033[0m\n";
			std :: cout << "\t\t\t\t\t\t\tABOUT\n" << "\t\t\t\t\t\t\tEXIT\n";
			break;
		}

		case 4:
		{	
			system("clear");
			print_menu();
			std :: cout << "\n\n\n\n\t\t\t\t\t\t\tREGISTER\n" << "\t\t\t\t\t\t\tSIGN IN\n" << "\t\t\t\t\t\t\tFLIGHTS\n";
			std :: cout << "\t\t\t\t\t\t\t\033[1;34mABOUT\033[0m\n" << "\t\t\t\t\t\t\tEXIT\n";
			break;
		}

		case 5:		
		{
			// std :: cout << "\e[8;22;72t";
			system("clear");
			print_menu();
			std :: cout << "\n\n\n\n\t\t\t\t\t\t\tREGISTER\n" << "\t\t\t\t\t\t\tSIGN IN\n" << "\t\t\t\t\t\t\tFLIGHTS\n";
			std :: cout << "\t\t\t\t\t\t\tABOUT\n" << "\033[1;34m \t\t\t\t\t\t\tEXIT\033[0m\n";
			break;
		}
	}
}
#include "iostream"
#include "Functions.h"


int main() {
    DBMS DBMS("Data.txt");
    int choice;

    while (true) {
        Menu();
        choice = ValidNumber("What do you want to do: ");

        if (choice == 8) {
            break;
        }

        switch (choice) {
            case 1:
                DBMS.LoadData();
                std::cout << "Data loaded." << std::endl;
                break;

            case 2:
                DBMS.SaveData();
                std::cout << "Data saved." << std::endl;
                break;

            case 3: {
                std::string name = ValidName("Enter name: ");
                int Day = ValidNumber("Enter Day: ");
                int month = ValidNumber("Enter month: ");
                int year = ValidNumber("Enter year: ");
                DBMS.AddData(MoviePoster{name, Day, month, year});
                std::cout << "Record added." << std::endl;
                break;
            }

            case 4: {
                int index = ValidNumber("Enter record index to edit: ");
                std::string name = ValidName("Enter new name: ");
                int Day = ValidNumber("Enter new Day: ");
                int month = ValidNumber("Enter new month: ");
                int year = ValidNumber("Enter new year: ");
                DBMS.Edit(index, MoviePoster{name, Day, month, year});
                std::cout << "Record edited." << std::endl;
                break;
            }

            case 5: {
                int index = ValidNumber("Enter record index of the recording: ");
                DBMS.DeleteData(index);
                std::cout << "Record deleted." << std::endl;
                break;
            }

            case 6: {
                int month = ValidNumber("Enter month: ");
                int year = ValidNumber("Enter year: ");
                DBMS.SearchData(month, year);
                break;
            }

            case 7:
                DBMS.PrintData();
                break;

            default:
                std::cerr << "Invalid choice" << std::endl;
        }
    }

    std::cout << "Bye!" << std::endl;
    return 0;
}

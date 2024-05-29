#include "iostream"
#include "string"
#include "vector"
#include "algorithm"
#include "fstream"
#include "limits"


struct MoviePoster {
    MoviePoster(std::string Name, int Day, int Month, int Year)
            :Name{Name},Day{Day}, Month{Month}, Year{Year} {}

    std::string Name;
    int Day;
    int Month;
    int Year;
};

class DBMS {
public:
    DBMS(std::string connectionString) : connectionString{connectionString} {}

    void SaveData() {
        std::ofstream out(connectionString);
        if (out.is_open()) {
            for (const MoviePoster &MoviePoster : temps) {
                out << '"' << MoviePoster.Name << '"' << " " <<  MoviePoster.Day << " " << MoviePoster.Month << " " << MoviePoster.Year << std::endl;
            }
        }
        out.close();
    }

    void LoadData() {
        std::ifstream in(connectionString);
        if (in.is_open()) {
            std::string name;
            int day, monthNum, year;
            temps.clear();
            while (in >> name >> day >> monthNum >> year) {
                temps.push_back(MoviePoster{name, day, monthNum, year});
            }
        }
        in.close();
    }

    void AddData(MoviePoster temp) { temps.push_back(temp); }

    void Edit(int index, MoviePoster newTemp) {
        if (index >= 0 && index < temps.size()) {
            temps[index] = newTemp;
        } else {
            std::cerr << "Invalid index" << std::endl;
        }
    }

    void DeleteData(int index) {
        if (index >= 0 && index < temps.size()) {
            temps.erase(temps.begin() + index);
        } else {
            std::cerr << "Invalid index" << std::endl;
        }
    }

    void PrintData() {
        std::cout << "<============================================================>" << std::endl;
        for (const MoviePoster &MoviePoster : temps) {
            std::cout << '"' << MoviePoster.Name << '"' << " " <<  MoviePoster.Day << " " << MoviePoster.Month << " " << MoviePoster.Year << std::endl;
        }
        std::cout << "<============================================================>" << std::endl;
    }

    void SearchData(int month, int year) {
        bool found = false;
        for (const MoviePoster &MoviePoster : temps) {
            if (MoviePoster.Month == month && MoviePoster.Year == year) {
                std::cout << '"' << MoviePoster.Name << '"' << " " << MoviePoster.Day << " " << MoviePoster.Month << " " << MoviePoster.Year << std::endl;
                found = true;
            }
        }
        if (!found) {
            std::cout << "There are no records for this month " << month << " and year " << year << std::endl;
        }
    }

private:
    std::vector<MoviePoster> temps;
    std::string connectionString;
};

std::string ValidName(const std::string &Request) {
    std::string name;
    while (true) {
        std::cout << Request;
        std::getline(std::cin, name);
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cerr << "Invalid input, please enter a valid name." << std::endl;
        } else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

            return  name;
        }
    }

}

int ValidNumber(const std::string &Request) {
    int value;

    while (true) {
        std::cout << Request;
        std::cin >> value;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cerr << "Error. Enter a number, not a word." << std::endl;
        }
        else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return value;
        }
    }
}


void Menu() {
    std::cout << "1. Load data" << std::endl;
    std::cout << "2. Save data" << std::endl;
    std::cout << "3. Add record" << std::endl;
    std::cout << "4. Edit record" << std::endl;
    std::cout << "5. Delete record" << std::endl;
    std::cout << "6. Search record" << std::endl;
    std::cout << "7. Print all records" << std::endl;
    std::cout << "8. Exit" << std::endl;
}





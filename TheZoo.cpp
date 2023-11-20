#include "iostream"
#include "string"
#include "cctype"

using namespace std;

char NumberOfAviary;
class Animal{
public:
    int AmountOfLegs;
    string SoundThatItMakes;
    string ItCan;
    string TypeOfFood;
};
class Herbivore: public Animal{
public:
    void print(){
        cout << "\nIt has " << AmountOfLegs << " legs"<< "\nIt eats " << TypeOfFood << "\nIt sounds like " << SoundThatItMakes << "\nIt Can" "\n\n";
    }
};
class Predator: public Animal{
public:
    void print(){
        cout << "\nIt has " << AmountOfLegs << " legs"<< "\nIt eats " << TypeOfFood << "\nIt sounds like " << SoundThatItMakes << "\nIt can " << ItCan << "\n\n";
    }
};
class Bird:public Animal{
public:
    int Wingspan;
    void print1(){
        cout << "\nIt wingspan is " << Wingspan << "\nIt eats " << TypeOfFood << "\nIt sounds like " << SoundThatItMakes << "\nIt Can " << ItCan << "\n"; "\n\n";
    }

};
int main(){
    while (true) {
        cout << "There are 5 aviaries"<<"\nWhich aviary do you want to see. If you want to leave the zoo write 6: ";
        cin >> NumberOfAviary;
        if (!isdigit(NumberOfAviary)){
            cout << "Write digits not words. You should leave(idk how to get back to the choice from here)";
            exit(EXIT_SUCCESS);
        }
        switch (NumberOfAviary) {
            case '1':{
                Predator Snake;
                cout << "This is snake`s aviary";
                Snake.AmountOfLegs = 0;
                Snake.TypeOfFood = "Meat";
                Snake.SoundThatItMakes = "\"SSssSSSspasibo\"";
                Snake.ItCan = "Not all snakes can poison their victims, but the can";
                Snake.print();
                break;}
            case '2':{
                cout << "This is a Baloo the bear`s aviary";
                Predator Bear;
                Bear.AmountOfLegs = 4;
                Bear.TypeOfFood = "Meat and sometimes some plants or berries";
                Bear.SoundThatItMakes = "ROar(idk)";
                Bear.ItCan = "funny scratch its back against a tree";
                Bear.print();
                break;}
            case '3':{
                cout << "This is a Mufasa`s aviary";
                Predator Lion;
                Lion.AmountOfLegs = 4;
                Lion.TypeOfFood = "Meat";
                Lion.SoundThatItMakes = "\"Ror, Simba, you will become a king\"";
                Lion.ItCan = "be the king of animals";
                Lion.print();
                break;
            }
            case '4':{
                cout << "We did`t know it`s name and how did it get there but it`s a goat`s aviary";
                Herbivore Goat;
                Goat.AmountOfLegs = 4;
                Goat.TypeOfFood = "Plant food";
                Goat.SoundThatItMakes = "\"Beeee(I will take over this world and no one will be able to stop me)\"";
                Goat.ItCan = "fall as log";
                Goat.print();
                break;
            }
            case '5':{
                cout << "It`s Lord Shen`s city(it`s from Kung Fu Panda 2)";
                Bird Peacock;
                Peacock.Wingspan = 1.5;
                Peacock.TypeOfFood = "cereals and vegetables";
                Peacock.SoundThatItMakes = "poorly oiled gate";
                Peacock.ItCan = "fly and scare other animals whit it`s feather print";
                Peacock.print1();
                break;
            }
            case '6':{
                cout << "Exit" << '\n';
                exit(EXIT_SUCCESS);
            }
        }
    }
}
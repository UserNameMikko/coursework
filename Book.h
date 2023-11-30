#include<iostream>

class Book {

private:
    std::string name;
    std::string author;
    int year;
    int count;
    bool isAvailable;

public:
    /*constructors*/

    Book() {
        this->name = "";
        this->author = "";
        this->year = 0;
        this->count = 0;
        this->isAvailable = false;
    }
    Book(const Book& book){
        this->name = book.name;
        this->author = book.author;
        this->year = book.year;
        this->count = book.count;
        this->isAvailable = book.isAvailable;
    }

    Book(std::string name, std::string author, int year, int count, bool isAvailable){
        this->name = name;
        this->author = author;
        this->year = year;
        this->count = count;
        this->isAvailable = isAvailable;
    }
    ~Book() = default;

    /*setters*/

void setName(std::string name){
    this->name = name;
}
void setAuthor(std::string author){
    this->author = author;
}
void setYear(int year){
    this->year = year;
}
void setCount(int count){
    this->count = count;
}
void setAvailable(){
    this->count == 0 ? false : true;
}

/*getters */

std::string getName(){
    return this->name;
}
std::string getAuthor(){
    return this->author;
}
int getYear(){
    return this->year;
}
int getCount(){
    return this->count;
}
bool getAvailable(){
    return this->isAvailable;
}

/*base output for instance of class*/

void print() {
    std::cout << this->name << "\t" << this->author <<"\t" << this->year <<"\t" << this->count << "\t" << this->isAvailable << std::endl;
}
};
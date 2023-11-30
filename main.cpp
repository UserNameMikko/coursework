#include "Book.h"

int main(){
     /*Num = 0;
    load();
    print();*/
    std::cout << "hi" << std::endl;
    Book b;//=  Book("name","author", 2022,10,true);
    std::string name = "Red Flag";
    std::string author = "A.Grin";
    int year = 1920;
    int count = 150;

    b.setName(name);
    b.setAuthor(author);
    b.setYear(year);
    b.setCount(count);
    b.setAvailable();
    b.print();
    /*addItem();
    printf("add called");
    print();
    save();*/
    return 0;
}

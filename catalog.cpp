#include <iostream>
#include <string>
#include <fstream>
#include "./fictionBook.h"
#include "./nonfictionBook.h"

using namespace::std;

string title;
string author;




int main() {
    fictionBook testBook;

    cout << "Title: ";
    cin >> title;

    testBook.setTitle(title);

    cout << "Author: ";
    cin >> author;

    testBook.setTitle(author);

    testBook.setIDNum(1001);
    testBook.setGenre("High Fantasy");
    testBook.setSeriesName("Dark Lord Chronicles");
    testBook.setSeriesNum(2);

    testBook.print();



}
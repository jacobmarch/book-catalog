#include "./book.h"
#include <string>

using namespace::std;


class fictionBook : public book {
    public:
        void setGenre(string bookGenre){
            genre = bookGenre;
        }
        void setSeriesNum(int num){
            seriesNum = num;
        }
        void setSeriesName(string serName){
            seriesName = serName;
        }
        int getSeriesNum(){
            return seriesNum;
        }
        string getGenre(){
            return genre;
        }
        void print(){
            cout << "Book Title: " << title << endl;
            cout << "Series Name: " << seriesName << endl;
            cout << "This is Book " << seriesNum << " in the series." << endl;
            cout << "Author Name: " << author << endl;
            cout << "Book ID Number: " << idNum << endl;
        }
    protected:
        string genre;
        bool series;
        int seriesNum;
        string seriesName;
};
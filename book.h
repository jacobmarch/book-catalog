#include <string>

using namespace::std;

class book {
    public:
        void setTitle(string bookTitle){
            title = bookTitle;
        }
        void setAuthor(string authorName){
            author = authorName;
        }
        void setIDNum (int id) {
            idNum = id;
        }
        int getIDNum(){
            return idNum;
        }
        virtual void print(){
            cout << "Book Title: " << title << endl;
            cout << "Author Name: " << author << endl;
            cout << "Book ID Number: " << idNum << endl;
        }

    protected:
        string title;
        string author;
        int idNum;


};
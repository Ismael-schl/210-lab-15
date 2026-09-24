//Lab 15 | COMSC 210 | Ismael Hadi
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int SIZE = 4;

class Movie {
    private:
    string sWriter;
    int year;
    string title;
    public: 
    void setWriter(string writer){
        sWriter = writer;
    }
    string getWriter() {
        return sWriter;
    }
    void setYear(int y){
        year = y;
    }
    int getYear() {
        return year;
    }
    void setTitle(string t){
        title= t;
    }
    string getTitle() {
        return title;
    }
    void print() {
        cout << "Movie: " << title << endl;
        cout << "    Year released: " << year << endl;
        cout << "    Screenwriter: " << sWriter << endl << endl;
    }
};

int main() {
    ifstream fin("moviedata.txt");
    Movie arr[SIZE];
    Movie temp;
    string title;
    int year;
    string writer;

    for (int i = 0; i < SIZE; i++) {
        getline(fin, title);
        fin >> year;
        fin.ignore();
        getline(fin, writer);
        
    }

}
//Lab 15 | COMSC 210 | Ismael Hadi
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int SIZE = 4;

//This block of code initializes class Movie which has member variables for screen writer, year released, and title. It also has a formatted printing method
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

//The main function reads data from a text file, stores it into temperary Movies, then places those into a container array. It then outputs the formmatted contents of the array.
int main() {
    ifstream fin("moviedata.txt");
//Note: The canvas instructions did not specify whether to have file read error code, hence its omission.
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
        temp.setTitle(title);
        temp.setYear(year);
        temp.setWriter(writer);
        arr[i] = temp;
    }
    for (int j = 0; j < SIZE; j++) {
        arr[j].print();
    }
    return 0;
}
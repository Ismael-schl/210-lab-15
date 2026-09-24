//Lab 15 | COMSC 210 | Ismael Hadi
#include <iostream>
#include <fstream>

using namespace std;

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
    void setYearr(int y){
        year = y;
    }
    int getYear() {
        return year;
    }
    void setTitle(string t){
        title= t;
    }
    string getWriter() {
        return sWriter;
    }
};
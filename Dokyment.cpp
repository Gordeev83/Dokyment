#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Document {
public:
    virtual void create() = 0;
    virtual void open(const string& filename) = 0;
    virtual void save() = 0;
    virtual void saveAs(const string& filename) = 0;
    virtual void print() = 0;
    virtual void close() = 0;
};



int main() 
{
    setlocale(LC_ALL, "");


    return 0;
}
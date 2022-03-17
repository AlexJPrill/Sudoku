#include <iostream>
using namespace std;

class Board
{
public:
    Board();
    Board(Board & board);
    ~Board();

    //Methods
    void initialize();
    void inttializeRecursive(int col, int row, int sec, int &count);

    //Should this have a return value of boolean
    //This would be to check before hand if the value is valid
    void setNum(int col, int row, int sec, int value);

    bool isEmpty(int col, int row, int sec);
    bool isValid(int col, int row, int value);
    
    bool checkSec(int val, int sec);
    bool checkCol(int val, int col, int sec);
    bool checkRow(int val, int row, int sec);

    void print();
private:
    //Are these things correct now not entirely sure
    int Field[3][3][9];
};
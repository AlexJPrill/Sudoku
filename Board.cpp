#include "Board.h"
using namespace std;

Board::Board()
{}

Board::~Board()
{}

void Board::setNum(int col, int row, int sec, int value)
{
    Field[col][row][sec] = value;
}

//Want to check if the thing below is the correct understanding because that will help me out allot if I can get it done correctly then okay
//3D Array [collumn][row][Section]
void Board::initialize()
{
    int value = 0;
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for(int k = 0; k < 3; k++)
            {
                Field[j][k][i] = -1;
                
                value += 1;
            }
            
        }
        
    }
    cout << value << endl;
}

void Board::inttializeRecursive(int col, int row, int sec, int &count)
{
    
    if(col > 2 || row > 2 || sec > 2)
    {
        return;
    }
    
    else if(Field[row][col][sec] == -2)
    {
        count += 1;
        return;
    }
    
    else
    {
        try{
        Field[col][row][sec] = -2;
        inttializeRecursive(col+1, row, sec, count);
        inttializeRecursive(col, row+1, sec, count);
        inttializeRecursive(col, row, sec+1, count);
        }
        catch(int e)
        {
            cout << "Error" << endl;
        }
    }
}

//Checks to see if the given value is in a section
//If in section returns true, else returns false
bool Board::checkSec(int val, int sec)
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; i < 3; i++)
        {
            if(Field[i][j][sec] == val)
                return true;
            else
                return false;
        }
    }
    return false;
}

//Similar to the checkCol method in how it works
bool Board::checkRow(int value, int row, int sec)
{
    return false;
}

bool Board::checkCol(int value, int col, int sec)
{
    if(sec == 0 || sec == 3 || sec == 6)
    {
        int i = 0;
        while(i <= 6)
        {
            for(int j = 0; j < 3; j++)
            {
                if(Field[col][j][i] == value)
                    return true;
                else
                    return false;

            }
            i += 3;
        }
    }
    else if(sec == 1 || sec == 4 || sec == 7)
    {
        int i = 1;
        while(i <= 7)
        {
            for(int j = 0; j < 3; j++)
            {
                if(Field[col][j][i] == value)
                    return true;
                else
                    return false;
            }
            i += 3;
        }

    }
    else if(sec == 2 || sec == 5 || 8)
    {
        int i = 2;
        while(i <= 8)
        {
            for(int j = 0; j < 3; j++)
            {
                if(Field[col][j][i] == value)
                    return true;
                else
                    return false;
            }
            i += 3;
        }
    }
    return false;
}
void Board::print()
{
    for(int i = 0; i < 3; i++)
    {
        if(i==0 || i==)
        cout << "----------------" << endl;
        for(int j = 0; j < 9; j++)
        {
            cout << "|";
            for(int k = 0; k < 3; k++)
            {
               cout << Field[k][i][j] << " ";
            }
            cout << "|";
            
        }
        cout << endl;
    }

}
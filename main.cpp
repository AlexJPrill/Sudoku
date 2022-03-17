#include "Board.h"
#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;

//Would it be best to try and do this as a recursive method?
/*
*Would need to pass in the 3 values for the position of the numbers in the puzzle
*
*/
//If we are doing this recursively lets also try and do the initialize as a recursive method also
void backTrack(Board board)
{
    //This is my implementation of the backtrack method to solving a sudoku puzzle

    //Find the first instance of an empty cell
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            for(int k = 0; k < 9; k++)
            {

            }
        }
    }

}

void read(string file, Board board)
{
    ifstream din;
    din.open(file);

}

int main()
{

    Board board;

    clock_t time1=clock();
    try
    {
        int count = 0;
        board.initialize();
        //board.inttializeRecursive(0,0,0, count);
        board.setNum(0,0,0,2);
        board.setNum(1,1,0,2);
        board.setNum(2,2,0,2);
        board.print();
        //board.print();
        
    }
    catch(const runtime_error& error)
    {
        cout << "Error" << endl;
    }
    //board.initialize();


    clock_t time2=clock();
    double run_time = (time2-time1)/(double)CLOCKS_PER_SEC;
    cout << "Runt time: " << run_time << " seconds\n";

    
    

    
    return 0;
}
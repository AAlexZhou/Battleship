#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "Boards.h"
using namespace std;
class Executive
{
    private:

        int row;
        char column;
        Boards* playerOne = new Boards();
        Boards* playerTwo = new Boards();
		    int numberOfShips;

    public:
        /**
        *@pre none
        *@post primary constructor of the Executive class
        *@post returns nothing
        **/
        Executive();
        /**
        *@pre none
        *@post destructor of the Executive class
        *@post returns nothing
        **/
        ~Executive();
        /**
        *@pre takes a string for the filename
        *@post run determines which mode to run the program in
        *@post returns nothing
        **/
        void run();

        /**
         * @pre Game has begun.
         * @post Gets the row the user wants to attack.
         */
        void getRow();
        /**
         * @pre Game has begun.
         * @post Gets the column the user wants to attack.
         */
        void getColumn();
        /**
         * @pre none
         * @post Literally just adds like 100 new lines so that you can't cheat.
         */
        void addSpace(int);
};
#endif

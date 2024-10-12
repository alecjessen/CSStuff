/*****************************************************************************
 * AUTHOR     : Alexander Jessen & Mohmoud Moussa
 * STUDENT ID : 1174663 & 1307814
 * LAB #10    : Input Output - Pocket Money
 * CLASS      : CS1A
 * SECTION    : TTh: 11am
 * DUE DATE   : 10/15/24
 *****************************************************************************/

#include <iomanip> /* setw */
#include <ios>
#include <iostream> /* cout */
using namespace std;

/***********************************************************************
 * Pocket Money Program
 *_____________________________________________________________________
 *
 * This program receives the user’s name, the pocket money left over
 * from the previous week, & the amount spent in the current week.
 * Then it wiil calculate & output how much pocket money is remaining.
 * Each week the user is allocated an allowance that will be added
 * into their pocket money.
 *----------------------------------------------------------------------
 * INPUT:
 * name        : The user’s name.
 * amtLeftover : Amount leftover from the previous week.
 * spent       : Amount spent this week.
 *
 * OUTPUT:
 * name        : User’s Name
 * pocketMoney : Amount of pocket money remaining
 *
 *----------------------------------------------------------------------
 * EXAMPLE INPUT / OUTPUT:
 * What is your name? Pete McBride
 * How much is left from last week? 25.15
 * How much have you spent? 32.76
 *
 * Hello Pete McBride!
 * You now have $ 12.39 left.
 *
 ************************************************************************/

int main() {
  /***********************************************************************
   * CONSTANTS
   * ---------------------------------------------------------------------
   * OUTPUT - USED FOR CLASS HEADING
   * ---------------------------------------------------------------------
   * PROGRAMMER : Programmer's Name
   * CLASS      : Student's Course
   * SECTION    : Class Days and Times
   * LAB_NUM    : Lab Number (specific to this lab)
   * LAB_NAME   : Title of the Lab
   *
   * --------------------------------------------------------------------
   * WEEKLY_ALLOWANCE: weekly pocket money given to user
   * --------------------------------------------------------------------
   * FORMATTING – USED FOR SETWS
   * --------------------------------------------------------------------
   * NAME_SIZE            : max name size
   * PROMPT_COLUMN_SIZE   : prompt column width
   **********************************************************************/

  // OUTPUT -- USED FOR CLASS HEADING
  const char PROGRAMMER[] = "Alexander Jessen & Mohmoud Moussa";
  const char CLASS[]      = "CS1A";
  const char SECTION[]    = "TTh: 11:00a - 1:20p";
  const int  LAB_NUM      = 10;
  const char LAB_NAME[]   = "Input Output - Pocket Money";

  // FORMATTING - USED FOR SETWS
  const int NAME_SIZE          = 25;
  const int PROMPT_COLUMN_SIZE = 33;

  // CALC - USED TO CALCULATE pocketMoney
  const float WEEKLY_ALLOWANCE = 20.00;

  /*********************************************************************
   * VARIABLES
   *********************************************************************/

  char name[NAME_SIZE]; // IN & OUT - user's name - will output this also

  float amtLeftover;    // IN & CALC - money left from last week - used to
                        // calculate reamining amount after spend
  float spent;          // IN & CALC - money spent - used to calculate remaining
                        // amount after spend
  float pocketMoney;    // OUT & CALC - the amount of money the user has left

  /*******************************************************************************
   * OUTPUT – Class Heading
   *******************************************************************************/

  cout << left;
  cout << "************************************************************\n";
  cout << "* PROGRAMMED BY : "   << PROGRAMMER << endl;
  cout << "* "      << setw(14)  << "CLASS"    << ": " << CLASS    << endl;
  cout << "* "      << setw(14)  << "SECTION"  << ": " << SECTION  << endl;
  cout << "* LAB #" << setw(9)   << LAB_NUM    << ": " << LAB_NAME << endl;
  cout << "************************************************************\n\n";
  cout << right;

  /************************************************************************
   * INPUT - reads in 3 values from the user - (name, amtLeftover,
   * spent)
   ************************************************************************/

  cout << left;
  cout << setw(PROMPT_COLUMN_SIZE) << "What is your name?";
  cin.getline(name, NAME_SIZE);

  cout << setw(PROMPT_COLUMN_SIZE) << "How much is left from last week?";
  cin  >> amtLeftover;

  cout << setw(PROMPT_COLUMN_SIZE) << "How much have you spent?";
  cin  >> spent;

  cout << endl;

  cout << right;
  cin.ignore(1000, '/n');

  /***************************************************************************
   * PROCESSING - Calculates the pocketMoney the user has based on user input
   * and weekly pocket money allowence (amtLeftover, WEEKLY_ALLOWANCE,
   * spent)
   ***************************************************************************/

  pocketMoney = (amtLeftover + WEEKLY_ALLOWANCE) - spent;

  /***************************************************************************
   * OUTPUT - a string greeting the user with their name & a string notifying
   * the user of the amount of money they have reamining.
   *
   *
   * Example:
   *
   * Hello Pete McBride!
   * You now have $ 12.39 left.
   *
   ***************************************************************************/

  // OUTPUT - Setting decimal precision
  cout << setprecision(2) << fixed;

  // OUTPUT - Greeting the user.
  cout << "Hello " << name << "!" << endl;

  // OUTPUT - User's remaining money.
  cout << "You now have $ " << pocketMoney << " left.";

  // OUTPUT - Line Spacing
  cout << endl << endl << endl;

  return 0;
};

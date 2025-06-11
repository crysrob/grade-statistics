/*Program Idea:
Ask the user how many grades they want to enter (e.g. 5), then:
Use a loop to get that many grade percentages (0–100).
Store and calculate:
    The average grade
    The highest and lowest grade
    How many were passing (≥ 50)
    Print a summary using a function.
*/

//I want to include a grade percentage conversion like 90% = A
//I also want to let the user start again without manually restarting the program

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void printSummary(double mean, double high, double low, int passes, int amount, string bname, string wname){
    
    cout << fixed << setprecision(2); //makes sure the values only has two numbers after the decimal

    if(amount > 1){
        cout << "\t\tGRADE SUMMARY:\n\n";
        cout << "\tThe average percentage is " << mean << "%\n\n";
        cout << "\tYou passed " << passes << " out of " << amount << " classes\n\n";
        cout << "\tYour highest grade percentage is " << high << "% for your " << bname << " class\n\n";
        cout << "\tYour lowest grade percentage is " << low << "% for your " << wname << " class\n\n";
    }
    else{
        cout << "\t\tGRADE SUMMARY:\n\n";
        cout << "\tThe grade value is " << mean << "\n\n"; //if it's only 1 class, saying the highest and lowest wouldn't apply
        cout << "\tYou passed your class!\n\n";
    }
}//end printSummary function

int main(){

    int amt, x = 1, passing = 0;

    string className, bestClass, worstClass;

    double percent, highest = 0, lowest = 100, sum = 0, avg;

    cout << "Please enter the amount of grades you want to enter: ";
    cin >> amt;

    cout << "\n";

    while(x <= amt){

        cout << "Class " << x << " -\tWhat is the name of this class: ";
        getline(cin >> ws, className); //needed to include <string> library for getline to work

        cout << "Please enter the grade value for your " << className << " class: " ;
        cin >> percent;
        cout << "\n";

        if(percent > 100 || percent < 0){
            cout << "Invalid grade value! Please enter a value between 0 and 100.\n\n";
            continue; //starts the same loop iteration again, does not increase the attempt amount
        }

        if(percent > highest){
            highest = percent;
            bestClass = className;
        }

        if(percent < lowest){
            lowest = percent;
            worstClass = className;
        }
        
        sum += percent;
        
        if(percent >= 50){
            passing++;
        }
        
        x++;

    }//end while loop

        avg = sum / amt;
    
        printSummary(avg, highest, lowest, passing, amt, bestClass, worstClass);
        
        char response;
        cout << "Do you want to restart? [Y/N] ";
        cin >> response;

        switch(response){
            case 'Y':

        }


}//end main
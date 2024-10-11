

#include <iostream>
using namespace std;

int main()
{

    int numberOfDays;       //This section is the inpatient only 
    int dailyRate; 

    int hosMed;             // this section is the shared variables 
    int serviceCharge;
    


    string answer1 ;        // This is the answer to the which patient question are you 

    cout << "Are you an out or in patient ?\n";
    
    cin >> answer1;

    if (answer1 == "inpatient")
    {
        cout << "how many days were you at the hostipal\n";
        cin >> numberOfDays; 

        cout << "Whats the daily cost of the hostipal\n";
        cin >> dailyRate; 

        cout << "What is the hostipal medicine charges\n";
        cin >> hosMed; 

        cout << "what is the hostipal service charge\n";
        cin >> serviceCharge; 

        int totalCharge = inpatient(hosMed,serviceCharge,numberOfDays,dailyRate);

        cout << "\nThe total cost for your stay was " << totalCharge << " dollars";
    }
    else if (answer1 == "outpatient")
    {

        cout << "What is the hostipal medicine charges\n";
        cin >> hosMed;

        cout << "what is the hostipal service charge\n";
        cin >> serviceCharge;
        
        int totalCharge = outpatient(hosMed,serviceCharge);

        cout << "\nThe total cost for your stay was " << totalCharge << " dollars";

    }


    



}

int inpatient(int hosMed1, int serviceCharge, int numberOfDays, int dailyRate)
{
    int Sum1 = hosMed1 + serviceCharge;
    int dailyTotal = dailyRate * numberOfDays;
    int SumTotal = Sum1 + dailyTotal; 
    return SumTotal; 
}


int outpatient(int hosMed1, int serviceCharge)
{
    int Sum = hosMed1 + serviceCharge;
    return Sum; 
}







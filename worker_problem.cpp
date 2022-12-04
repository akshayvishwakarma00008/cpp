// A task takes 4 ½ hours to complete. Two workers, A and B start working on it and take turns
// alternately. A works for 25 minutes at a time and is paid Rs 50, B works for 75 minutes at a time
// and is paid Rs. 150. Display the total number of turns taken by A and B, calculate their total
// amounts and also the total cost of the task.

#include <iostream>

using namespace std;

int main()
{
    
    int time_remaning = 270;
    int turn = 0;
    int turn_taken_by_A = 0;
    int turn_taken_by_B = 0;
    int salary_of_A = 0;
    int salary_of_B = 0;

    
    //the loop will run till time required to do the work is greater than 0 minutes
    //once true will go in and will assign work to A and B (i.e if turn is even it will be turn of A otherwise B)
    //the time taken by A and B will be subtracted from the total remaining time once their turn is over and their respective turn will be incremented
    //depending on their turn taken their salary will also be added
    //the last share of salary will be added from the time remaining of the worker who is taking the last turn
    while (time_remaning > 0)
    {
        if (turn % 2 == 0)
        {
            if (time_remaning < 25)
            {
                salary_of_A += time_remaning * 2;
                time_remaning -= 25;
                turn_taken_by_A++;
                turn++;
            }
            else
            {
                salary_of_A += 25 * 2;
                time_remaning -= 25;
                turn_taken_by_A++;
                turn++;
            }
        }
        else
        {
            if (time_remaning < 75)
            {
                salary_of_B += time_remaning * 2;
                time_remaning -= 75;
                turn_taken_by_B++;
                turn++;
            }
            else
            {
                salary_of_B += 75 * 2;
                time_remaning -= 75;
                turn_taken_by_B++;
                turn++;
            }
        }
    }

    cout<<"turn taken by B to complete a job ::"<<turn_taken_by_A<<"\tsalary of A for the work::"<<salary_of_A<<endl;
    cout<<"turn taken by B to complete a job ::"<<turn_taken_by_B<<"\tsalary of A for the work::"<<salary_of_B<<endl;
    cout<<"total cost of work ::"<<salary_of_A + salary_of_B;
}
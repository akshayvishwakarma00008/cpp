//  A train leaves station A at 4.00 a.m and travels at 80kmph. After every 30 minutes, it reaches
// a station where it halts for 10 minutes. It reaches its final destination B at 1.00 p.m. Display a
// table showing its arrival and departure time at every intermediate station. Also calculate the total
// distance between A and B.

#include <iostream>
using namespace std;

int main()
{
    int total_time = (9 * 60), arrival_time = 0, departure_time = 0, station = 0, total_time_travelled = 0;
    int distance_travelled = 0, time_with_halt = 0;

    int A_hrs;
    int A_min;

    int d_hrs;
    int d_min;

    while (total_time > 0)
    {

        time_with_halt += 40;

        if (time_with_halt <= 540)
        {
            total_time_travelled += 30;
            arrival_time = departure_time + 30;
            departure_time = arrival_time + 10;
            station++;
            distance_travelled = (80 * total_time_travelled / 60);

            int A_hrs = 4;
            int A_min = 0;

            if (arrival_time > 60)
            {
                A_hrs += arrival_time / 60;
                A_min = arrival_time % 60;
                if (A_hrs > 12)
                {
                    A_hrs = A_hrs / 12;
                    A_min += A_hrs % 12;
                }
            }
            else
            {
                A_min = arrival_time;
            }

            int d_hrs = 4;
            int d_min = 0;

            if (departure_time > 60)
            {
                d_hrs += departure_time / 60;
                d_min = departure_time % 60;
                if (d_hrs > 12)
                {
                    d_hrs = A_hrs / 12;
                    d_min += A_hrs % 12;
                }
            }
            else
            {
                d_min = departure_time;
            }

            cout << "station No ::" << station << "    ";
            cout << "arrival time ::" << A_hrs << ":" << A_min << "   ";
            cout << "departure time ::" << d_hrs << ":" << d_min << endl;
        }
        else
        {
            int time_left = time_with_halt - 540;
            station++;
            distance_travelled = (80 * total_time_travelled / 60);

            if (arrival_time > 60)
            {
                A_hrs += arrival_time / 60;
                A_min = arrival_time % 60;
                if (A_hrs > 12)
                {
                    A_hrs = A_hrs / 12;
                    A_min += A_hrs % 12;
                }
            }
            else
            {
                A_min = arrival_time;
            }

            cout << "station No ::" << station << "    ";
            cout << "arrival time ::" << A_hrs << "   ";
            cout << "departure time ::"
                 << "journey completed";
        }

        total_time = total_time - 40;
    }

    cout << "\ntotal_time_taken ::" << float(distance_travelled / 60) << " hrs";
    cout << "\nspeed of train ::" << 80 << " km/hr";
    cout << "\ndistance_travelled ::" << distance_travelled << " km";
}

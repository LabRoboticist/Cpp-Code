//page 227 has the octopus car wash base code

#include <iostream>
#include <iomanip> //setw
#include "Queue.h" //bring in (header) Queue.h file
#include <cstdlib>
#include <ctime>
#include <vector>
#include <map>
using namespace std;

float Random() {
    //needed to make this a diff random each iteration, somehow
    static bool seeded = false;
    if (!seeded) {
        srand(time(0)); // produces the seed only once
        seeded = true;
    }
    float num = ((float)rand()) / RAND_MAX;
    num *= 100;
    //test code
    //cout << "Randomly generated change for job to come in =" << num << "\n"; 
    return num;
}


int main() {
    int time_for_job, //time_for_wash
    minute, //minute
    time_entered_queue,
    jobs_completed = 0,//cars washed
    total_queue_minutes = 0, //total_queue_min
    time_left_on_job = 0, //time_left_on_car
    total_job_process_minutes; //inputed by me*** (specified by assignment)

    float prob_of_arrival;

    QueueADT job_queue;
    int job_counter = 0;
    string current_job = "-";
    map<int, string> job_names; // maps an arrival minute value to job (the other way to get this would be to alter the Queue)
    //acts kind of like a stop watch 

    //getting values from user
    cout << "Enter time to wash one car. \n";  //in the specs given in the exmample the user inputed 5 minuts
    cin >> time_for_job;
    cout << "Enter probability of arrival in any minute: \n"; //user input for probablitiy of jobs to come in
    cin >> prob_of_arrival;
    cout << "Enter total minutes it takes for the car wash to complete: \n"; //new variable needed
    cin >> total_job_process_minutes;

    cout << setw(8) << "Minute"
         << setw(25) << "Name of Job entering Q"
         << setw(35) << "Jobs waiting & Wait Time"
         << setw(30) << "Job being Processed" << endl;

    for (minute = 1; minute <= total_job_process_minutes; ++minute) {
        string arriving_job = "-"; //blank spaces
        string jobs_waiting_time = "-"; //blank spaces

        // Check if a job comes in
        if (Random() < prob_of_arrival) {
            job_counter++;
            string job_name = "Job" + to_string(job_counter);
            job_names[minute] = job_name;
            job_queue.enqueue(minute); 
            arriving_job = job_name;
        }

        // new job when processor is done processing
        if ((time_left_on_job == 0) && !job_queue.empty()) {
            time_entered_queue = job_queue.dequeue();
            current_job = job_names[time_entered_queue];
            total_queue_minutes += (minute - time_entered_queue);
            jobs_completed++;
            time_left_on_job = time_for_job;
        }

        // decrements processing time (waiting)
        if (time_left_on_job != 0) {
            --time_left_on_job;
        } else {
            current_job = "-";
        }

        if (!job_queue.empty()) {
            jobs_waiting_time = "";
            QueueADT temp_queue = job_queue; //temp is used to alter
            for (int i = 0; !temp_queue.empty(); ++i) {
                int arrival = temp_queue.dequeue();
                string name = job_names[arrival];
                int wait = minute - arrival;
                jobs_waiting_time += name + "-" + to_string(wait);
                if (!temp_queue.empty()) jobs_waiting_time += " ";
            }
        }

        cout << setw(8) << minute
             << setw(25) << arriving_job
             << setw(35) << jobs_waiting_time
             << setw(30) << current_job << endl;
    }

    //cout << "\nTotal jobs completed: " << jobs_completed << endl;
    //cout << "Total minutes waited for queue: " << total_queue_minutes << endl;

    return 0;
}
 
//page 227

//(cpu procesing time of jobs)
//jobs instead of cars 
//user input for (variable): minutes, precentage of when job comes in (if p<=randomly generatage value representing precent chance of job comeing in then do something)
//change display to the one speficied in the 

#include <iostream>
#include <iomanip> //setw //#include <iomanip>
#include "Queue.h" //bring in Queue.h file
#include <cstdlib>
#include <ctime>
//#include <conio.h>
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
    cout << "Randomly generated change for job to come in =" << num << "\n"; 
    return num;
}



int main(){

    int time_for_job, //time_for_wash
    minute, //minute
    time_entered_queue, 
    jobs_completed, //cars washed
    total_queue_minutes, //total_queue_min
    time_left_on_job, //time_left_on_car
    total_job_process_minutes; //inputed by me***
    float prob_of_arrival;

    QueueADT job_queue; //car_queue
    // maybe?
    // int Qlength=0;
	// cout << "Type in length of Queue. " << endl;
	// cin>>Qlength;
	// //fill up Test Queue then check if empty
	// for(int i=0; i<Qlength; i++){ //check
	// 	Test.enqueue(i);
	// }

    //getting values from user
    cout << "Enter time to wash one car. \n"; //in the specs given in the exmample the user inputed 5 minuts
    cin >> time_for_job;
    cout << "Enter probabillity of arrival in any minute: \n"; //user input for probablitiy of jobs to come in
    cin >> prob_of_arrival;
    cout << "Enter total minutes it take for the car wash to complete: \n"; //new variable needed
    cin >> total_job_process_minutes;

    //setting default values
    jobs_completed=0;
    total_queue_minutes=0;
    time_left_on_job=0;

    for(minute=1; minute<= total_job_process_minutes; ++minute){
        if(Random()<prob_of_arrival) job_queue.enqueue(minute);
        if((time_left_on_job==0) && !job_queue.empty()){
            time_entered_queue = job_queue.dequeue();
            
            total_queue_minutes=total_queue_minutes+(minute-time_entered_queue);

            ++jobs_completed;
            time_left_on_job=time_for_job;
        }
        if (time_left_on_job !=0) --time_left_on_job;
    }

    
    //output
    cout << setw(4) << jobs_completed << endl;


    return 0;
}

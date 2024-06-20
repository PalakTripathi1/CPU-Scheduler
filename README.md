# CPU-Scheduler
Project Title: CPU Scheduler
Project Description: A multitasking operating system is one that
can simultaneously interleave execution of more than one process.
On single processor machines, this gives the illusion of multiple 
processes  running   concurrently.  Here is a CPU Scheduler which
organises the sequence or schedules various operations sequence to
be executed using algorithms as First Come First Serve and Round  
Robin to implement the process. Here basic idea is the usage of various Algorithms like FCFS like the instruction which was asked first needs to be implemented first,This is done by a data structure like Queue. Also like by using concepts of Circular Queue as in Round Robin. Also, SJM as the shortest job to be executed first.Prioritising the instructions or operations to be executed as in Priority Scheduling.
Learning TakeAways:
Implementing a CPU scheduler provides significant insights into how operating systems manage processes and resources. Here are the key learning takeaways from implementing a CPU scheduler:

Understanding CPU Scheduling Concepts:
Learn how processes and threads are represented in the system and how the scheduler manages them.
Understand the mechanism of context switching and its overhead.
CPU Burst and I/O Burst: Comprehend the alternation between CPU bursts and I/O bursts in process execution.

Types of Scheduling Algorithms
First-Come, First-Served (FCFS): Simple, non-preemptive algorithm; processes are scheduled in the order they arrive.
Shortest Job Next (SJN): Non-preemptive algorithm; selects the process with the shortest CPU burst time.
Shortest Remaining Time (SRT): Preemptive version of SJN; selects the process with the shortest remaining time.
Round Robin (RR): Preemptive algorithm; each process gets a fixed time slice (quantum), rotating through processes in a circular queue.
Priority Scheduling: Processes are assigned priorities; the scheduler selects the process with the highest priority.
Multilevel Queue Scheduling: Multiple queues based on priority, with different scheduling algorithms for each queue.
Multilevel Feedback Queue: Dynamic adjustment of process priorities based on their behavior and history.

Various Parameters:
Throughput: Number of processes completed in a given time period.
Turnaround Time: Time taken from process submission to completion.
Waiting Time: Total time a process spends waiting in the ready queue.
Response Time: Time from process submission until the first response.
Fairness: Ensuring all processes get a fair share of the CPU.

Performance Criteria:
Efficiency: Balancing CPU utilization and minimizing overhead.
Scalability: Handling a large number of processes without significant performance degradation.
Providing consistent performance and response times.

Challenges:
Deadlock and Starvation: Handling situations where processes are stuck indefinitely.
Race Conditions: Ensuring proper synchronization when multiple processes access shared resources.
Load Balancing: Distributing the workload evenly across multiple CPUs in a multiprocessor system.
Memory Management: Interaction between the scheduler and memory management, including paging and swapping.
I/O Management: Coordinating CPU scheduling with I/O operations to optimize overall system performance.
Interrupt Handling: Managing interrupts and ensuring timely processing without disrupting the scheduler.

Implementing a CPU scheduler provides a comprehensive understanding of how operating systems work at a fundamental level, emphasizing both theoretical concepts and practical challenges in managing computational resources efficiently.
Also i went through various Fast Processing systems like CACHE and its REPLACEMENT POLICIES which makes the processes inside the device FASTER.

Resources:
https://www.geeksforgeeks.org/cpu-scheduling-in-operating-systems/
https://blogs.vmware.com/vsphere/2019/05/which-vsphere-cpu-scheduler-to-choose.html
https://cseweb.ucsd.edu/classes/sp16/cse120-a/applications/ln/lecture5.html
https://www.futurelearn.com/info/courses/computer-systems/0/steps/53513
https://www.youtube.com/playlist?list=PLBlnK6fEyqRitWSE_AyyySWfhRgyA-rHk (For Basics)
Chapter-4 of Linux Kernel Development by Robert Love (For implementation Details)

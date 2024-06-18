#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Process
{
    int id, arrival, burst, priorities, remaining, start, finish, waiting, turnaround;
    Process(int pid, int at, int bt, int prio)
        : id(pid), arrival(at), burst(bt), priorities(prio),
          remaining(bt), start(-1), finish(-1),
          waiting(0), turnaround(0) {}
};
void firstcfirsts(vector<Process> &p)
{
    int current = 0;
    for (auto &pw : p)
    {
        if (current < pw.arrival)
        {
            current = pw.arrival;
        }
        pw.start = current;
        current += pw.burst;
        pw.finish = current;
        pw.turnaround = pw.finish - pw.arrival;
        pw.waiting = pw.turnaround - pw.burst;
    }
}
void Round_Robin(vector<Process> &p, int timeQ)
{
    queue<Process *> read;
    int current = 0;
    for (auto &pw : p)
    {
        if (pw.arrival <= current)
        {
            read.push(&pw);
        }
    }
    while (!read.empty())
    {
        Process *t = read.front();
        read.pop();
        if (t->remaining <= timeQ)
        {
            current += t->remaining;
            t->finish = current;
            t->turnaround = t->finish - t->arrival;
            t->waiting = t->turnaround - t->burst;
            t->remaining = 0;
        }
        else
        {
            t->remaining = t->remaining - timeQ;
            current = current + timeQ;
            read.push(t);
        }
        for (auto &pw : p)
        {
            if (pw.arrival <= current && pw.remaining > 0 && find(read.begin(), read.end(), &pw) == read.end())
            {
                read.push(&pw);
            }
        }
    }
}

#include "job.h"

Job::Job(const QString&, int)
{
    void EarnMoney (int jobIndex) {
        money += job_list[jobIndex].second;
    }
}

QString Job::getTitle() const
{
    return job_title;
}

int Job::getSalary() const
{
    return job_salary;
}

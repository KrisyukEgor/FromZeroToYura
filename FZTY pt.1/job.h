#ifndef JOB_H
#define JOB_H
#include <QList>
#include <QString>
#include <QPair>

class Job

{
public:
    Job(const QString&, int);

    QString getTitle() const;
    int getSalary() const;

private:



    QPair <QString, int> temp;
    temp.second = 10;

    job_list.append(temp);

};

#endif // JOB_H

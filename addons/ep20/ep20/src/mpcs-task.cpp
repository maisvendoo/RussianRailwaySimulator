#include "mpcs-task.h"

Task::Task(QObject *parent) : QObject (parent)
{

}

Task::~Task()
{

}

void Task::init()
{

}

void Task::step(state_vector_t &Y, double t, double dt,
                const mpcs_input_t &mpcs_input,
                mpcs_output_t &mpcs_output)
{

}

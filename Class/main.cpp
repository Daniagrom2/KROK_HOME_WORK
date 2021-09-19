#pragma once;

#include "Counter.h"
#include "Group.h"

int main() {
    //////1//////
//    Counter s(3,1);
//s.add_one();
//s.info_to_cmd();
//    s.add_one();
//    s.info_to_cmd();
//    s.add_one();
//    s.info_to_cmd();
    //////2///////
    Group *s = new Group();
    s->set_student(0);
    s->info_to_cmd();
    s->add_student();
    s->info_to_cmd();
    s->add_student();
    s->info_to_cmd();
    delete s;
    return 0;
}


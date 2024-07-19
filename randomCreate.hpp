#ifndef RANDOMCREATE_HPP
#define RANDOMCREATE_HPP

#include <random>
#include <string>
#include <time.h>
#include <vector>
#include <algorithm>
#include <unistd.h>
#include "mainwindow.h"
#include <memory>
#include <thread>

using std::vector;
using std::string;
using std::mt19937;
using std::shuffle;
using std::shared_ptr;
using std::make_shared;
using std::ref;

vector<unsigned int>& random_create_thread(unsigned int max,bool ease=0,unsigned int seed=0,unsigned int pass=0,bool *thread_finish=nullptr);
unsigned int random_out(unsigned int length,bool easeable=0,unsigned int seedIn=0,bool start=0,unsigned int pass=0);
unsigned int random_out(vector<unsigned int> & listIn,unsigned int startpoint);
void ramdon_thread(int seed,vector<unsigned int>& list_in ,unsigned int max,unsigned int pass,bool &finish);



#endif // RANDOMCREATE_HPP

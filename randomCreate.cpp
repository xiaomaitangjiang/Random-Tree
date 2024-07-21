#include "randomCreate.hpp"


vector<unsigned int>& random_create_thread(unsigned int max,bool ease,unsigned int seed
                                    ,unsigned int pass,bool *thread_finish)
{
    static vector<unsigned int> numList;
    if(numList.empty())
    {
        if(thread_finish!=nullptr)
        {
            bool a=*thread_finish;
            std::thread rand_th (ramdon_thread,seed,ref(numList),max,pass,ref(a));
            rand_th.join();
            *thread_finish=a;
        }
        else
        {
            bool a=0;
            std::thread rand_th (ramdon_thread,seed,ref(numList),max,pass,ref(a));
            rand_th.join();
        }
    }
    else
    {
        if(ease)
        {
            numList.clear();
        }
    }

    return numList;
}

unsigned int random_out(vector<unsigned int> & listIn,unsigned int startpoint)
{
    if(startpoint<=(listIn.size()-1))
    {
        static unsigned int start=startpoint;

        if (start>(listIn.size()-1))
        {start=startpoint;}

        unsigned int num_out;

        num_out =listIn[start];
        start++;

        return num_out;
    }
    else
    {return 0;}
}

unsigned int random_out(unsigned int length,bool easeable,unsigned int seedIn,bool start
                        ,unsigned int pass)
{
    vector<unsigned int>& listIn= random_create_thread(length,easeable,seedIn,pass);
    static unsigned int times=0;
    if(start)
    {

        if(times<=listIn.size()-1)
        {
            unsigned int num_out=listIn[times];
            times++;
            return num_out;
        }
    }
    if(easeable)
    {times=0;}
    return 0;
}


void ramdon_thread(int seed,vector<unsigned int>& list_in ,unsigned int max,unsigned int pass,bool &finish)
{
    if(seed==0)
    {
        seed=(unsigned int)time(0);
    }
    mt19937 a(seed);

    list_in.resize(max);
    unsigned int i=1;
    for(auto &a: list_in)
    {
        if(i==pass)
        {i++;}

        a=i;
        i++;
    }
    if(pass<=max && pass>=1)
    {list_in.erase(list_in.end()-1);}
    shuffle(list_in.begin(),list_in.end(),a);
    finish=1;
}




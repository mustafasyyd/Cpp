#include<iostream>

class Counter
{
    private:
        //pointer to counter.
        static Counter* instance;
        Counter() {}

    public:
        //Static member fn, factory mthd.
        static Counter* make_unique_counter(){
            if (instance == 0)
                instance = new Counter();
            return instance;
        }
};
Counter* Counter::instance = 0;


int main()
{
    Counter* counter = Counter::make_unique_counter();


    return 0;
}
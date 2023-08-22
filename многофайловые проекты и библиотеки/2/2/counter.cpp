
#include "counter.h"
  

    Counter::Counter()
    {
        num = 1;
    }

    Counter::Counter(int in_num)
    {
        num = in_num;
    }

    int Counter::plus()
    {
        num++;
        return num;
    }
    int Counter::minus()
    {
        num--;
        return num;
    }
    int Counter::res()
    {
//      cout << num << endl;
        return num;
    }

  
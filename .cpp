#include <iostream>
using namespace std;

class queues
{
private:
       static const int max = 5;
       int FRONT, REAR;
       int queue_array[5];

public:
       queues()
       {
              FRONT = -1;
              REAR  = -1;
       }
       void insert()
       {
               int num;
               cout << "Enter a number :" ;
               cin >> num;
               cout << endl;

               if ((FRONT == 0 && REAR == max -1) || (FRONT == REAR +1))
               {
                /* code */
               }
               
       }


}



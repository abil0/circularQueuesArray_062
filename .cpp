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
//step 1
               if ((FRONT == 0 && REAR == max -1) || (FRONT == REAR +1))
               {
                cout << "\nQueue overflow\n"; 
                return;
               }

//step 2
                if (FRONT == -1)
                {
                    FRONT = 0;
                    REAR  = 0;
                }
                else
            
               
               
               
       }


}



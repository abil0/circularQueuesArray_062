/**
 * @mainpage Documentation Circular Queues
 * 
 * @section Introduction
 * Project ini merupakan struktur data
 * menggunakan struktur data queues dengan pendekatan circular arrays
 * 
 * @section Operations
 * Project ini memiliki beberapa operasi antara lain:
 * 1.Insert
 * 2.Delete
 * 3.Display
 *  
 * @section Cara Penggunaan
 * 1.en queue
 * 2.de queue
 * 3.display
 * 4.exit
 * 
 * @author Profil
 * - nama : {Nabil Rafif}
 * - nim  : {20240140062}
 * - kelas: {TI B}
 * 
 * @brief
 * @version 1.0
 * @date 2025-06-24
 * 
 * @copyright {Nabil Rafif}@umy.ac.id (c) 2025
 * 
*/


#include <iostream>
using namespace std;
/**
 * @class Queues
 * @brief class ini untuk operasi lengkap
 * 
 * 
 * 
 */
class queues
{
private:  
       int FRONT; ///< variable private front untuk menyimpan posisi depan antrian
       int REAR; ///< variable private rear untuk menyimpan posisi belakang antrian
       int max = 5; ///< variable private max untuk menyimpan ukuran maximum antrian
       int queue_array[5]; ///< variable private queue_array untuk menyimpan elemen antrian

public:
       /**
        * @brief Construct a new queues object
        * set default queues null
        */
       queues()
       {
              FRONT = -1;
              REAR  = -1;
       }

       /**
        * @brief method untuk memasukkan data dalam antrian
        * data dimasukkan dalam variable queue_array
        */
       void insert()
       {
               int num;///< variable num untuk menyimpan nilai
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
                {
               if (REAR == max -1)
                   REAR = 0;

                else
                   REAR = REAR +1;
               
                }
                queue_array[REAR] = num;
            }
            /**
             * @brief method untuk menghapus data dalam antrian
             * data dihapuskan dari dalam variable queue_array
             */
     void remove()
        {
        // cek apakah antrian kosong 
        if (FRONT == -1)
        {
            cout << "queue underflow\n";
            return;
        }
        cout <<  "\nThe element deleted from the queue is :" << queue_array
        [FRONT] << "\n";

        // cek antrian hanya punya 1 element
        if (FRONT == REAR)
        {
            FRONT = -1;
            REAR  = -1;
        }
        else
        {
            // jika element hanya berada di posisi terakhir array, kembali ke awal array
          if (FRONT == max -1)
              FRONT = 0;
          else
             FRONT = FRONT +1;
        }
    }
    /**
     * @brief method untuk menampilkan data dalam antrian
     * data ditampilkan yang berada dalam variable queue_array
     */
    void display()
    {
        int FRONT_position = FRONT; ///< variable front_posisition untuk menandakan posisi element pertama pada variable front
        int REAR_position  = REAR; ///< variable rear_posisition untuk menandakan posisi element terakhir pada variable rear

        // cek antrian kosong
        if (FRONT == -1)
        {
           cout << "queue is empty\n";
           return;
        }
        cout << "\nElements in the queue are ....\n";
        // jika FRONT_position <= REAR_position, iterasi dari Front hingga Rear
        if(FRONT_position <= REAR_position)

        {
            while(FRONT_position <= REAR_position)
            {
           cout << queue_array[FRONT_position] << "   ";
           FRONT_position++;
            }
        cout << endl;
        }
    
    else
    {
        // jika FRONT_position <= REAR_position, iterasi dari Front hingga array
        while (FRONT_position <= max -1 )
        {
            cout << queue_array[FRONT_position] << "   ";
            FRONT_position++;
        }
        cout << endl;
    }
    

   }
    
};
/**
 * @brief method utama utk menjalan kan program
 * 
 * @return int
 */

int main()
{
    queues q;///< objek untuk menggunakan member yang ada pada class queues
    char ch;///< variable ch utk menyimpan pilihan pada menu yang diberikan

    while (true)
    {
        try
        {
            cout << "Menu" << endl;
            cout << "1. Implement insert operation" << endl;
            cout << "2. Implement delete operation" << endl;
            cout << "3. Display values" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice (1-4) :";
            cin >> ch;
            cout << endl;

            switch (ch)
            {
            case '1':
            {
                q.insert();
                break;
            }
            case '2':
            {
                q.remove();
                break;
            }
            case '3':
            {
                q.display();
                break;
            }
            case '4':
            {
                return 0;
            }
            default:
            {
                cout << "invalid option!!" << endl;
                break;
            }
            }
        }
        catch(exception& e)
        {
           cout << "check for the value entered " << endl;
        }
        
    }
    return 0;
}


//20240140062






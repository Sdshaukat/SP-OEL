/*#include <string>
#include <iostream>
using namespace std;

int main()
{
    try
    {
        string input;

        cout << "Would you like to input? (y/n): ";
        cin >> input;
        if (input != "y")
        {
            throw string("exception ! error");
        }
    }
    catch (string e)
    {
        cout << e << endl;
    }
}
*/
/*#include <iostream>
#include "Header.h"
using namespace std;

int main() {
    gettax();

}
*/

#include <conio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include<direct.h>
#include <iostream>
#include <ctime>

#include <fstream>
#include <string.h>
#include <string>

using namespace std;
void copy(string path) {
    //Copy the contents of File 1 in a Second File File 2 and Erase the Contents of File 1
    string myText;

    // Read from the text file
    ifstream MyReadFile(path + "/oel1.txt");
    ofstream MyFile("C:/Users/saads/Desktop/OEL/");
    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText)) {
        // Output the text from the file
        MyFile << myText;
    }

    // Close the file
    MyReadFile.close();
}


void task1(string user) {

    string filepath = "C:/Users/saads/Desktop/OEL/oel1.txt" + user;
    //Create Directory and a file named File 1 and a file name File 2
    if (_mkdir(filepath.data()) == -1)
        cout << "Directory Created";
    else
        cout << "Error Occured";

    ofstream MyFile(filepath + "C:/Users/saads/Desktop/OEL/oel1.txt");

    // Write to the file1 
    //Take input in File 1
    string enrollment;
    cout << "\nInput Your Enrollment Number: ";
    cin >> enrollment;
    MyFile << user << "     " << enrollment;
    // Close the file
    MyFile.close();


    copy(filepath);



}

int main()
{
    string username;


    // convert now to string form

    cout << "Input Your Name: ";
    cin >> username;
    task1(username);
}


/*#include <string>
#include <iostream>
#include <thread>

using namespace std;

void calculator() {
    system("calc");
}
void chrome() {
    system("start chrome");
}
int main()
{

    std::thread worker1(calculator);
    std::thread worker2(chrome);


    thread::id t1_id = worker1.get_id();
    thread::id t2_id = worker2.get_id();

    cout << "\nID associated with thread1= "
        << t1_id << endl;
    cout << "\nID associated with thread2= "
        << t2_id << endl;

    worker1.join();
    worker2.join();

}
*/

#include <bits/stdc++.h>
using namespace std;
class hero
{ // properties
};
class player
{ // properties or data member
public:
    int power;
    char *name;
    static int time;

private:
    char id;

public:
    // private:// if we would have done it,then we couldn't use getter and setter inside main(), as it would have become private

    char getid()
    {
        return id;
    }
    void setid(char ch)
    {
        id = ch;
    }
    void setpower(int power)
    {
        this->power = power; //"this" is a pointer which stores the address of the data member of the class
    }
    int getpower()
    {
        return power;
    }
    void print()
    {
        cout << "\n[ Power:" << this->power << " , ";
        cout << "id:" << this->id << " , ";
        cout << "Name:" << this->name << " ]\n\n";
    }
    // constructor (with or without parameter)
    player()
    {
        cout << "constructor called\n";
        name = new char[100];
    }
    // when  a constructor with parameterised value is created in the class,then default constructor with unparameterised value is deleted and it gives error upon calling inside main() function if it is called without parameter
    player(int power, char id)
    {
        this->power = power;
        this->id = id;
        // cout << "Address of this pointer for data member of rohit is " << this << endl;
    }
    player(int power)
    {
        this->power = power;
        // cout << "Address of this pointer for data member of virat is " << this << endl;
    }
    // copy constuctor is already inbuilt in the class but still we can create a new one, then inbuilt copy constructor in the class will stop working
    player(player &temp)
    { // pass by reference otherwise infinite loop for copying
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch; // deep copy
        this->power = temp.power;
        this->id = temp.id;
    }
    void setname(char name[100])
    {
        strcpy(this->name, name);
    }
    static int func()
    {
        return time; // this keyword cannot be used in static function and only static data member can be accessed in it
    }
    // destructor automatically called when the scope of the objects end in main function(in static memory allocation) and has to be called manually during dynamic memory allocation
    ~player()
    {
        cout << "Destructor called\n";
    }
};

int player::time = 0; // initialisation of static
int main()
{ /*//static memory allocation
  player p1;
  cout << "Size of Player class is: " << sizeof(player) << endl; // 4 byte for each data member,independent of data type of the member
  cout << "Size of hero is: " << sizeof(hero) << endl;           // if there is no any data member,then the size id by default 1
  // cout<<p1.id<<endl;//it is private inside class and can't be accessed directly,we use getter or setter in this case to access the private member of the class
  cout << p1.power << endl; // garbage value
  p1.power = 89;
  cout << "Power of p1 is:" << p1.power << endl;
  p1.setid('s');
  cout << p1.getid() << endl;

  //dynamic memory allocation
  player*p2=new player;
  p2->power=822;//or (*p2).power=822;
  cout<<"The power of p2 is: "<<p2->power<<endl;
  p2->setid('X');//(*p2).setid('X');
  cout<<"The id of p2 is: "<<p2->getid()<<endl;*/

    /* // constructor
     player rohit(234, '8'); // constructor called(double parameterised wala call hoga)
     rohit.print();
     cout << "Address of Rohit is: " << &rohit << endl;

     player *virat = new player(18); // constructor called(single parametrised wala call hoga)
     cout << "Address of virat is: " << virat << endl;
     virat->print();

     // copy constructor
     player p11(23, 'k');
     p11.print();
     player p22(p11);
     p22.print();
 */
    /*// deep copy and shallow copy
    player p5(23, 'd');
    char name[9] = "Himanshu";
    p5.setname(name);
    p5.print();
    player p6(p5);
    // player p6=p5;  *another method to create a copy constructor
    p6.print();
    p5.name[7] = 'i'; // since name is a publicly data member
    p5.print();
    p6.print(); // the name of p6 also changed(shallow copy) shallow copy happens when default copy constructor is used to copy the value because the value at that address changes
                // and deep copy happens when we don't use default copy constructor and we create a new mwmory block to copy and update the value of any data member
*/
    // // destructor

    // player p7; // static allocation me destructor automatically called
    // player *p8 = new player;
    // delete p8; // dynamic allocation me manually called

    // static keyword
    // cout << player::time << endl; // we can access static data member of class without creation of object
    // player p9;
    // cout<<p9.time<<endl;
    // player p10;
    // p10.time=18;
    // cout<<p10.time<<endl;
    // cout<<p9.time<<endl;
    cout << player::func() << endl;

    return 0;
}
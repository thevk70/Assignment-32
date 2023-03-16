// Assignment-32
// Overriding, overloading, constructor in inheritance
// 1. Create a class FLOAT that contains one float data member. Overload all the four
// arithmetic operators so that they can operate on the objects of FLOAT.
// #include <iostream>
// using namespace std;
// class Float
// {
//     float x;
//     public:
//     void setData(float a)
//     {
//         x = a;
//     }
//     void getData()
//     {
//         cout<<"x = "<<x<<endl;
//     }
//     Float operator +(Float obj)
//     {
//         Float temp;
//         temp.x = x+obj.x;
//         return temp;
//     }
//     Float operator -(Float obj)
//     {
//         Float temp;
//         temp.x = x-obj.x ;
//         return temp;
//     }
//     Float operator *(Float obj)
//     {
//         Float temp;
//         temp.x = x*obj.x;
//         return temp;
//     }
//     Float operator /(Float obj)
//     {
//         Float temp;
//         temp.x = x/obj.x ;
//         return temp;
//     }
// };
// int main()
// {
//     Float c1,c2,c3,c4,c5,c6;
//     c1.setData(20);
//     c2.setData(10);

//     c3 = c1 + c2;
//     c3.getData();

//     c4 = c1-c2;
//     c4.getData();

//     c5 = c1*c2;
//     c5.getData();

//     c6 = c2/c1;
//     c6.getData();

//     return 0;
// }

// 2. Define a class Rectangle and overload area function for different types of data type.
// #include <iostream>
// using namespace std;
// class Rectangle
// {
//     public:
//     int area(int l,int b)
//     {
//        return l*b;
//     }
//     float area(float l,float b)
//     {
//        return l*b;
//     }
//     double area(double l,double b)
//     {
//        return l*b;
//     }
// };
// int main()
// {
//     Rectangle obj;
//     cout<<"Area :: "<<obj.area(4,5)<<endl;
//     cout<<"Area :: "<<obj.area(4.01,5.23)<<endl;
//     cout<<"Area :: "<<obj.area(4.5643,5.5532)<<endl;
//     return 0;
// }

// 3. Define a base class Animals having member function sound() . Define another derived
// class from Animals class named Dogs. You need to override the sound function of the
// base class in the derived class.
// #include <iostream>
// using namespace std;
// class Animals
// {
//    public:
//    void sound()
//    {
//      cout<<"Animal Sound"<<endl;
//    }
// };
// class Dog : public Animals
// {
//     public:
//     void sound()
//     {
//         cout<<"Dog's Sound."<<endl;
//     }
// };
// int main()
// {
//     Dog d;
//     d.sound();
//     return 0;
// }

// 4. Define a class Addition that can add 2 or 3 numbers of different data types using
// function overloading.
// #include <iostream>
// using namespace std;
// class Addition
// {
//     public:
//     int Add(int a,int b,int c = 0)
//     {
//         return (a+b+c);
//     }
//     float Add(float a,float b,float c = 0)
//     {
//         return (a+b+c);
//     }
//     double Add(double a,double b,double c = 0)
//     {
//         return (a+b+c);
//     }
// };
// int main()
// {
//     Addition obj;
//     cout<<"Sum = "<<obj.Add(1,2,3)<<endl;
//     cout<<"Sum = "<<obj.Add(1,2)<<endl;
//     cout<<"Sum = "<<obj.Add(1.1,2.2,3.3)<<endl;
//     cout<<"Sum = "<<obj.Add(1.123434,2.465454,3.76867854)<<endl;
//     return 0;
// }

// 5. Define a class A having multiple constructors. Define another class B derived from class
// A. Create derived class constructors and show use of constructor in this single
// inheritance.
// #include <iostream>
// using namespace std;
// class A
// {
//    public:
//    A()
//    {
//      cout<<"A's Default Constructor Called."<<endl;
//    }
//    A(int a)
//    {
//      cout<<"A's Parameterized Constructor Called."<<endl;
//    }
// };
// class B : public A
// {
//    public:
//    B() : A()
//    {
//       cout<<"B's Default Constructor Called."<<endl;
//    }
//    B(int x) : A(x)
//    {
//      cout<<"B's Parameterized Contructor Called"<<endl;
//    }
// };
// int main()
// {
//     A a,obj(1);
//     B ob;
//     return 0;
// }

// 6. C++ Program to illustrate the use of Constructors in multilevel inheritance of your choice.
// #include <iostream>
// using namespace std;
// class A
// {
//     public:
//     A()
//     {
//         cout<<"A's Default Constructor Called."<<endl;
//     }
//     A(int a)
//     {
//          cout<<"A's Parameterized Constructor Called."<<endl;
//     }
// };
// class B : public A
// {
//     public:
//     B()
//     {
//         cout<<"B's Default Constructor Called."<<endl;
//     }
//     B(int a)
//     {
//          cout<<"B's Parameterized Constructor Called."<<endl;
//     }
// };
// class C : public B
// {
//     public:
//     C()
//     {
//         cout<<"C's Default Constructor Called."<<endl;
//     }
//     C(int a)
//     {
//          cout<<"C's Parameterized Constructor Called."<<endl;
//     }
// };
// int main()
// {
//     cout<<"Calling B's Default constructor."<<endl;
//     B o;
//     cout<<"Calling B's Parameterized constructor."<<endl;
//     B c(1);
//     cout<<"Calling B's Default constructor."<<endl;
//     C obj;
//     cout<<"Calling B's Parameterized constructor."<<endl;
//     C ob(1);
//     return 0;
// }

// 7. C++ Program to illustrate the use of Constructors in single inheritance of your choice.
// #include <iostream>
// using namespace std;
// class A
// {
//     public:
//     A()
//     {
//         cout<<"A's Default Constructor Called."<<endl;
//     }
//     A(int a)
//     {
//         cout<<"A's Parameterized Constructor Called."<<endl;
//     }
// };
// class B : public A
// {
//     public:
//     B()
//     {
//         cout<<"B's Default Constructor Called."<<endl;
//     }
//     B(int a)
//     {
//         cout<<"B's Parameterized Constructor Called."<<endl;
//     }
// };
// int main()
// {
//     B obj;
//     return 0;
// }

// 8. Write a C++ program to find the factorial of a number using copy constructor
// #include <iostream>
// using namespace std;
// class A
// {
//     int x;
//     public:
//     A(int a){x = a;}     //Parameterized Constructor
//     A(A &obj)            //Copy Constructor
//     {
//         x = obj.x;
//     }
//     void fact()
//     {
//         int fact = 1;
//         for (int i = 1; i <= x; i++)
//         {
//             fact = fact * i;
//         }
//         cout<<"Factorial : "<<fact<<endl;
//     }
// };
// int main()
// {
//     A obj(5);
//     obj.fact();

//     A o(obj);
//     o.fact();
//     return 0;
// }

// 9. Write a C++ program to calculate the area of triangle, rectangle and circle using
// constructor overloading. The program should be menu driven.
// #include <iostream>
// #include <math.h>
// using namespace std;

// class area
// {
//     float ar;

// public:
//     area(float r)
//     {
//         ar = 3.14 * r * r;
//     }
//     area(float l, float b)
//     {
//         ar = l * b;
//     }
//     area(float a, float b, float c)
//     {
//         float s;
//         s = (a + b + c) / 2;
//         ar = s * (s - a) * (s - b) * (s - c);
//         ar = pow(ar, 0.5);
//     }
//     void display()
//     {
//         cout << "\n Area : " << ar;
//     }
// };
// int main()
// {
//     int ch;
//     float x, y, z;
//     do
//     {
//         cout << "\n\n 1. Area of Circle";
//         cout << "\n 2. Area of Rectangle";
//         cout << "\n 3. Area of Triangle";
//         cout << "\n 4. Exit";
//         cout << "\n\n Enter Your Choice : ";
//         cin >> ch;
//         switch (ch)
//         {
//         case 1:
//         {
//             cout << "\n Enter Radius of the Circle : ";
//             cin >> x;
//             area a1(x); 
//             a1.display();
//         }
//         break;
//         case 2:
//         {
//             cout << "\n Enter Length and Breadth of the Rectangle : ";
//             cin >> x >> y;
//             area a2(x, y);
//             a2.display();
//         }
//         break;
//         case 3:
//         {
//             cout << "\n Enter Sides of the Triangle : ";
//             cin >> x >> y >> z;
//             area a3(x, y, z);
//             a3.display();
//         }
//         break;
//         case 4:
//             exit(0);
//         default:
//             cout << "\n\n Invalid Choice ...";
//         }
//     } while (ch != 4);
//     return 0;
// }

// 10.Create a C++ class for player objects with the following attributes: player no., name,
// number of matches and number of goals done in each match. The number of matches
// varies for each player. Write a parameterized constructor which initializes player no.,
// name, number of matches and creates an array for number of goals and number of
// matches dynamically.
// #include <iostream>
// using namespace std;
// class player
// {
//     int player_no;
//     string name;
//     int no_of_match;
//     int *goals;  //Dynamic Array
//     public:
//     player(int pno,string na,int nom)
//     {
//         player_no = pno;
//         name = na;
//         no_of_match = nom;
//         goals = new int [no_of_match];
//         for (int i = 0; i < no_of_match; i++)
//         {
//             cout<<"Enter No. of Goals in Match "<<i+1<<" : ";
//             cin>>goals[i];
//         }
        
//     }
//     void show()
//     {
//         cout<<"\n\nPlayer No :: "<<player_no<<endl;
//         cout<<"Name :: "<<name<<endl;
//         cout<<"No of Match :: "<<no_of_match<<endl;
//         for (int i = 0; i < no_of_match; i++)
//         {
//             cout<<"No of Goals in Match "<<goals[i]<<endl;
//         }
        
//     }
// };
// int main()
// {
//     player p(39,"Vishwajeet Kumar",3);
//     p.show();
//     return 0;
// }
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <stdexcept>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <conio.h>
#include <fstream>
#include <ostream>
#include <vector>
#include <iostream>
#include<windows.h>
#include <string>
#include "main.cpp"
using namespace std;
namespace a
{
    struct x{};
    void g(x)
    {
    cout<<"calling";
    }
}
int main()
a::x;
a::g();










/*
void stduentlist()
{
   class students
   {
   public:
       int age=10;
   void display()
   {
       cout<<this->age;
   }
   class prefectname
   {
   public:
       string name="evans";
       void print()
       {
           cout<<this->name;
       }
   };
   prefectname pnmae;
   };
   students stds;
   stds.display();

}
int main()
{
stduentlist();
}

----------------
/*
//neested classes
class person
{
public:
    string name="Joshua";

    class address
    {
    public:
        string country="kenya";
        class street
        {
        public:
            string streetname="langata";
        };
        street str;
    };
    address addr;
};
int main()
{

person p;
cout<<p.addr.country;
cout<<p.addr.str.streetname;
}
--------------------
//abstract classes implemented thru' abstract functions
class person
{
public:
    virtual void introduce()=0;
    virtual int  age()=0;
};
void person::introduce()
{
    cout<<"hey from person";
}
int person::age()
{
        cout<<12;
}

class student:public person
{
public:
    void introduce()
    {
        cout<<"student";
        person::introduce();

    }

  int age(){person::age();}

};
int main()
{
    student pes;
    pes.introduce();
    pes.age();

}

--------------------
/*
class father

{
protected:
     int height;
public:
};
class mother
{
protected:
    string haircolor;
public:
};
class me:public father,public mother
{
public:
    void  setmother(string haircolor)
    {
        this->haircolor=haircolor;
    }
    void setfather(int height)
    {
    this->height=height;
    }

    void display()
    {
        cout<<this->haircolor<<this->height;
    }
};
int main()
{
me person;
person.setfather(54);
person.setmother("jane");
person.display();
}

-------------

class person
{
protected:
    string name;
    int age=11;
public:
    void setname(string name)
    {
    this->name=name;
    }
};
class student:private person
{
public:
    person::age;
    person::name;
void display()
{
cout<<this->name;
}
void setstudentname(string name)
{
    setname(name);
}
};

int main()
{

student sts;
sts.setstudentname("freddy");
sts.display();
cout<<sts.age;
sts.name;
}

----------------------

class person
{
int addr=6927;
public:
static int age;
static int counter;
static void name()
{
cout<<++counter;
}
friend void display(person p);
};

void display(person p)
{
    cout<<p.addr<<endl;
    cout<<p.age<<endl;
    cout<<p.counter<<endl;
    p.name();
}
int person::age=32;
int person::counter=0;
int main()
{
person p;
display(p);
}
--------------------
/*
template<class bucky>
int main()
{

bucky a,b;
char c='*';
cout<<"enter a";
cin>>a;
cout<<"enter b";
cin>>b;
cout<<"operator * + -"<<endl;
cin>>c;

switch(c)
{
    case '*':
        cout<<a*b;
    break;

    case '+':
        cout<<a+b;
    break;

    case '-':
        cout<<a-b;
    break;
    default:
    cout<<"kk";
}
}
/*
class person
{
private:
    int age;
protected:
    string name;
protected:
    int salary;
};
class student:public person
{
public:
void  setage(string name)
{
this->name=name;
}
string getage()
{
return this->name;
}
};
int main()
{
cout<<stds.getage();
}
-----------------

/*
class person{

private:
    int month;
    int day;
    int year;
public:
    person(int m,int d,int year);
    void print();
};
person::person(int m,int d,int y)
{
this->day=d;
this->month=m;
this->year=y;
};
void person::print()
{
   cout<<this->day<<this->month<<this->year;

}


int main()
{

person p(10,25,20);
p.print();
}
/*
class person{

public:
    person(int a,int b);
    void print();
private:
    int regvar;
    const int constvar;
public:
    void setatge(int a)
    {
    }
    int getage()
    {
        return regvar;
    }
};
person::person(int a,int b)
:constvar(b),regvar(a)
{
}
void person::setatge(10)
{

cout<<'a';
}


void person::print()
{
    cout<<constvar<<regvar;
}
*/



/*
struct emp
{
int eno;
char name[20];
float esal;

};
struct emp *ptr;

int main()
{
//void * size_t malloc(size_t size)
for(int i=0;i<3;i++)
{
ptr=(emp*)malloc(sizeof(emp));
cout<<"enter Eno"<<endl;
cin>>ptr->eno;
cout<<"enter Esal"<<endl;
cin>>ptr->esal;
cout<<"enter Name"<<endl;
cin>>ptr->name;
}
for(int i=0;i<2;i++)
{
cout<<ptr->eno<<ptr->esal<<ptr->name;
}
}


/*
--------------
int main()
{
char a[]="hello";
char b[]="backslash";

for(int i=0;i<strlen(b);i++)
{
a[i]=b[i];
}
cout<<b<<endl;
}
------------------
int y=1,x=2;
while(--x,y--)
{
    --x;
}
cout<<x<<y<<endl;
}

char x=120;
while(++x>0)
{
    printf("%d\n",x);
}
}
-----------------
/*
int main()
{
int i;
if(printf("%d",strlen("\n")))
{
cout<<"hello";
}
else
 printf("%s","jobless");



}




/*
int *c=new int;
//cout<<c<<endl;
int *p=new int;
*p=90;
//cout<<*p<<endl;
int *ptr=(int*)malloc(10);
*ptr=400;
cout<<*ptr<<endl;
delete ptr;
cout<<*ptr<<endl;

}
  /*
char names[10];
char *lines=names;
scanf("%s",lines);
cout<<lines;
}
----------
int a[5]={1,2,3,4,5};
int *ptr=a+1;
int *ptr2=a+4;

for(int i=0;i<5;i++)
{
}
cout<<(*ptr2-*ptr);


}

char str1[]="computers";
char str2[10];
for(int i=0;i<str1[i]!='\0';i++)
{
str2[i]=str1[i];
cout<<str2[i];
}
-----------------------
//str1[i]!='\0'
//char names[6]={'a','a','a','a','a'};
//printf("%c",names[9 ]);
//char ch =getchar();
//scanf("%c",ch);
/*
 int a[2]={1,2};
 int *ptr=&a[0];
 cout<<*(ptr+1);


---------------
/*
int*  print()
{
 int *x=new int(10);
  return &(*x);

}
int main()
{
    int n=10;
    int *ptr=&n;
    cout<<*ptr;
    delete ptr;
    cout<<ptr;
     cout<<*(print());
}
----------------

/*
void print(int *p,int sizeofarr)
{
    for(int i=0;i<sizeofarr;i++)
    {
        cout<<p[i]<<*(i+p)<<endl;
        cout<<*(p+i)<<*(i+p)<<endl;
        cout<<i[p]<<*(i+p)<<endl;
    }

}

int main()
{
int p[5]={1,2,3,4,5};
int sizeofarr=sizeof(p)/sizeof(int);

print(p,sizeofarr);
}
-------------------
 /*
 float f=12.23f;
 void *v;
 v=&f;
 float val=(*(float *)v);
 cout<<val;

}

    char ch='a';
    char *v=&ch;
    char p=(*(int*)v);
    cout<<p;
}
-----------
class person
{
public:
int counts;
};
int main()
{
int b;
char* lines[3];

*(lines+0)="hello";
*(lines+1)="hello";
*(lines+2)="hello";

cout<<*lines+0;
int *pcost=new int[3];

*(pcost+0)=10;
*(pcost+1)=12;
*(pcost+2)=11;
cout<<*(pcost+2);
person  p;
p.counts;

//cout<<*pcost;
//delete pcost;
//cout<<*pcost;
}



/*
int main()
{
 int n;
 int *ptr=new int[n];
 for(int i=0;i<n;i++)
 {
cin>>ptr[i];
 }

cout<<ptr[0];


}






/*
class person
{
    public:
    string name;
    person(string name)
    {
        this->name=name;

    }
    class address
    {
    public:
    string country;
    int hsno;
        address(string country,int hsno)
        {
            this->country=country;
            this->hsno=hsno;

        }

    };
    address addr;
    void addressplease()
    {
    cout<<addr.country<<addr.hsno<<endl;
    }
};
int main()
{
person p;
p.address("kenya",12);
p.addressplease();


}


/*
class human
{
public:
    int static counts()
    {
        static int humancount=0;
        humancount++;
    }
};
int main()
{
    human *h;
    cout<<h->counts();

    cout<<human::counts();
    cout<<human::counts();



}


/*
class person{
protected :string name;
public:
    void setname(string iname)
    {
        name=iname;

    }
    void getname()
    {
        cout<<name;
    }

};

class student:private person
{
public:
    void setgetname(string iname)
    {

        setname(iname);
    }


    void getname()
    {
        cout<<name;
    }


};

int main()
{
student s;
s.setgetname("dennics");
s.getname();

}
----------------

int  k[5]={12345};
const char c[6]="edgar";
const char *p="nhasb";
for(i=0;i<strlen(p);p++)
{
    cout<<

}
cout<<p[2]<<endl;
cout<<k<<endl;
cout<<c;
printf("%d",'!');
}
*
----------
int b[5]={1,2,3,4,5};
int a[5]={1,2,3,4,5};

int *ptr=b;
char c[10]="marry";
char d[10]="peter";
char *ptr3;
char *ptr4;
//char *f=strcpy(d,c);
//char *e=strcpy(c,d);
ptr3=c;
ptr4=d;

//cout<<*&e<<endl;
cout<<ptr3<<ptr4<<endl;

-----------

/*
class stu
{
int id;
string name;
public:
void getstu()
{
    cout<<"enter stuid name"<<endl;
    cin>>id>>name;
}
};
int  main()
{
for(int i=0;i<5;i++)
{
    for(int a=0;a<5;a++)
    {
            cout<<"x";
    }
    cout<<"\n";
}
}
--------------
    /*
    char a='a';
    char b='b';
    char  *const   ptr=&a;
    ptr=&b;
    cout<<ptr;
    -----------
    /*
    stu s;
    ofstream file;
    file.open("stu.txt");
    char op;
    do
    {
    s.getstu();
    file.write((char *)&s,sizeof(s));
    cout<<"any more students"<<endl;
    cin>>op;
    }while(op=='y'||op=='Y');

file.close();
*/
















/*
using std::cout;
int main()
{
 // signed short int a = 32765768;
 // unsigned short int b=-32772;
  //printf("%d",b);

  char *c="ABCSFSAJDSNADJSNADSAL;WEIOabcdefghijklmnopqrstuvwxyz0123456789~!@#$%^&*()_+|}{`{}:><,.";

  for(int i=0;i<strlen(c);i++)
    {
        cout<<c[i]<<"\t";
        printf("%d\n",c[i]);
    }
}
------------

class test
{
int a ,b;
public:
    void gettest()
    {
    cout<<"enter a and b";
    cin>>a>>b;
    }
    friend class test2;
};
class test2
{
int c, d;
public:
    void putcs(test t1)
    {
        cout<<t1.a;
        cout<<t1.b;
    }
};
int main()
{
    ios::
    test2 t3;
    test t1;
    t1.gettest();
    t3.putcs(t1);
}
/*
class test
{
public:
int a,b;
};
class sample
{
public:
int a,b;
friend void puts(sample,test);
};
void puts(sample s1,test t1)
{
    s1.a=10;
    s1.b=10;
    t1.a=30;
    t1.b=40;
    cout<<s1.a<<t1.b;
    cout<<s1.b<<t1.a;
}
int main()
{
    sample sw;
    test sq;
    puts(sw,sq);
}
/*
class test
{
int x;
public:
    void get()
    {
        cout<<"hello";
    }
    void puts();//definition
    void calls();//definition
};
//defining a class inside or outside the class
void test::calls()//declaration
{
    cout<<"mr bii";
}
void test::puts()
{
    cout<<"b";
}
int main()
{
 test tst;
 tst.get();
 tst.puts();
 tst.calls();
}
/*
int a=0;
char b=0;
double c=0;
int *ptr=&a;
char *ptr1=&b;
double *ptr2=&c;
printf()<<endl;
cout<<sizeof(ptr1);
cout<<sizeof(ptr2);
cout<<ULONG_MAX<<endl;
cout<<UINT_MAX<<endl;
/
int name[5];
//printf("enter your name");
for(int i=0;i<5;i++)
{
printf("enter your name");
scanf("%d",&name[i]);
}
for(int i=0;i<5;i++)
{
printf("%d",name[i]);
}
-----------
typedef char* String;
typedef int integer;
String name="derererer";
char d[]={"fghghgh"};
int x[]={6};
integer momo=3;
printf("%s",name);
cout<<momo;
cout<<*d;
*/
/*
class sample{
int a,b;
public:
    sample(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
copyconstruct(sample &sam)
{
    a=sam.a;
    b=sam.b;
}
    void print()
    {
    cout<<a<<b<<endl;
    }
copyconstruct2(sample &sam)
{
    a=sam.a;
    b=sam.b;
}
void prints()
{
    cout<<a<<b<<endl;
}
};
int main()
{
    sample s1(12,23);
    sample copyconstruct(s1);
    copyconstruct.print();
    s1.print();

    sample copyconstruct2(s1);
    copyconstruct2.prints();
    s1.print();
}
-------------------

class sample
{
int a,b;
const float pi;
public:
friend void print(sample);
friend class sample2;
 sample():pi(3.142)
{
}
    void show()
    {
        a=10;
        b=30;
        cout<<b*pi<<endl;
    }
    void showconst()const
    {
        //a=40;
        //b=50;
        cout<<a<<endl<<b<<endl;
    }


};

void print(sample sa)
{
    cout<<sa.a<<"friend function";

}



class sample2{

public:
    sample obj;
    float price;
    void samples(sample sp)
    {
      sp.a;
      sp.b;
      cin>>price;
        cout<<sp.a<<sp.b<<obj.pi<<price<<endl;
    }


};


int main()
{
sample sp;
sp.show();
sp.showconst();
sample2 sp2;
sp2.samples(sp);
getch();

}

/*
---------------------

class sample
{
int a,b;
friend void print(sample);
};
void print(sample t)
{
    t.a=10;
    t.b=20;

    cout<<t.a<<endl;
    cout<<t.b<<endl;

}
int main()
{
 sample s;
 print(s);
 getch();
}
*/

/*
template <class t>
t sum(t a ,t b)
{

    return a+b;
}
int main()
{
cout<<sum(12,25);
getch();
}
--------------
class test
{
int a,b;
public:

friend class test2;

void getab()
{
   cout<<"enter values";
   cin>>a>>b;
}
};
class test2
{
public:
 void putab(test t1)
 {
cout<<t1.a;
cout<<t1.b;
 }
};
int main()
{
test t1;
test2 t2;
t1.getab();
t2.putab(t1);
}
/*
---------------
class test
{
int a,b;
public:
void setdata();
void getdata();
};
void test::setdata()
{
cout<<"enter values"<<endl;
cin>>a>>b;
}
void test::getdata()
{
cout<<a<<b<<endl;
}

int main()
{
test t1;
t1.setdata();
t1.getdata();
}
/*
---------------
copy constructor
class test
{
   int a,b;
public:
   test(int a,int b)
    {
    this->a=a;
    this->b=b;
    }
 test(test &old)
 {
    a=old.a;
    b=old.b;
 }
    void print()
    {
       cout<<a<<endl;
       cout<<b<<endl;
    }
};
int main()
{
test t1(10,20);
test t2(t1);

t1.print();
t2.print();

}
/*
class test
{
    int a,b;
 public:
    testset(int a,int b)
    {
        this->a=a;
        this->b=b;
    }

    void get()
    {
        cout<<a<<b;
    }
};
int main()
{
    test t;
    t.testset(10,23);
    t.get();
}
------------------
class shape
{
 protected:float d1,d2;
    public:
    void getdim()
    {
      cout<<"Enter a Value\n";
      cin>>d1;
      cout<<d1;
    }
virtual float area() =0;
};
class circle:public shape
{
public:
    float area()
    {
    return 0.5*d1*d1;
    }
};
class rect:public shape
{
public:
    float area()
    {
        return d1*d1;
    }
};

int main()
{
circle cir;
cir.getdim();
cout<<cir.area();
rect ar;
ar.getdim();
cout<<ar.area();
}

/*
------------------
int box=5;
int *ptr=&box;
int **dptr=&ptr;
cout<<dptr<<"address of the pointer"<<endl;
cout<<*dptr<<"address of the box"<<endl;
cout<<**dptr<<"value at *ptr"<<endl;
---------------------

class sample
{
int a,b;
friend void print(sample);
};
void print(sample s)
{
    s.a=10;
    s.b=20;
    cout<<"a"<<s.a<<endl;
    cout<<"b"<<s.b;
}
int main()
{
   sample x;
   print(x);
}


/*
int x=200;
void func()
{
class test
{
int x=10;//local variables
public:
    void show()
    {

        x=100;
        cout<<::x;//scope operator acccesing globla variables
        cout<<x;
    }

};
test t;
t.show();
}
int main()
{
func();
}

/*
int main()
{
int a[5]={1,2,3,4,5};
int *ptr=a;
cout<<ptr;

}
/*
class person
{
const float pi;
float pa;
int months;
public:
    person():pi(3.14)
    {

    }
    void show(float pa,int months)
    {
        this->pa=pa;
        this->months=months;
        cout<<pi*pa*months;
    }

};

int main()
{
    person p;
    int n;
    //p.show(0.213,12);
    cout<<"enter array size";
    cin>>n;
    int *ptr=new int[3];
    for(int i=0;i<3;i++)
    {
      *(ptr+0)=23;
      *(ptr+1)=24;
      *(ptr+2)=25;
        cout<<ptr+0<<endl;
        cout<<ptr+1<<endl;
        cout<<ptr+2<<endl;
    }
     for(int i=0;i<n;i++)
    {
        cout<<*(ptr+i);

    }

delete ptr;
}




    /*
    cout<<setfill('x');
    cout<<setw(15)<<"1"<<endl;
    cout<<setw(15)<<"10"<<endl;
    cout<<setw(15)<<"100"<<endl;
    cout<<setprecision(3)<<endl;
    cout<<22/7.0<<endl;
    cout<<setbase(16)<<65;
    */








/*
struct student{
int rollno;
char name[20];
};
int main()
{
    struct student si;
    struct student *ptr=&si;

printf("enter roll no");
scanf("%d",&si.rollno);
printf("%d",ptr->rollno);
}
----------------------

/*
using namespace std;
struct node
{
    int data;
    struct node* link;
};
struct node* root;
void append()
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter Node Data\n");
scanf("%d",&temp->data);
cout<<(temp->data);
if(root==NULL)
{
root=temp;
}
else
{
    struct node*p;
    p=root;
    while(p->link!=NULL)
    {

        p=p->link;
    }
    p->link=temp;
}
}
void display()
{
   struct node*temp;
   temp=root;
   cout<<root->data;
if(temp==NULL)
{
    cout<<"No data to display\n";
}
else
{
    while(temp!=NULL)
    {
     cout<<temp->data;
    temp=temp->link;
    }
}


}

int counter()
{
    int counts=0;

    struct node*temp;
    temp=root;
    while(temp!=NULL)
    {
        counts++;
        temp=temp->link;
        cout<<counts;

    }
    return counts;
}
void quit()
{
  exit(1);
}
void info()
{
    cout<<"shabdhds";
}
int main()
{
    int choice;
      int len;
while(1)
{
    printf("single list operations\n\n");
    printf("1.Append\n");
    printf("2.Addatbegin\n");
    printf("3.Addafter\n");
    printf("4.Length\n");
    printf("5.Display\n");
    printf("6.Delete\n");
    printf("7.Quit\n");
    printf("8.counter\n");

    printf("Enter your Choice\n\n");
    scanf("%d",&choice);

switch(choice)
    {

    case 1:
        append();
        break;

    case 8:
        len=counter();
        cout<<len;
        break;

    case 5:
        display();
        break;
    case 4:
        info();
        break;
    case 7:
        quit();

        default:
            printf("invalid input");

}

}
}






/*
--------------------------
struct node
{

    int data;
    struct node* link;

};
struct node* root=NULL;
int len;
void append(void);
void addatbegin(void);
void addatafter(void);
int length(void);
void display(void);
void quit();

int main()
{
    int choice;



while(1)
{
    printf("single list operations");
    printf("1.append\n");
    printf("2.addatbegin\n");
    printf("3.addafter\n");
    printf("4.length\n");
    printf("5.display\n");
    printf("6.delete");
    printf("7.quit");

    printf("enter your choice");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        quit();
        break;

        case 2:
        addatbegin();
        break;

        case 3:
        addatafter();
        break;

        case 4:
        length();
        break;

        case 5:
        display();
        break;

        case 6:
       // delete();
        break;

        case 7:
        quit();

        default:
            printf("invalid input");

}
}
}
//int length()
//{
//int count=0;
//struct node* temp;/
///}
void append()
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter node data");
scanf("%d",&temp->data);
temp->link;

if(root==NULL)
{

    root=temp;

}
else
{
    struct node* p;
    p=root;
    while(p->link !=NULL)
    {
        p=p->link;
    }


}
}

int length()
{
int count=0;
struct node *temp;
temp=root;
while(temp !=NULL)
{
    count++;
    temp=temp->link;
}
return count;
}
void display()
{
struct node*temp;
temp=root;

   if(temp==NUll)
   {

       printf("list empty");

   }
   else
   {
       while(temp!==NULL)
       {
        cout<<temp->data;
        temp=temp->data;
       }


   }

}
void delete(void)
{

}

-----------------------

-------------------------

/*---
struct node
{
int data;
node *link;
};
struct node *root=NULL;
int main()
{
root=(struct node*)malloc(sizeof(struct node));
cout<<"ENTER DATA";
for(int i=0;i<5;i++)
{
scanf("%d",&root->data);
root->link=NULL;
}
for(int i=0;i<5;i++)
{
cout<<root->data;
cout<<root->link;
}
}
---------------------------

class person
{
int *age;
string *fname;
string *lname;
public:
person(int age,string fname,string lname)
{
this->age=&age;
this->fname=new string(fname);
this->lname=new string(lname);
}
void getage()
{
    cout<<*(this->age);
    cout<<*(this->fname);
    cout<<*(this->lname);
}
};
int main()
{
person p(10,"Edgar","james");
p.getage();
}

-------------------------------------

    person(int b)
    {
        this->b=b;
    }
    void getage()
    {
        cout<<*(this->age);
   }
*/








/*
class person{
int a=23;
public:
void show()
{
cout<<this<<endl;
cout<<&a<<endl;
}
person()
{
}
};
int main()
{

person p;
p.show();

person p1;
p1.show();

person p2;
p2.show();


/*
int bae=10;
int &ptr=bae;
int &ptr1=ptr;
int &ptr2=ptr1;
cout<<bae<<endl;
cout<<ptr<<endl;
cout<<ptr1<<endl;
cout<<ptr2<<endl;
*/
/*
class person
{
public:
string *name;
person(string names)
{
this->name=new string(names);
}
void callperson()
{
cout<<*name;
}
};
int main()
{
person rons("joash");
rons.callperson();
}
/*
int main()
{
int *p=(int*)malloc(3*sizeof(int));

*(p+0)=102;
*(p+1)=123;
p[2]=125;

for(int i=0;i<3;i++)
{
   cout<<*(p+i);
}
}




int main()
{
int arr[]={1,2,3};
cout<<arr+0;
cout<<*(arr+2);
int n,i;
cout<<"enter the number of integer space";
scanf("%d",&n);
int *ptr=(int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
    scanf("%d",(ptr+i));
}
for(i=0;i<n;i++)
{
    cout<<*(ptr+i);
}
}
/*
int arr[4]={1,2,3,4};
cout<<*arr+1;
int a=10;
cout<<*(&a);
cout<<sizeof(int*);
}
/*
struct emp
{
string name="sdsd";
struct emp *ptr=NULL;
int age=256;
}rons;
int  main()
{
struct emp person;
emp *temp=new emp();
int *ptr1=new int;
int *ptr;
cout<<temp<<endl;
cout<<temp->age;
cout<<ptr<<endl;
cout<<ptr1<<endl;
cout<<person.name<<endl;
}
/*
int *a=(int*)malloc(10*sizeof(int));
for(int i=0;i<=10;i++)
{
a[i]=i;
}
for(int i=0;i<=10;i++)
{
cout<<a[i];
}
}
/*
------------------
int a=1025;
int *ptr;
ptr=&a;
cout<<*(&ptr)<<endl;
cout<<&ptr<<endl;
cout<<ptr<<endl;
cout<<&a<<endl;
char *p0=(char*)ptr;
cout<<p0;
-------------------
void printhello()
{
    cout<<"hello";
}
int *add(int *x,int *y)
{
int c=(*x)+(*y);
return &c;
}
int main()
{
    int a=5;
    int b=8;
    int *ptr=add(&a,&b);
    printhello();
    cout<<*ptr;
}
----------------------
void refrence(int *x,int *y)
{
int *temp=x;
x=y;
y=temp;
cout<<*x<<*y;
}
int main()
{
int x=10;
int y=20;
refrence(&x,&y);
}
/*
-------------
template <typename t> void display(t x)
{
    cout<<x;
}
template <>void display<int>(int x)
{
    cout<<x;
}
int main()
{
display(34);
display("evans");
}

/*
template<typename t1,typename t2,typename t3,typename t4> void display(t1 a,t2 b,t3 c,t4 d)
{

    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
}
template <class t>t maxi(t x,t y)
{
    if(x!=y)
    {
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
    }
    else
    {
        cout<<"type mismatch";
    }
}
int main()
{
display("arrested",78,"makers",789.78);
//cout<<maxi(23,27);
}
/*
template<typename max> int display(max x, max y)
{
if(x>y)
{
    return x;
}
else
{
    return y;
}
}
int main()
{

cout<<display(45.4,25.7);
}
/*
-------------\
ofstream file("anifl.txt",ios::in|ios::out|ios::app);
if(file.is_open())
{
file.seekp(3);
file<<"name is roinsert";
cout<<file.tellp()<<endl;

}
-------------------
ifstream file;
file.open("anil.txt");
if(!file.is_open())
{
    cout<<"error opening file";
}
else
{
    string line;
    while(file.good())
    {
    getline(file,line);
    cout<<line;
    }
}
--------------------
ofstream file("anil.txt");

if(!file.is_open())
{
    cout<<"unable to open file";

}
else
{
    cout<<"file open";
    file<<"iostream";
    file<<"upstream";
    file<<"ifstream";
    file.close();
}
-----------
  fstream file;
  file.open("rons.txt",ios::in | ios::out|ios::trunc);
  if(!file)
  {
     cout<<"error while file open"<<endl;

  }
  else
  {
      cout<<"file open successfully"<<endl;
      file.close();
  }
}

-----------
string data;
getline(cin,data);
cout<<data;
-------------
int main()
{
string data("l p");
// data.append("r");
cout<<data.size();
data.insert(0,"the");
cout<<data;
}
------------
cout<<hex<<10<<endl;
cout<<setw(10)<<setfill('0')<<"anil"<<endl;
cout<<"shetty";
--------------
bool boolvalue;
//cin.setf(ios::boolalpha);
//cout.setf(ios::boolalpha);
//cin>>boolvalue;
cout.width(10);
cout.fill('*');
cout.precision(4);
cout<<123.343434;
cout.setf(ios::right );
cout.width(10);
cout.fill('-');
cout<<boolvalue;
-----------------
cout.setf(ios::showpos|ios::showpoint);
cout.unsetf(ios::showpoint);
cout.unsetf(ios::showpos);
auto flag=ios::showpos  | ios::showpoint;
cout.flags(flag);
cout<<100.9<<endl;
cout<<0.3<<endl;
cout<<100<<endl;
cout<<100<<endl;

/*
-----------------
int main()
{
    try
    {

    throw "hello";
    }
    catch(const char *err)
    {
        cout<<err<<endl;
    }
    catch(int error)
    {
        cout<<error<<endl;
    }
    catch(bool error)
    {
        cout<<error<<endl;
    }
    catch(...)
    {
        cout<<"beasts"<<endl;
    }
    {
    }
}

----------------------
int main()
{
int a=0;
int b=10;
try{
if(a==0)
{
    throw runtime_error("divide by zero error");

}
else
{
    cout<<a/b;
}
}catch(runtime_error &error)
{
    cout<<"exception occurred";
    cout<<error.what();
}

}
-----------------
/*
int main()
{
int a=10;
int b=10;
try{
if(a==0)
{
    throw "divide by zero error";

}
else
{
    cout<<a/b;
}
}catch(const char *e)
{
    cout<<"exception occurred"<<e;

}

}
------------

class animal{
public:int age;
void walk()
{
cout<<"animal walks";
}

};
class tiger:virtual public animal
{
};
class lion:virtual public animal
{
};

class liger:public tiger,public lion{
};
int main()
{
    liger anime;
    anime.walk();
}
-------------
class person{
public:
    virtual void introduce()
    {
        cout<<"hello";
    }
};
class student:public person{
public:
    void introduce()
    {
        cout<<"hi from student";
    }
};

class gstudent:public student{
public:

};


int main()
{
gstudent stdents;
stdents.introduce();
}
--------------------
class person
{
private:int age;
public:
    void setage(int age)
    {
        age=age;

    }

    void getage()
    {
        cout<<this->age;
    }
};
int main()
{

 person p;

 p->setage(12);
 p.getage();

}
----------------
class person
{
  public:
      void introduce()
      {
          cout<<"iam person"<<endl;
      }
};

class student:public person{

public:
    void introduce()
    {
       cout<<"i ama as student"<<endl;
       person::introduce();
    }
};
int main()
{

student stdt;
stdt.introduce();
//stdt.person::introduce();
}
----------
class mother
{
public:
    string mothername="mother";
    void askmother()
    {
        cout<<"what do want mother";
    }


};
class son{
public:
    string sonname="son";
    void askson()
    {
        cout<<"what do you want son";

    }


};
class uncle{
public:
    string unclename="uncle";
    void askuncle()
    {
        cout<<"what do you want uncle";

    }
};

class all:public mother,public son,public uncle{
public:

void setname(string mothername,string unclename,string sonname)
{
   mothername=mothername;
   unclename=unclename;
   sonname=sonname;
}
void getname()
{
    cout<<mothername<<unclename<<sonname;
}

};

int main()
{
all everyone;
everyone.askson();
everyone.setname("jenni","robert","michael");
everyone.getname();

}


----------------
class human{

public:
     string name;


     void getname()
     {
         cout<<name;

     }
       void setname(string name)
     {
          name=name;
     }
};
class servants : public human{

    public:
    void introduce(){
        cout<<name;
    }
};

int main()
{
servants srv;
human man;
man.setname("ronser");
man.getname();


}


--------------------------

class human{
private :int age;

public:
    void getage()
    {
        cout<<age<<endl;

    }

    void setage(int value)
    {
        age=value;

    }

   int display()
    {
      // return *this.age();
    }

};

--------------------------
/*
for(int var:{11,22,33,44,55,66})
{
     cout<<var<<endl;
}
------------
int *ptr=NULL;
cout<<"how many item you want";
int input;
cin>>input;
ptr=new int(input) ;
cout<<**(&ptr);


cout<<file;

-------------
int *ptr=new int;
*ptr=30;
//string *ptr=new string;
cout<<**(&ptr);
delete ptr;

cout<<**(&ptr);

----------
int a=10;
int *ptr=&a;
cout<<**(&ptr)<<endl;
cout<<&a<<endl;
cout<<&ptr<<endl;
cout<<**(&ptr)<<endl;

/*
struct address{
string location;
int houseno;
};

struct student{
int rollno;//def of struct property
string gender;//def of struct property
address std;
};

int main()
{
student rons;
student *ptr=&rons;
ptr->gender="male";
ptr->rollno=123;
ptr->std.houseno=797;
ptr->std.location="rubia";

cout<<ptr->gender<<endl;
cout<<ptr->rollno<<endl;
cout<<ptr->std.houseno<<endl;
cout<<ptr->std.location<<endl;
*/




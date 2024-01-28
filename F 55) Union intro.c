// union is simlar to structure and its syntax is also same as that of structure.
// only difference is union keyword is used for union and we can use only one data from union at a time..
// trying to use more than one variables from one union will give garbage value..

#include <stdio.h>
#include <string.h>
union student // student union is defined here.
{
    int age, roll;
    char name[25];
};
int main()
{
    union student s;
    printf("\n-->Assigning values to variables, and then immediatly using those \n variables before giving values to other variables.\n");
    strcpy(s.name, "Bishal Bhat");
    printf("Name : %s \n", s.name);
    s.roll = 1;
    printf("Roll no. : %d \n", s.roll);
    s.age = 22;
    printf("Age : %d \n", s.age);

    // up untill now, every output is just like we predicted..
    // now look at the output..
    printf("\n --> Displaying the same Values again to demonstrate that, \n we can use the union variables only one at a time.\n");
    printf("Name : %s \n", s.name);     // gives us garbage(undesired) output.
    printf("Roll no. : %d \n", s.roll); // gives us garbage output.
    printf("Age : %d \n", s.age);       // this "s.age" only gives desired output.

    return 0;
}

/*
    At a time, only one union variable strores data. so if we store new value to new variables,
    the data stored on the other old variables get lost. this is the reason we get garbage output
    in second time output.
    i.e:
    Name = gave garabe vale, Roll no : gave garbage value, age = 22
    only age output is correct.
    this is because, the last saved value is in age variable so. s.age give correct output..

*/

/*
    structure provides us with storage of all data variables and we can use all data variables
    without any data loss. So, we use structure more in c programming.

*/
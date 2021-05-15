/*
CH-230-A
a7_p6.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct person
{
    char name[30];
    int age;
};

typedef struct person People;

/* FUNCTIONS CREATION */

//Sorting by Age
int sortAge(People* p1, People* p2)
{
    if(p1->age < p2->age) 
        return -1;
    else if(p1->age > p2->age) 
        return 1;
    else 
        sortName(p1, p2);
        //return 0;
}

//Sorting by name
int sortName(People* p1, People* p2)
{
    char* one = p1->name;
    char *two = p2->name;
     
    while(*one != '\0' && *two != '\0')
    {
        if(*one < *two) 
            return -1;
        else if(*one > *two)   
            return 1;
        else 
        {
            one++; 
            two++;
        }
    }
    sortAge(p1, p2);
    //return 0;
}

void bubblesort(People *p, int (*func)(People *p1, People *p2))
{
    
}




//MAIN FUNCTION
int main ()
{
    int num, i;
    scanf("%i", &num);

    People* data;
    //dynamic memory
    data = (People*) malloc (sizeof(People) * num);
    if(data == NULL)
    {
        printf("Error!\n");
        return 0;
    }

    //reading in elements of the structure
    for(i = 0; i < num; i++)
    {
        scanf("%s", data[i].name);
        scanf("%d", &data[i].age);
    }

    //array of function pointers
    int (*func[2])(People* p1, People* p2) = {sortAge, sortName,};

    //Now sorting

    //sort name
    bubbleSort(data, 1, num);
    for (int i = 0; i < num; i++){
        printf("{%s, %d}; ", data[i].name, data[i].age);
    }
    printf("\n");
    
    //sort by age
    bubbleSort(data, 0, num);
    for (int i = 0; i < num; i++){
        printf("{%s, %d}; ", data[i].name, data[i].age);
    }
    printf("\n");
    
    free(data);
    return 0;
}

/*Bubble sort
void bubbleSort(People* people, int select, int num)
{
    //array of function pointers
    int (*func[2])(People* p1, People* p2) = {sortAge, sortName,};

    People temp, *pos;
    temp = *people;

    int swapped = 1;
    while (swapped == 1)
    {
        swapped = 0;
        for(pos = people+1; pos-people < num; pos++)
        {
            if(func[select](pos-1, pos) == 1)
            {
                temp = *pos;
                *(pos) = *(pos-1);
                *(pos-1) = temp;
                swapped = 1;
            }
            else if(func[select](pos-1, pos) == 0)
            {
                //if first comparison was same, change to second
                int check;
                if(select == 0)
                    check = 1;
                else
                    check = 0;

                if(func[check](pos-1, pos) == 1)
                {
                    temp = *pos;
                    *pos = *(pos-1);
                    *(pos-1) = temp;
                    swapped = 1;
                }
            }
        }
    }
}
*/
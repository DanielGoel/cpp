/*
Daniel Goel
1/14/2023
assignment 1
*/
#include <stdio.h>

//create structure Date
struct Date
{
    //integers that will be used in the structure
    int day;
    int month;
    int year;
};

//sets Date object equal to day month and year and returns that object
struct Date setDate(int month, int day, int year){
    //creates object
    struct Date d;
    //sets object equal to day month and year
    d.day=day;
    d.month=month;
    d.year=year;
    //returns object
    return d;
}


//This function will check which month of the year it is and return how many days are in that month
int getDaysInMonth(int month){
    //if month is 1,3,7,8,10 or 12 then there is 31 days so return 31
    if (month==1)
        return 31;
    if (month==3)
        return 31;
    if (month==7)
        return 31;
    if (month==8)
        return 31;
    if (month==10)
        return 31;    
    if (month==12)
        return 31;  
    //if month is 2 then there is 28 days so return 28  
    if (month==2)
        return 28;
    //any other month has 30 days so return 30
    else
        return 30;
}       

//This function will take the given date value and output that day +1
struct Date getNextDate(struct Date d){
    printf("\nThe next date is: \n");
    //create new Object nextDate
    struct Date nextDate;
    //sets values of d to Date
    nextDate.day=d.day;
    nextDate.month=d.month;
    nextDate.year=d.year;
    //if the day is equal to the amount of days in a specific month then set day to 1
    if(d.day==getDaysInMonth(d.month)){
        nextDate.day=1;
        //if month is equal to 12 then its the last month of the year
        if(d.month==12){
            //set month equal to 1
            nextDate.month=1;
            //add one to year value
            nextDate.year=d.year+1;
        }
        else{
            //if its not the last month then just add 1 month
            nextDate.month=d.month+1;
        }
    }
    else{
        //if the day isnt equal to the amount of days in the month then just add one day
        nextDate.day=1+d.day;
    }
    //outputs the next date 
    return nextDate;
}

int compareDate(struct Date d1, struct Date d2){
    //if year1 equals year2 then check month
    if(d1.year==d2.year){
        //if month1 equals month2 then check day
        if(d1.month==d2.month){
            //if day1 equals day2 then return 0 bc same date
            if(d1.day==d2.day){
                return 0;
            }
            //if the days are not equal then see if day1 is larger than day2
            else{
                //if day1 is larger then return 1
                if (d1.day>d2.day){
                    return 1;
                }
                else {
                    //if day2 is larger then return -1
                    return -1;
                }
                    
            } 
        }
        //if the months are not equal then see if month1 is larger than month2
        else{
            if(d1.month>d2.month){
                //if month1 is larger then return 1
                return 1;
            }    
            else{
                //if month2 is larger then return -1
                return -1;
            }           
        }        
    }
    //if the years are not equal then see if year1 is larger than year2
    else{
        //if year1 is larger then return 1
        if(d1.year>d2.year){
            return 1;
        }
        else{
            //if year2 is larger then return -1
            return -1;
        }
    }
}

int main(){
    //create all of the ints that we will be gathering from the user
    int month,day,year;
    int month1,day1,year1;
    int month2,day2,year2;
    printf("input the date in mm/dd/yyyy form please:");
    scanf("%d/%d/%d", &month,&day,&year);
    //takes what the user input and converts it into the structure
    struct Date d = setDate(month,day,year);
    //takes the day the user input and adds one day to it
    d=getNextDate(d);
    //prints out next date
    printf("the next date: %d/%d/%d\n", d.month,d.day,d.year);
    //asks which dates you want to compare and stores them as variables
    printf("\nenter the first date you want to compare in mm/dd/yyyy form please: \n");
    scanf("%d/%d/%d", &month1,&day1,&year1);
    printf("\nenter the second date you want to compare in mm/dd/yyyy form please: \n");
    scanf("%d/%d/%d", &month2,&day2,&year2);
    //sets the input dates into object d1 or d2 based on which date
    struct  Date d1=setDate(month1,day1,year1);
    struct Date d2=setDate(month2,day2,year2);
    //uses compare date to compare date1 and date2
    //will output -1 if date2 is ahead 
    //will output 1 if date1 is ahead 
    //will output 0 if date2 is equal to date1
    printf("%d", compareDate(d1,d2));

    return 0;
}

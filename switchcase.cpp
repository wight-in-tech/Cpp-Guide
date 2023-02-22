#include<iostream>
using namespace std;


/*Switch cases :
             they can be used instead of the else-if ladder.Menu driven program can be written easily with them.
If-else ladder will check multiple conditions and then execute the block if condition is true
Switch statement will directly jump to the case block.
If-else ladder is slow and switch is fast.
Switch can be used only for checking single value. If-else can be used for checking range of values.*/



/*
properties of Switch cases:
• Switch is a branch and control statement
• Switch can have 0 or more cases
• Each case is defined with a label
• Depending on the value of expression in switch corresponding case black is executed
• Is a case block is not available then default block is executed
• Default block is optional
• Every case block must terminate with break
• If breaks are not mentioned then cases will fall thru
• Switch is used for menu-driven programs*/

//lets solve the earlier problem of day using day number with switch cases:
int main(){
             int day;
             cout<<"enter the day number";
             cin>>day;
                switch(day)
    {
        case 1: cout<<"sunday";
            break;
        case 2: cout<<"monday";
            break;
        case 3: cout<<"tuesday";
            break;
        case 4: cout<<"wednesday";
            break;
        case 5: cout<<"thursday";
            break;
        case 6: cout<<"friday";
            break;
        case 7: cout<<"saturday";
            break;
        default: cout<<"invalid day number";
    }
    return 0;
}


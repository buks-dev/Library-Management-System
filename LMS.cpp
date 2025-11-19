// LMS stands for Library Management System
#include <iostream>
#include "lms.h"
#include <string>
using namespace std;


void libraryItem::setTitle(string title){
    Title = title;
}

void libraryItem::setCreator(string creator){
    Creator = creator;
}

void libraryItem::setItemId(string item_id){
    ItemId = item_id;
}

void libraryItem::CreateSudentID(){
   cout<<"Please Enter Your Matric Number: ";
   StudentID = keyboard.getIntegerInput();
}



